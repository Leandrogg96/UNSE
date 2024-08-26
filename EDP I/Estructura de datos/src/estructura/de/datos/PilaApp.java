/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package estructura.de.datos;

import java.util.Scanner;

public class PilaApp {

    private Pila caracteres;
    Scanner entrada = new Scanner(System.in);

    public PilaApp() {
        caracteres = new Pila();
    }
    
    
  

    public void generar() {
        System.out.println("Ingrese una expresión: ");
        String expresion = entrada.nextLine();
        int dim = expresion.length();
        for (int i = 0; i < dim; i++) {
            caracteres.apilar(expresion.charAt(i));

        }

    }

    private void retornar(Pila A, Pila B) {
        while (!A.pilaVacia()) {
            Nodo x = A.desapilar();
            B.apilar(x.getDato());
        }
    }

    public void mostrar() {
        Pila Aux = new Pila();
        while (!caracteres.pilaVacia()) {
            Nodo x = caracteres.desapilar();
            System.out.print(x.getDato()+" ");
            Aux.apilar(x.getDato());

        }
        System.out.println(" ");
        retornar(Aux, caracteres);

    }
    
    public boolean hayRepetido(Pila A){
        boolean B = false;
        Nodo x;
        Pila auxiliar = new Pila();
        while (!A.pilaVacia() && !B){
            x = A.desapilar();
            if (!A.pilaVacia()){
                if(x.getDato() == A.getTope().getDato()){
                    A.apilar(x.getDato());
                    B = true;
                }else{
                    auxiliar.apilar(x.getDato());
                }
            }else{
                auxiliar.apilar(x.getDato());
            }
            
        }
        retornar(auxiliar,A);
        return B;
    }
    
    
    private void compararEliminar(Pila R){
        Pila aux = new Pila();
        Nodo x;
        while(!R.pilaVacia()){
            x = R.desapilar();
            if(!R.pilaVacia()){
                if(x.getDato()==R.getTope().getDato()){
                    x = R.desapilar();
                    
                }
                else{
                    aux.apilar(x.getDato());
                    
                    
                }
            }else{
                aux.apilar(x.getDato());
            }
                    
        }
        retornar(aux,R);
        if(hayRepetido(R)){
            compararEliminar(R);
            
        }
    }
    


    public static void main(String[] args) {
        PilaApp miPila = new PilaApp();
        miPila.generar();
        miPila.mostrar();
        miPila.compararEliminar(miPila.caracteres);
        miPila.mostrar();
        
        
    }

}
