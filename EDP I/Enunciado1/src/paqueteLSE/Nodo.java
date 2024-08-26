package paqueteLSE;

public class Nodo {
    private Moneda dato;
    private Nodo ps; // referencia a tipo Nodo
    
    public Nodo(Moneda elem) {
        dato = elem;
        ps = null;
    }
    
    public Moneda getDato() {
        return dato;
    }

    public void setDato(Moneda dato) {
        this.dato = dato;
    }

    public Nodo getPs() {
        return ps;
    }

    public void setPs(Nodo ps) {
        this.ps = ps;
    }
}
