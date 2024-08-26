/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package proyectocola;

import colaDinamica.*;
import datos.Empleado;
import entradaSalida.consola;



/**
 *
 * @author Kelly
 */
public class ColaApp {

    ColaDinamica C, Aux;
   

    public ColaApp() {
        C = new ColaDinamica();

    }

    public void menu() {

        int opcion = 1;
        int ban;
        do {
            System.out.println("Gestion Sueldos");
            System.out.println("1) ............cargar empleados");
            System.out.println("2) mostrar empleados por filial");
            System.out.println("3) ............imprimir sueldos");
            System.out.println("4) ...........baja de empleados");
            System.out.println("5) .............Fin de Programa");
            System.out.println("Opcion: ");
            opcion = consola.leerEntero();

            switch (opcion) {
                case 1:
                    System.out.println("agregar empleado ");
                    GenerarCola();

                    break;
                case 2:
                    mostrarEmpleadoPorFilial();
                case 3:
                    imprimirSueldo();

                    break;
                case 4:
                    System.out.println("Baja de empleado ");
                    bajaEmpleado();

                    break;
                case 5:
                    break;
            }
        } while (opcion != 5);
    }

    private void GenerarCola() {
        String op = "s";
        while (!op.equalsIgnoreCase("n")) {
            Empleado emp = new Empleado();
            emp.leerDatos();
            C.insertar(emp);

            System.out.println("Continuar s/n");
            op = consola.leerString();
        }
    }

    private void bajaEmpleado() {
        String op = "s";
        while (!op.equalsIgnoreCase("n")) {
            System.out.println("ingrese el empleado a eliminar");
            int ele = consola.leerEntero();
            buscoyElimino(ele);
            System.out.println("continua(s/n");
            op = consola.leerString();
        }
    }

    public void buscoyElimino(int ele) {
       // completar el codigo
    }

    public void mostrarEmpleadoPorFilial() {
        Nodo temp;
        Aux = new ColaDinamica();
        if (!C.colaVacia()) {
            while (!C.colaVacia()) {
                temp = C.quitar();
                System.out.println(temp.getDato().getDoc() + " ");
                Aux.insertar(temp);
            }
        } else {
            System.out.println("cola vacia");
        }
        retornar(Aux, C);
    }

    public void retornar(ColaDinamica Aux, ColaDinamica C) {

        Nodo x;
        while (!Aux.colaVacia()) {
            x = Aux.quitar();
            C.insertar(x);
        }

    }

   
    private void imprimirSueldo() {

    }
}
