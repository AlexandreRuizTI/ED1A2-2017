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
public class Corrente extends Conta {

    float limite;

    public Corrente() {
        super();
        limite = 0;
    }

    public Corrente(String nome, int agencia, int numero, int saldo, float limite) {
        super(nome, agencia, numero, saldo);
        this.limite = limite;
    }

    public void Sacar(float valor) {
        if (valor > (saldo + limite)) {
            JOptionPane.showMessageDialog(null, "Saldo Insuficiente");
        } else {
            saldo -= valor;
        }
    }

}
