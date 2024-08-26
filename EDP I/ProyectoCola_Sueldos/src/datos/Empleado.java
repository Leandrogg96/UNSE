/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package datos;

import entradaSalida.consola;
import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Empleado {
private int doc;
private String ape;
private int hs;
private int he;
private char filial;

    public Empleado(int doc, String ape, int hs, int he, char filial) {
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
        this.filial =' ';
    }

    public int getDoc() {
        return doc;
    }

    public void setDoc(int doc) {
        this.doc = doc;
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

    public char getFilial() {
        return filial;
    }

    public void setFilial(char filial) {
        this.filial = filial;
    }
    

    public void leerDatos(){
     System.out.println("ingrese el documento del empleado: ");
        setDoc(consola.leerEntero());
        
    }
}
