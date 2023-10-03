class nulist{

	 	private class Nodo{
        protected int dato;
        protected Nodo siguiente;
 
        public Nodo(){
            siguiente=null;
         }

         public Nodo(int p){
            siguiente=null;
            dato = p;
         }
    }

	private Nodo primero;
	
	public nulist(){
        Liva();
    }
 
    private void Liva(){
        primero = null;
    }

    public boolean Estacia(){
        return primero == null;
    }

    public void Inserprime(int p){
        Nodo nuevo = new Nodo(p);
 
        if (primero == null) primero = nuevo;
        else {
            nuevo.siguiente = primero;
            primero = nuevo;
        }
    }

    public void Inserultimo(int p){
        Nodo aux = new Nodo(p);
        Nodo rcp_aux;
 
        if (primero==null){
             aux.siguiente = primero;
             primero = aux;
        }else {
           rcp_aux = primero;
           while(rcp_aux.siguiente != null)  rcp_aux = rcp_aux.siguiente;
           rcp_aux.siguiente = aux;
        }
    }

	public int menor(){
		Nodo aux = primero;
		int menor;
		menor = primero.dato;
		while(aux != null){
			if(aux.dato < menor){
				menor = aux.dato;
			}
			aux = aux.siguiente;
		}
		return menor;

	}

	public int mayor(){
		Nodo aux = primero;
		int mayor;
		mayor = primero.dato;
			while(aux != null){
				if(aux.dato > mayor){
					mayor = aux.dato;
				}
			aux = aux.siguiente;
			}
		return mayor;
	}

	public float prome(){
		Nodo aux = primero;
		int cont = 0;
		int num = 0, prome;
		while(aux != null){
			num += aux.dato;
			cont++;
			aux = aux.siguiente;
		}
		return prome = (num/cont);
	}

	public int NumPar(){
		Nodo aux = primero;
		int num = 0, cont = 0;
		while(aux != null){
			num = aux.dato;
			if(num % 2 == 0){
				if(num != 0){
					cont++;
				}
			}
			aux = aux.siguiente;
		} 
		return cont;
	}

	public int NumImpar(){
		Nodo aux = primero;
		int num = 0, cont = 0;
		while(aux != null){
			num = aux.dato;
			if((num % 2)!= 0){
				cont++;
			}
			aux = aux.siguiente;
		} 
		return cont;
	}

	public int MayorAlProm(){
		Nodo aux = primero;
		int cont = 0, num = 0;
		while(aux != null){
			num = aux.dato;
			if(num > prome()){
				cont++;
			}
			aux = aux.siguiente;
		}
		return cont;
	}

	public int NumPerfec(){
		Nodo aux = primero;
		int cont = 0, adicion, perfecto = 0; 
		while(aux != null){
			perfecto = aux.dato;
			adicion = 0;
			for(int i = 1; i<perfecto; i++){
				if(perfecto % i == 0){
					adicion += i;
				}
			}
			if(adicion == perfecto){
				if(perfecto != 0){
					cont++;
				}
			}
			aux = aux.siguiente;
		}
		return cont;
	}

	 public void QuitarPrime(){
     Nodo aux;
     if(!Estacia()){
          aux = primero;
          primero = primero.siguiente;
          aux = null; 
        }
    }

    public void QuitarUlti(){
        Nodo aux = primero;
        if(aux.siguiente == null)
           Liva();
        if(!Estacia()){
        	aux = primero;
       		while(aux.siguiente.siguiente != null)
            	aux = aux.siguiente;
      	 		aux.siguiente = null;
        }
    }

    public void Mostrar(){
 
        Nodo rcp_aux = primero;
 
        if (primero == null) {
             System.out.println("Syntax error: la lista esta vacia");
        }else {
           rcp_aux = primero;
           while(rcp_aux.siguiente != null){
               System.out.print(rcp_aux.dato + "-");
               rcp_aux = rcp_aux.siguiente;
           }
           System.out.println(rcp_aux.dato + "-");
        }
    }
}