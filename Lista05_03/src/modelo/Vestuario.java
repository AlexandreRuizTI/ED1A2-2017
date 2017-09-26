/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

import javax.swing.JOptionPane;

/**
 *
 * @author Alexandre
 */
public class Vestuario extends SuperProduto {

    private String tamanho;

    public void cadastrar() {
        do {
            tamanho = JOptionPane.showInputDialog("Informe o Tamanho:");
        } while (!(tamanho.equals("P")) || (tamanho.equals("M")) || (tamanho.equals("G")) || (tamanho.equals("GG")));
    }

    public void mostrar() {
        JOptionPane.showMessageDialog(null, "Seu tamanho é:" + tamanho);
    }

}
