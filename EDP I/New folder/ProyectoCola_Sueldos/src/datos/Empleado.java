package datos;

import entradaSalida.consola;
import java.util.Scanner;

public class Empleado {

    private int doc;
    private String ape;
    private int hs;
    private int he;
    private String filial;

    public Empleado(int doc, String ape, int hs, int he, String filial) {
        this.doc = doc;
        this.ape = ape;
        this.hs = hs;
        this.he = he;
        this.filial = filial;
    }

    public Empleado() {
        this.doc = 0;
        this.ape = " ";
        this.hs = 0;
        this.he = 0;
        this.filial = "";
    }

    public int getDoc() {
        return doc;
    }

    public void setDoc(int doc) {
        if(!estaVacio(doc)){
            this.doc = doc;
        }else{
            System.out.println("Vacio");
        }
            
    }

    public String getApe() {
        return ape;
    }

    public void setApe(String ape) {
        this.ape = ape;
    }

    public int getHs() {
        return hs;
    }

    public void setHs(int hs) {
        this.hs = hs;
    }

    public int getHe() {
        return he;
    }

    public void setHe(int he) {
        this.he = he;
    }

    public String getFilial() {
        return filial;
    }

    public void setFilial(String filial) {
        this.filial = filial;
    }

    public void leerDatos() {
        System.out.print("ingrese el documento del empleado: ");
        setDoc(consola.leerEntero());
        System.out.print("Apellido y nombre: ");
        setApe(consola.leerString());
        System.out.print("Horas trabajadas en el mes: ");
        setHs(consola.leerEntero());
        System.out.print("Horas trabajadas extras: ");
        setHe(consola.leerEntero());
        System.out.println("Filial F/D/V : ");
        setFilial(consola.leerString());
    }
    
    public boolean estaVacio(int nro){
        return ( nro == 0);
    }
    
    public boolean nombreVacio( String nom){
        return( nom == "");
    }
}
