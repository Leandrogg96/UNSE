/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package proyectocola;

import colaDinamica.*;
import datos.Empleado;
import entradaSalida.consola;
import java.util.Scanner;

public class ColaApp {

    ColaDinamica C, Aux,H;
   

    public ColaApp() {
        C = new ColaDinamica();
        H = new ColaDinamica();
    }
    Scanner ingreso = new Scanner(System.in);
    
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
                    mostrarEmppleadosF();
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
            System.out.println("Datos del empleado");
            emp.leerDatos();
            C.insertar(emp);

            System.out.println("Continuar s/n");
            op = consola.leerString();
        }
    }
    public void mostrarCola(){
        Aux = new ColaDinamica();
        System.out.println("Documento  Apellido  Horas trabajas em el mes Horas extras  Filial");
        while(!C.colaVacia()){
            Nodo x = C.quitar();
            Empleado em = x.getDato();
            System.out.println(em.getDoc()+ " " +em.getApe()+ " " +em.getHsTrabajadas()+ " " +em.getHsExtras()+ " " +em.getFilial());
        }
        retornar(C,Aux);
        
    }
    private void bajaEmpleado() {
        String op = "s";
        while (!op.equalsIgnoreCase("n")) {
            System.out.println("ingrese el Dni del empleado a eliminar");
            int ele = consola.leerEntero();
            buscoyElimino(ele);
            System.out.println("continua(s/n");
            op = consola.leerString();
        }
    }

    public void buscoyElimino(int ele) {
       int b = 0;
       Aux = new ColaDinamica();
       while(!C.colaVacia()){
           Nodo x = C.quitar();
           if (x.getDato().getDoc() != ele){
               Aux.insertar(x.getDato());
           }else{
               b = 1;
           }
       }
       retornar(C,Aux);
       if (b == 1){
           System.out.println("Elemento eliminado");
       }else{
           System.out.println("Elemento inexistente");
       }
    }
    
    public void CalcularSueldos(){
        float monto = ingreso.nextFloat();
        Aux = new ColaDinamica();
        while (!C.colaVacia()){
            Nodo x = C.quitar();
            Empleado emp = x.getDato();
            float sueldo = emp.getSueldo();
            emp.setSueldo( monto * emp.getHsExtras());
           if (emp.getHsExtras() != 0){
               float miHe = (monto * 15)/100;
               float inc = miHe * emp.getHsExtras();
               emp.setSueldo(emp.getSueldo() + inc);
               H.insertar(x);
               
           }else{
               Aux.insertar(x);
               
           }
        }
        retornar(C,Aux);
        mostrarColaHe();
    }
    
    public void mostrarColaHe(){
        Nodo x = H.quitar();
        
        if (x.getDato().getFilial() == 'F'){
            
        }else{
            if(x.getDato().getFilial() == 'F'){
                
            }
        }
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
    
    public void muestroDatos(Nodo x){
        Empleado e = x.getDato();
        System.out.println(e.getDoc()+ " " + e.getApe()+ " "+e.getHsExtras()+ " " + e.getSueldo());
    }
    
    public void mostrarEmppleadosF(){
        System.out.println("Ingrese la filial(F-fabrucacion,D-Distribucion,V-Venta:)");
        char fial = ingreso.next().charAt(0);
        Aux = new ColaDinamica();
        while(!C.colaVacia()){
            Nodo x = C.quitar();
            if (x.getDato().getFilial() == fial){
                muestroDatos(x);
            }
            Aux.insertar(x.getDato());
        }
        
        retornar(C,Aux);  
    }

        
    public void retornar(ColaDinamica C, ColaDinamica Aux) {
        while (!Aux.colaVacia()) {
            Nodo x = Aux.quitar();
            C.insertar(x.getDato());
        }

    }

   
    private void imprimirSueldo() {

    }

    private Object getDato() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
