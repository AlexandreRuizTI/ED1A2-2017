/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package view;

import javax.swing.JOptionPane;
import modelo.Limpeza;
import modelo.Perecivel;
import modelo.Vestuario;

/**
 *
 * @author Alexandre
 */
public class Cadastrar {

    public static void main(String[] args) {
        Perecivel ObjP = new Perecivel();
        Limpeza ObjL = new Limpeza();
        Vestuario ObjV = new Vestuario();

        int op;

        do {
            op = Integer.parseInt(JOptionPane.showInputDialog("Informe a operação desejada:"
                    + " \n Digite 1 para Cadastro de Produto"
                    + " \n Digite 2 para Cadastro Produto Perecível"
                    + " \n Digite 3 para Cadastro de Vestuario"
                    + " \n Digite 4 para mostrar Produtos de Limpeza"
                    + " \n Digite 5 para mostrar Produtos Perecíveis"
                    + " \n Digite 6 para mostrar o Vestuario"
                    + " \n Digite 7 para Sair"));

        } while (op != 7);

        switch (op) {
            case 1:
                ObjP.cadastrar();
                break;
            case 2:
                ObjL.cadastrar();
                break;
            case 3:
                ObjL.cadastrar();
                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;

            case 7:

                break;
        }

    }
}
