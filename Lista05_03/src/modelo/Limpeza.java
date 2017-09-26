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
public class Limpeza extends SuperProduto {

    private String TipoConservacao;

    public void cadastrar() {
        do {
            TipoConservacao = JOptionPane.showInputDialog("Informe o tipo de Conservacao");
        } while (TipoConservacao != "");
    }

    public void mostrar() {
        JOptionPane.showMessageDialog(null, "Seu tipo de conservação é:" + TipoConservacao);
    }
}
