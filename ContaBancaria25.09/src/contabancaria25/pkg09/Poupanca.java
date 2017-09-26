/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contabancaria25.pkg09;

/**
 *
 * @author Alexandre
 */
public class Poupanca extends Conta {

    int dia;

    public Poupanca() {
        super();
        dia = 0;
    }

    public Poupanca(String nome, int agencia, int numero, float saldo, int dia) {
        super(nome, agencia, numero, saldo);
        this.dia = dia;
    }

}
