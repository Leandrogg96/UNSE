/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package estructura.de.datos;


public class Pila {
    Nodo tope;

    public Pila() {
        tope = null;
    }
    

    public Nodo getTope() {
        return tope;
    }

    public void setTope(Nodo tope) {
        this.tope = tope;
    }
    
    public boolean pilaVacia(){
        return tope == null;
        
    }
    
    public Nodo desapilar(){
        Nodo x = null;
        if (!pilaVacia()){
            x = tope;
            tope = tope.ps;
        }else{
            System.out.println("Pila Vacia");
        }
        return x;
    }
    
    public void apilar(char elem){
        Nodo x = new Nodo(elem);
        if (!pilaVacia()){
            x.ps = tope;
        }
        tope = x;
    }
    
    
}
