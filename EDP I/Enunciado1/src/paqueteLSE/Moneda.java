package paqueteLSE;

public class Moneda {
    private float valor;
    private String denom;
    private String pais;
    private int año;
    

    public Moneda() {
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }

    public String getDenom() {
        return denom;
    }

    public void setDenom(String denom) {
        this.denom = denom;
    }

    public String getPais() {
        return pais;
    }

    public void setPais(String pais) {
        this.pais = pais;
    }

    public int getAño() {
        return año;
    }

    public void setAño(int año) {
        this.año = año;
    }

    public Moneda(float valor, String denom, String pais, int año) {
        this.valor = valor;
        this.denom = denom;
        this.pais = pais;
        this.año = año;
    }

}