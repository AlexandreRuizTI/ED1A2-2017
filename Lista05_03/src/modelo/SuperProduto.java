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
public class SuperProduto {

    private int id;
    private String descricao;

    protected void cadastrar() {
        do {
            id = Integer.parseInt(JOptionPane.showInputDialog("Informe seu ID"));
        } while (id > 0);
        do {
            descricao = JOptionPane.showInputDialog("Informe a descrição do produto");
        } while (descricao.length() <= 0 || descricao.length() > 12);
    }
}
