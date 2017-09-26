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
public class MainConta {

    public static void main(String[] args) {
        Corrente objCor = new Corrente();
        Poupanca objPou = new Poupanca();
        int op;
        float valor;
        do {
            op = Integer.parseInt(JOptionPane.showInputDialog("SEJA BEM VINDO AO BANCO ONDE ROUBAMOS VOCÊ"
                    + "\n - Digite 1 Depósito Conta Corrente: "
                    + "\n - Digite 2 Depósito Conta Poupança: "
                    + "\n - Digite 3 Saque Conta Corrente: "
                    + "\n - Digite 4 Saque Conta Poupança: "
                    + "\n - Digite 5 para Visualizar Saldo Conta Concorrente: "
                    + "\n - Digite 6 para Visualizar Saldo Conta Poupança: "
                    + "\n - Digite 7 para Sair: "));

            switch (op) {
                case 1:
                    valor = Integer.parseInt(JOptionPane.showInputDialog("\n Informe um valor para depósito em Conta Corrente: "));
                    objCor.Depositar(valor);
                    break;
                case 2:
                    valor = Integer.parseInt(JOptionPane.showInputDialog("\n Informe um valor para depósito em Conta Poupança: "));
                    objPou.Depositar(valor);
                    break;
                case 3:
                    valor = Integer.parseInt(JOptionPane.showInputDialog("\n Informe um valor para saque em Conta Corrente: "));
                    objCor.Sacar(valor);
                    break;
                case 4:
                    valor = Integer.parseInt(JOptionPane.showInputDialog("\n Informe um valor para saque em Conta Poupança: "));
                    objCor.Sacar(valor);
                    break;
                case 5:
                    objCor.MostrarSaldo();
                    break;
                case 6:
                    objPou.MostrarSaldo();
                    break;
                case 7:
                    System.exit(0);
            }
        } while (op != 7);
    }
}
