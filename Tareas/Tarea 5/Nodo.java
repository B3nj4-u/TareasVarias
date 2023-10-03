class Nodo {
    private int elemento;
    private Nodo enlace;
    public Nodo(int elemento) { //objeto nodo con dos atributos
        this.elemento=elemento;
        this.enlace=null;
    }
    public int elemento() { //devuelve el campo elemento
        return elemento;
    }
    public Nodo enlace() { // devuelve el atributo enlace 
        return enlace;
    }
    public void enlazar(Nodo siguiente) { //enlaza dos objetos mediante el atributo enlace
        enlace=siguiente;
    }
}// fin de la clase nodo