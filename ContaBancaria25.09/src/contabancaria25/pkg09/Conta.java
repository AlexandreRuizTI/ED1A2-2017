/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contabancaria25.pkg09;

import javax.swing.JOptionPane;

/**
 *
 * @author Alexandre
 */
public class Conta {

    private String nome;
    private int agencia;
    private int numero;
    protected float saldo;

    public Conta() {
        nome = new String();
        agencia = 0;
        numero = 0;
        saldo = 0;
    }

    public Conta(String nome, int agencia, int numero, float saldo) {
        this.agencia = agencia;
        this.nome = nome;
        this.numero = numero;
        this.saldo = saldo;
    }

    public void Depositar(float valor) {
        if (valor < 0) {
            JOptionPane.showMessageDialog(null, "Insira um número positivo");
        } else {
            saldo += valor;
        }
    }

    public void Sacar(float valor) {
        if (valor > saldo) {
            JOptionPane.showMessageDialog(null, "Erro");
        } else {
            saldo -= valor;
        }
    }

    public void MostrarSaldo() {
        JOptionPane.showMessageDialog(null, "Seu saldo podre é:" + saldo);
    }

}
