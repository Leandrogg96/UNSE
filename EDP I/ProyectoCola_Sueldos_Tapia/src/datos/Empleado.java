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
private int hsTrabajadas;
private int hsExtras;
private char filial;
private float sueldo;

    public Empleado(int doc, String ape, int hs, int he, char filial,float suel) {
        this.doc = doc;
        this.ape = ape;
        this.hsTrabajadas = hs;
        this.hsExtras = he;
        this.filial = filial;
        this.sueldo = suel;
    }
    Scanner ingreso = new Scanner(System.in);
    public float getSueldo() {
        return sueldo;
    }

    public void setSueldo(float sueldo) {
        this.sueldo = sueldo;
    }

    public Empleado() {
        this.doc = 0;
        this.ape = " ";
        this.hsTrabajadas = 0;
        this.hsExtras = 0;
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

    public int getHsTrabajadas() {
        return hsTrabajadas;
    }

    public void setHsTrabajadas(int hsTrabajadas) {
        this.hsTrabajadas = hsTrabajadas;
    }

    public int getHsExtras() {
        return hsExtras;
    }

    public void setHsExtras(int hsExtras) {
        this.hsExtras = hsExtras;
    }

    public char getFilial() {
        return filial;
    }

    public void setFilial(char filial) {
        this.filial = filial;
    }
    

    public void leerDatos(){
        System.out.print("Documento: ");
        setDoc(consola.leerEntero());
        System.out.println("Apellido: ");
        setApe(consola.leerString());
        System.out.print("Horas trabajadas en el mes: ");
        setHsTrabajadas(consola.leerEntero());
        System.out.print("horas extras: ");
        setHsExtras(consola.leerEntero());
        System.out.print("filial(F-fabrucacion,D-Distribucion,V-Venta): ");
        this.filial = ingreso.next().charAt(0);
        this.sueldo = 0;
    }
    
    
}
