package colaDinamica;

import datos.Empleado;

public class ColaDinamica  {
    private Nodo frente, fondo;
    public  ColaDinamica() {
        frente = null;
        fondo = null;
    }

    public boolean colaVacia() {
        return (frente == null );
    }

    public void insertar(Empleado  elem) {
        Nodo nuevo = new Nodo(elem);
        if (colaVacia()) {
            frente = fondo = nuevo;
        } else {
            fondo.setPs(nuevo);
            fondo = nuevo;
        }
    }
    public void insertar(Nodo nuevo) {
        
        if (colaVacia()) {
            frente = fondo = nuevo;
        } else {
            fondo.setPs(nuevo);
            fondo = nuevo;
        }
      }
       
    public Nodo quitar() {
       
        Nodo regresa = frente;
        if(!colaVacia())
        frente =frente.getPs();
          
        else
            System.out.println("Vacia");
        return (regresa);
    } 
}