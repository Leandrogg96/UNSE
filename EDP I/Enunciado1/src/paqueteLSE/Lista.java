package paqueteLSE;

public class Lista {

    private Nodo list;

//	************************************* CONSTRUCTOR ******************************************************
    public Lista() {
        list = null;
    }

//	***************************************** INICIO *******************************************************
    public Nodo Inicio() {
        return list;
    }

//	***************************************** INICIO *******************************************************
    public boolean listaVacia() {
        return (list == null);
    }

//	********************************** INSERTAR AL PRINCIPIO ***********************************************
    public void insertarpri(Moneda elem) {/**/
        Nodo x = new Nodo(elem);
        if (list == null) {
            list = x;
        } else {
            x.setPs(list);
            list = x;
        }
    }

    
    /*public boolean buscarPais(String pais){
        Nodo x = null;
        Nodo p = list;
        Nodo ant = null;
        if ( list == null)
            return false;
        while (p!=null){
            Moneda c = p.getDato();
            if (c.getPais() == pais){
                return true;
            }else{
                ant = p;
                p = p.getPs();
            }
        
        }
        return false;
    }
     */
 /* public boolean buscarAño(int elem){
        Nodo x = null;
        Nodo p = list;
        Nodo ant = null;
        if(list == null)
            return false;
        while (p != null) {
            Moneda c = p.getDato();
            if (c.getAño() == elem) {
                return true;
            } else {
                ant = p;
                p = p.getPs();

            }
        }
        return false;
    }*/
}
