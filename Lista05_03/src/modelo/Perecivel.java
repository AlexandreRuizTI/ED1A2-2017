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
public class Perecivel extends SuperProduto {

    private String validade;

    public void cadastrar() {
        do {
            validade = JOptionPane.showInputDialog(("Informe a validade do produto:"));
        } while (validade != "");
    }

    public void mostrar() {
        JOptionPane.showMessageDialog(null, "A validade de seu produto é:" + validade);
    }

}
