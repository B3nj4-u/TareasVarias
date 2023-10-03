class coladinamica implements cola { 
	private Nodo primero; 
	private Nodo ultimo; 
	private String nombre;

	public coladinamica(String n) {
		nombre=n;
		primero=null;
		ultimo=null;
	}

	public coladinamica() {	
		primero=null;
		ultimo=null;
	}

	public String nombre_cola() { 
		return nombre;
	}

	public void colavacia() {
		primero=null;
		ultimo=null;
	}

	public void vaciar(){
		/**/
	}

	public void poner(int x) { 
		Nodo ne = new Nodo(x);
		if(esvacia()) {
			primero = ne;
			ultimo= ne; 
		} 
		else {
			ultimo.enlazar(ne);
			ultimo=ne; 
		}
	}

	public void quitar() { 
		if(esvacia()) {
			System.out.println("Syntax error: cola vacia "); 
		}
		else {
			primero=primero.enlace(); 
		}
	}

	public int primero() { 

		return primero.elemento();
	}

	public boolean esvacia() {
		return primero==null;
	}

	public coladinamica clone() {
		coladinamica copia = new coladinamica();
		Nodo aux=primero;
		while(aux!=null){ 
			copia.poner(aux.elemento()); 
			aux=aux.enlace();
		}
		return copia;
	}

	/*public String toString() {
		String s="";
		Nodo aux=primero;
		s=" [ "+aux.elemento().toString(); 
		aux=aux.enlace();
		while(aux!=null){ 
			s+=","+aux.elemento().toString();
			aux=aux.enlace();
		}
		s+=" ] ";
		return s; 
	}*/

	public boolean equals(Cola c) {
		Cola c1=(Cola)this.clone(); 
		Cola c2=(Cola)c.clone();
		if(c1.esvacia() && c2.esvacia()) 
			return true;
		else {
			if(!c1.esvacia() && c2.esvacia()) return false; 
			else {
				if(c1.esvacia() && !c2.esvacia()) return false; 
				else {
					if(c1.primero() == c2.primero()) {
						c1.quitar();
						c2.quitar();
						return c1.equals(c2);
					}
					else {
						return false;
					}
				} 
			}
		}
	}
	public void Mostrar(){
 
        Nodo rec_aux = primero;
 
        if (primero==null) {
             System.out.println("La lista se encuentra vacia");
        }else {
           rec_aux = primero;
           while(rec_aux.enlace()!=null){
               System.out.print(rec_aux.elemento() + " -> ");
               rec_aux = rec_aux.enlace();
           }
           System.out.println(rec_aux.elemento() + "->");
        }
    }
	
	
	public void ordenar( int c){
		coladinamica aux = new coladinamica();
		Nodo sol = new Nodo(c);
		do{
			if (this.primero()>c) {
				this.primero.enlazar(sol);
				break;
			} else {
				aux.primero=this.primero;
				this.primero=primero.enlace();
				}

		}while (!this.esvacia());
	}
}