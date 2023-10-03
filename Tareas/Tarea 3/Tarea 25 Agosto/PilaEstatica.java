class PilaEstatica extends Pila {
    private int[] elementos;
    private int cima;
    private int tamano;
    public PilaEstatica (String nombrePila,int tamano) {
       	super(nombrePila);
        this.tamano=tamano;
       	elementos=new int[tamano];
       	cima=-1;
    }
    
    public void PilaVacia() { 
       	cima=-1;
    }
    
    public boolean EsVacia() { 
       	return cima==-1; 
    } 
    
    public void Apilar(int x){
    	cima++; 
       	elementos[cima]=x;
    }
    
    public void Desapilar() {
       	if( EsVacia() ) {
        	System.out.println("ERROR:PILA VACIA");
       	}else{ 
            cima--;
       	}
    }

    public int Cima() { 
       	return elementos[cima]; 
    } 
    
    public int tamano(){
        return this.tamano;
    }
    
    public void print() {
        PilaEstatica aux = new PilaEstatica(this.getNombrePila(), this.tamano());
        while(!this.EsVacia()) {
            aux.Apilar(this.Cima());
            this.Desapilar(); 
        }

        while (!aux.EsVacia()) {
            this.Apilar(aux.Cima());
            aux.Desapilar();
            System.out.println("Elemento: " +Cima());
        }

    }

    public PilaEstatica invertir(PilaEstatica x){
        PilaEstatica aux = new PilaEstatica(x.getNombrePila(), x.tamano());
        while(!x.EsVacia()) {
            aux.Apilar(x.Cima());
            x.Desapilar(); 
        }
        return aux;
    }

    public int numero_elementos(PilaEstatica x){
        return cima;
    }

    public int sumar_elementos(PilaEstatica x){
        int sum=0;
        PilaEstatica aux = new PilaEstatica(this.getNombrePila(), this.tamano());
        aux=x.clone();
        while(!aux.EsVacia()) {
            sum += aux.Cima();
            aux.Desapilar(); 
        }
        return sum;
    }

    public PilaEstatica quitar(PilaEstatica x, int c){
        PilaEstatica aux = new PilaEstatica(this.getNombrePila(), this.tamano());
        PilaEstatica estasi = new PilaEstatica(this.getNombrePila(), this.tamano()-1);
        
        aux=x.clone();

        while (!aux.EsVacia() ) {
            if (aux.Cima()!=c) {
                estasi.Apilar(aux.Cima());
                aux.Desapilar();
            } else {
                aux.Desapilar();
            }
        }
        
        return estasi.invertir(estasi);
    }

    public PilaEstatica clone() {
       PilaEstatica aux = new PilaEstatica("pila2", this.tamano()); 
       PilaEstatica copia = new PilaEstatica("pila3", this.tamano());
       while(!this.EsVacia()) {
           aux.Apilar(this.Cima());
           this.Desapilar(); 
       }
       while(!aux.EsVacia()) {
           copia.Apilar(aux.Cima());
           this.Apilar(aux.Cima());
           aux.Desapilar();
       }
       return copia;
    }
}