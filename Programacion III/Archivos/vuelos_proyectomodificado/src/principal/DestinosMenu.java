package principal;

import persistencia.*;
import datos.*;
import entradaDatos.*;

public class DestinosMenu {
    private static Archivo m2;

    /**
     * Muestra el contenido de un archivo (incluidos los registros marcados como
     * borrados) es de utilidad para verificar el contenido del archivo a medida
     * que vamos avanzando en la resolución de modo de controlar como estan
     * cargados los registros incluyendo los vacios o los borrados
     */
    public static void mostrarTodo() {

        Registro reg;
        m2.abrirParaLeerEscribir();
        m2.irPrincipioArchivo();
        while (!m2.eof()) {
            reg = m2.leerRegistro();
            reg.mostrarRegistro();
        }
        m2.cerrarArchivo();
    }

    public static int cantidad() {
        m2.abrirParaLectura();
        m2.irPrincipioArchivo();
        int contador = 0;
        while (!m2.eof()) {
            Registro reg = m2.leerRegistro();
            if (reg.getActivo()) {
                contador++;
            }
        }
        m2.cerrarArchivo();
        return contador;
    }

    public static void listar() {
        int contador = 0;
        int caracteres = 63; // Caracteres de la tabla. Cambiar para ajustar ancho de lineas
        System.out.println(Consola.repeat("-", caracteres));
        System.out.println("| Codigo | Descripcion\t\t\t\t\t      |");
        System.out.println(Consola.repeat("-", caracteres));
        m2.abrirParaLectura();
        m2.irPrincipioArchivo();
        while (!m2.eof()) {
            Registro reg = m2.leerRegistro();
            System.out.println(" posicion en el archivo: "+ m2.numeroByte());
            if (reg.getActivo()) {
                reg.mostrarRegistro(); // La clase Destino se encarga de dar el formato de cada articulo
                contador++;
            }
        }
        m2.cerrarArchivo();
        System.out.println(Consola.repeat("-", caracteres));
        System.out.print(String.format("| Cantidad: %6d", contador));
        System.out.println(Consola.repeat(" ", caracteres - 19));
        System.out.println("|");
        System.out.println(Consola.repeat("-", caracteres));
        Consola.pausa();
    }

    /**
     * Carga un registro de Destino por teclado
     */
    public static Registro leer() {
        Destino art = new Destino();
        int codigo;
        do {
            System.out.print("Codigo--> ");
            codigo = Consola.readInt();
            if (obtener(codigo) != null) {
                System.out.println("Codigo ya existente.");
                codigo = -1; // Invalidar codigo si ya existe el articulo, para que vuelva a pedir otro
                             // codigo
            }
        } while (codigo < 0 || codigo > art.tamArchivo());
        art.setCodigo(codigo);
        art.cargarDatos();
        Registro reg = new Registro(art, art.getCodigo()); // Aqui es donde se indica que la clave principal es "Codigo"
        return reg;
    }

    public static Destino obtener(int codigo) {
        m2.abrirParaLectura();
        m2.buscarRegistro(codigo);
        if (m2.eof()) {
            return null;
        }
        Registro reg = m2.leerRegistro();
        if (!reg.getActivo()) {
            return null; // El registro no esta activo
        }
        Destino art = (Destino) reg.getDatos();
        m2.cerrarArchivo();

        return art;
    }

    public static void cargar() {
        m2.abrirParaLeerEscribir();
        try {
            do {
                Registro reg = leer();
                m2.cargarUnRegistro(reg);
            } while (Consola.deseaContinuar());
        } catch (Exception e) {
            System.out.println("Error al cargar el archivo: " + e.getMessage());
            System.exit(1);
        }
        m2.cerrarArchivo();
    }

    public static void baja() {
        Registro reg = new Registro(new Destino(), 0);
        reg.cargarNroOrden();
        m2.bajaRegistro(reg);
        Consola.pausa();
    }

    public static void modificar() {
        System.out.print("Codigo a modificar--> ");
        int codigo = Consola.readInt();

        m2.abrirParaLeerEscribir();
        m2.buscarRegistro(codigo);
        if (m2.eof()) {
            System.out.println("No existe el registro");
            Consola.pausa();
            return;
        }

        Registro reg = m2.leerRegistro(); // Lee el registro existente
        Destino art = (Destino) reg.getDatos();
        art.cargarDatos();
        reg.setDatos(art);
        m2.cargarUnRegistro(reg); // Sobreescribe el registro ya existente

        m2.cerrarArchivo();

        System.out.println("Registro modificado");
        Consola.pausa();
    }

    public static void inicializarArchivo() {
        try {
            m2 = new Archivo("Destinos.dat", new Destino());
            if (!m2.getFd().exists()){
                m2.crearArchivoVacio(new Registro(new Destino(), 0));
            }
        } catch (ClassNotFoundException e) {
            System.out.println("Error al crear los descriptores de archivos: " + e.getMessage());
            System.exit(1);
        }
    }

    public static void menu() {
        int op;
        Registro reg;

        do {
            System.out.println("----------------------------------------------------");
            System.out.println("MENU PRINCIPAL");
            System.out.println("----------------------------------------------------");
            System.out.println("1. Alta de destinos");
            System.out.println("2. Baja de destinos (lógica)");
            System.out.println("3. Modificacion de destinos");
            System.out.println("4. Listar destinos activos");
            System.out.println("0. Salir");
            System.out.print("--> ");
            op = Consola.readInt();
            switch (op) {
                case 1:
                    cargar();
                    break;
                case 2:
                    baja();
                    break;
                case 3:
                    modificar();
                    break;
                case 4:
                    listar();
                    break;
            }
        } while (op != 0);
    }
}