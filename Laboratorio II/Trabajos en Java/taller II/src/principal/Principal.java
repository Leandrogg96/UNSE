package principal;

import clases.Televisor;

public class Principal {
    public static void main(String[] args) {
        int opcion;

        Televisor televisor1 = new Televisor("Philco", 72);

        System.out.println("Se creo un televisor marca: " + televisor1.getMarca() + " de " + televisor1.getPulgadas() + " pulgadas.");

        televisor1.menu();

    }
}