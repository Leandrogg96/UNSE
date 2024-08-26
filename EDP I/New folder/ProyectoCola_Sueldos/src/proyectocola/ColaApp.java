/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package proyectocola;

import colaDinamica.*;
import datos.Empleado;
import entradaSalida.consola;

public class ColaApp {

    ColaDinamica E, Aux;

    public ColaApp() {
        E = new ColaDinamica();

    }

    public void menu() {

        int opcion = 1;
        int ban;
        do {
            System.out.println("Gestion Sueldos");
            System.out.println("1) Cargar empleados");
            System.out.println("2) mostrar empleados por filial");
            System.out.println("3) Imprimir sueldos");
            System.out.println("4) Baja de empleados");
            System.out.println("5) Fin de Programa");
            System.out.print("Opcion: ");
            opcion = consola.leerEntero();

            switch (opcion) {
                case 1:
                    System.out.println("agregar empleado ");
                    GenerarCola();

                    break;
                case 2:
                    mostrarEmpleadoPorFilial();
                    break;
                    
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
            E.insertar(emp);
            System.out.print("Continuar s/n: ");
            op = consola.leerString();
        }
    }

    private void bajaEmpleado() {
        int doc = 0;
        ColaDinamica aux = new ColaDinamica();
        int b = 0;
        if (!E.colaVacia()) {
            System.out.print("Ingrese el documento a eliminar: ");
            doc = consola.leerEntero();
            boolean esta = buscar(doc);
            if (esta) {
                while (!E.colaVacia()) {
                    Nodo x = E.quitar();
                    if (x.getDato().getDoc() == doc) {
                        b = 1;
                    } else {
                        aux.insertar(x);
                    }
                }
                if (b == 1) {
                    System.out.println("Eliminado");
                } else {
                    System.out.println("No se encontró");
                }
            } else {
                System.out.println("No se encontró");
            }
        } else {
            System.out.println("cola vacia");
        }
    }

    public boolean buscar(int ele) {
        ColaDinamica aux = new ColaDinamica();
        boolean b = false;
        if (!E.colaVacia()) {
            while (!E.colaVacia()) {
                Nodo x = E.quitar();
                if (x.getDato().getDoc() == ele) {
                    b = true;
                } else {
                    b = false;
                }
                aux.insertar(x.getDato());
            }
            retornar(aux, E);
        } else {
            System.out.println("No hay empleados");
        }
        return b;
    }

    public void mostrarEmpleadoPorFilial() {
        Aux = new ColaDinamica();
        System.out.print("Ingrese la Filial F/D/V : ");
        String filial = "";
        filial = consola.leerString();
        if (!E.colaVacia()) {
            System.out.println("EMPLEADOS DE LA FILIAL " + filial);
            System.out.println("Doc  Apellido HorasS HorasE Filial");
            while (!E.colaVacia()) {
                Nodo x = E.quitar();
                if (x.getDato().getFilial().equals(filial)) {
                    System.out.println(x.getDato().getDoc() + " " + x.getDato().getApe() + "    " + x.getDato().getHs() + "    " + x.getDato().getHs() + "    " + x.getDato().getFilial());
                }
                Aux.insertar(x);
            }
        } else {
            System.out.println("No hay empleados");
        }
        retornar(Aux, E);
    }

    public void retornar(ColaDinamica Aux, ColaDinamica C) {

        Nodo x;
        while (!Aux.colaVacia()) {
            x = Aux.quitar();
            C.insertar(x);
        }

    }

    private void sueldosF() {
        Aux = new ColaDinamica();
        if (!E.colaVacia()) {
            while (!E.colaVacia()) {
                System.out.println("EMPLEADOS DE LA FILIAL F");
                System.out.println("Doc  Apellido Sueldo FILIAL");
                Nodo x = E.quitar();
                int extra = 0;
                int monto = 0;
                float sueldo = 0;
                consola.emitirMensaje("Ingrese el monto : ");
                monto = consola.leerEntero();
                extra = x.getDato().getHe() + (15 / 100);
                sueldo = monto + extra;
                if ("F".equals(x.getDato().getFilial())) {
                    System.out.println(x.getDato().getDoc() + " " + x.getDato().getApe() + "    " + sueldo + "  " + x.getDato().getFilial());
                }
                Aux.insertar(x);
            }
        } else {
            System.out.println("No hay empleados");
        }
        retornar(Aux, E);
    }

    private void sueldosV() {
        Aux = new ColaDinamica();
        if (!E.colaVacia()) {
            while (!E.colaVacia()) {
                System.out.println("EMPLEADOS DE LA FILIAL F");
                System.out.println("Doc  Apellido Sueldo FILIAL");
                Nodo x = E.quitar();
                int extra = 0;
                int monto = 0;
                float sueldo = 0;
                consola.emitirMensaje("Ingrese el monto : ");
                monto = consola.leerEntero();
                extra = x.getDato().getHe() + (15 / 100);
                sueldo = monto + extra;
                if ("V".equals(x.getDato().getFilial())) {
                    System.out.println(x.getDato().getDoc() + " " + x.getDato().getApe() + "    " + sueldo + "  " + x.getDato().getFilial());
                }
                Aux.insertar(x);
            }
        } else {
            System.out.println("No hay empleados");
        }
        retornar(Aux, E);
    }

    private void sueldosD() {
        Aux = new ColaDinamica();
        if (!E.colaVacia()) {
            while (!E.colaVacia()) {
                System.out.println("EMPLEADOS DE LA FILIAL V");
                System.out.println("Doc  Apellido Sueldo FILIAL");
                Nodo x = E.quitar();
                int extra = 0;
                int monto = 0;
                float sueldo = 0;
                consola.emitirMensaje("Ingrese el monto : ");
                monto = consola.leerEntero();
                extra = x.getDato().getHe() + (15 / 100);
                sueldo = monto + extra;
                if ("D".equals(x.getDato().getFilial())) {
                    System.out.println(x.getDato().getDoc() + " " + x.getDato().getApe() + "    " + sueldo + "  " + x.getDato().getFilial());
                }
                Aux.insertar(x);
            }
        } else {
            System.out.println("No hay empleados");
        }
        retornar(Aux, E);
    }

    private void imprimirSueldo() {
        sueldosF();
        System.out.println("--------");
        sueldosV();
        System.out.println("--------");
        sueldosD();

    }
}
