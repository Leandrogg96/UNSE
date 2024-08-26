package clases;

import java.util.Scanner;

public class Televisor {

    private String marca;
    private int cantCanales;
    private boolean estadoE;
    private float pulgadas;
    private int canalAct;

    public Televisor() {
        this.marca = "Samsung";
        this.cantCanales = 120;
        this.estadoE = false;
        this.pulgadas = 42;
        this.canalAct = 1;
    }


    public Televisor(String marca, float pulgadas) {
        this.marca = marca;
        this.cantCanales = 120;
        this.estadoE = false;
        this.pulgadas = pulgadas;
        this.canalAct = 1;
    }

    public Televisor(String marca, float pulgadas, int canalAct) {
        this.marca = marca;
        this.cantCanales = 120;
        this.estadoE = false;
        this.pulgadas = pulgadas;
        this.canalAct = canalAct;
    }

    public String getMarca() {
        return this.marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public int getCantCanales() {
        return this.cantCanales;
    }

    public void setCantCanales(int cantCanales) {
        this.cantCanales = cantCanales;
    }

    public boolean isEstadoE() {
        return this.estadoE;
    }

    public void setEstadoE(boolean estadoE) {
        this.estadoE = estadoE;
    }

    public float getPulgadas() {
        return this.pulgadas;
    }

    public void setPulgadas(float pulgadas) {
        this.pulgadas = pulgadas;
    }

    public int getCanalAct() {
        return this.canalAct;
    }

    public void setCanalAct(int canalAct) {
        this.canalAct = canalAct;
    }

    public void menu() {
        System.out.println("Hola, el televisor se esta encendiendo. Que accion deseas realizar? ");
        System.out.println("""
        1- Mostrar caracteristicas y estado del televisor.
        2- Enceder.
        3- Apagar.
        4- Cambiar a un canal especifico.
        5- Incrementar canal.
        6- Decrementar canal.
        0- Salir.
                            """);

        int opc = 99;

        while (opc!= 0){

            Scanner lectura = new Scanner(System.in);
            opc = lectura.nextInt();

            if (opc == 1){
                  mostrar();
            } else if (opc == 2) {
                if (isEstadoE()){
                      System.out.println("El televisor ya esta encendido!");
                } else {
                      cambiarEstado();
                      System.out.println(!isEstadoE() ? "El televisor se apago" : "El televisor se encendio.");
                }
            } else if (opc == 3) {
                if (!isEstadoE()){
                      System.out.println("El televisor ya esta apagado!");
                } else {
                      cambiarEstado();
                      System.out.println(!isEstadoE() ? "El televisor se apago" : "El televisor se encendio.");
                }
            } else if (opc == 4) {
                System.out.println("Ingresa el canal al que quieras cambiar.");
                int canal;
                Scanner ingresoCanal = new Scanner(System.in);
                canal = ingresoCanal.nextInt();

                cambiarCanal(canal);
            } else if (opc == 5) {
                  cambiarCanal(true);
            } else if (opc == 6) {
                  cambiarCanal(false);
            } else if (opc == 0) {
                System.out.println("Espero haber sido de ayuda. Hasta pronto!");
            } else {
                System.out.println("Ingreso invalido. Intentelo nuevamente.");
            }
        }
    }
    public void mostrar() {

        System.out.println("Marca: " + getMarca() + ".");
        System.out.println("Tamanio en pulgadas: " + getPulgadas() + " pulgadas.");
        System.out.println("Estado del televisor: " + (isEstadoE() ? "Encendido" : "Apagado"));
        System.out.println("Cantidad de canales: " + getCantCanales());
        System.out.println("Canal activo: " + getCanalAct());

    }

    public void cambiarEstado() {
        setEstadoE(!isEstadoE());
    }

    public void cambiarCanal(int canal) {
        while (canal > getCantCanales()) {
            canal -= getCantCanales();
        }
        setCanalAct(canal);
        System.out.println("Cambiaste al canal: " + getCanalAct() + ".");
    }

    /*
        Otra forma de realizar el metodo cambiarCanal:

    public void cambiarCanal(int nuevoCanal) {
        if (nuevoCanal > cantidadCanales) {
            nuevoCanal %= cantidadCanales;
        }
        canalActivo = nuevoCanal;
    }
    */

    public void cambiarCanal(boolean cambio) {

        if (cambio) {
            if (getCanalAct() != getCantCanales()) {
                setCanalAct(getCanalAct() + 1);
                System.out.println("Estas en el canal: " + getCanalAct() + ".");
            } else {
                setCanalAct(1);
                System.out.println("Estas en el canal: " + getCanalAct() + ".");
            }
        } else {
            if (getCanalAct() != 1) {
                setCanalAct(getCanalAct() - 1);
                System.out.println("Estas en el canal: " + getCanalAct() + ".");
            } else {
                setCanalAct(getCantCanales());
                System.out.println("Estas en el canal: " + getCanalAct() + ".");
            }
        }
    }

}
