/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Pila;

/**
 *
 * @author Invitado
 */
public class pila {
    
    Nodo tope;
    int espacio;

    public pila() {
        this.tope = null;
        this.espacio = 0;
    }
    
    public int contadorCantidad(){
        return espacio;
    }
    
    public boolean pilaVacia(){
        if(tope == null){
           return true;
        } else {
           return false;
        }
    }
    
    public void apilar(int ele){ 
        Nodo nuevo = new Nodo(ele);
       
        if(pilaVacia()){
           tope = nuevo;
        } else {
           nuevo.setPs(tope);
           tope = nuevo;
        }
        espacio ++;
    }
   
   public Nodo desapilar(){
        Nodo auxiliar = null;
        if(pilaVacia()){
           System.out.println("pila vacia");
        }
        else {
         auxiliar = tope;
         tope = tope.getPs();
         espacio --;
        }
        return auxiliar;
    }
   
}