/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package colaDinamica;

import datos.Empleado;

/**
 *
 * @author Kelly
 */
public class Nodo {
  private Empleado dato;
  private Nodo ps;

    public Nodo(Empleado e){
        dato = e;
        ps = null;
    }
    
    public Empleado getDato() {
        return dato;
    }

    public void setDato(Empleado dato) {
        this.dato = dato;
    }

    public Nodo getPs() {
        return ps;
    }

    public void setPs(Nodo ps) {
        this.ps = ps;
    }
}
