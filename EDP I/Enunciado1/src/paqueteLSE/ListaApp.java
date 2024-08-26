package paqueteLSE;

import java.util.Scanner;

public class ListaApp {

    Scanner ingreso = new Scanner(System.in);

    Lista miLista;

    public ListaApp() {
        miLista = new Lista();
    }

    public void generarMoneda() {
        float elem = -1;
        while (elem != 0) {

            System.out.print("Ingrese el valor de la moneda 0/Cancelar :");
            elem = ingreso.nextFloat();

            if (elem != 0) {
                System.out.print("Ingrese la denominacion: ");
                String denom = ingreso.next();
                menuPais();
                System.out.print("Ingrese el pais: ");
                String pais = ingreso.next();
                System.out.print("Ingrese el ano de acunacion: ");
                int año = ingreso.nextInt();
                Moneda c = new Moneda(elem, denom, pais, año);
                miLista.insertarpri(c);
            }
        }
    }

    public void menuPais() {
        System.out.println("**Para ingresar el pais siga lo siguiente: **");
        System.out.println("///RECUERDE ESCRIBIR EN MAYUSCULA///");
        System.out.println("AR-Argentina  USA-Estados Unidos  BR-Brasil  UE-Union Europea");
    }

    public int cantidad_pais() {
        int cant = 0;
        Nodo p = miLista.Inicio();
        menuPais();
        System.out.print("Ingrese el pais: ");
        String pais = ingreso.next();
        while (p != null) {
            Moneda m = p.getDato();
            if (m.getPais().toUpperCase().equals(pais)) {
                cant = cant + 1;
            }
            p = p.getPs();
        }
        return cant;
    }

    public int cantidadMonedas() {
        int cantm = 0;
        Nodo p = miLista.Inicio();
        System.out.println("Ingrese el año que desea buscar: ");
        int año = ingreso.nextInt();
        while (p != null) {
            Moneda m = p.getDato();
            if (m.getAño() == año) {
                cantm = cantm + 1;
            }
            p = p.getPs();
        }
        return cantm;
    }

    public void mostrarCantPais() {
        int cantp = cantidad_pais();
        System.out.println("La cantidad de monedas que hay del pais ingresado es: " + cantp);
        if (cantp == 0) {
            System.out.println("No hay monedas con el pais ingresado");
        }

    }

    public void mostrarMonedasAño() {
        int cant = cantidadMonedas();
        System.out.println("La cantidad de monedas en el año ingresado es: " + cant);
    }

    public void imprimir() {
        Nodo p = miLista.Inicio();
        System.out.println("\n**COLECCION DE MONEDAS**");
        System.out.println("VALOR  DENOMINACION  PAIS  ANO ");
        while (p != null) {
            Moneda c = p.getDato();
            System.out.println(c.getValor() + "     " + c.getDenom() + "      " + c.getPais() + "    " + c.getAño());
            p = p.getPs();
        }
    }

    public boolean verificar() {
        if (miLista.listaVacia()) {
            System.out.println("No hay monedas!");
            return false;
        }
        return true;
    }

    public void menu() {
        int opcion = 9;
        do {
            switch (opcion) {
                case 1:
                    generarMoneda();
                    break;
                case 2:
                    if (verificar()) {
                        mostrarCantPais();
                    }
                    break;
                case 3:
                    if (verificar()) {
                        mostrarMonedasAño();
                    }
                    break;
                case 4:
                    if (verificar()) {
                        imprimir();
                    }
                    break;
            }
            mostrarOpciones();
            opcion = ingreso.nextInt();
            System.out.println("--------->");

        } while (opcion != 0);
    }

    public void mostrarOpciones() {
        System.out.println("\n--Coleccion de monedas");
        System.out.println("1- Guardar moneda");
        System.out.println("2- Consultar cantidad de monedas de un pais");
        System.out.println("3- Cantidad de monedas en determinado año");
        System.out.println("4- Mostrar la coleccion de monedas");
        System.out.println("0- Salir");
        System.out.println("--------->");

    }

    public static void main(String[] args) {

        ListaApp miListaApp = new ListaApp();
        miListaApp.menu();
    }
}
