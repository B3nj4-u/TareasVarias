import java.util.*;
public class ListaCircular{

	Scanner entrada = new Scanner(System.in);
	Nodo primero;
	Nodo ultimo;

	public ListaCircular(){
		primero = null;
		ultimo = null;
	}

	public void ingresarNodo(int x){
		Nodo nuevo = new Nodo();
		nuevo.dato = x;

		if(primero == null){
			primero = nuevo;
			ultimo = primero;
			primero.siguiente = ultimo;
		}else{
			ultimo.siguiente = nuevo;
			nuevo.siguiente = primero;
			ultimo = nuevo;
		}
	}

	public void buscarNodo(int x){
		Nodo aux = new Nodo();
		aux = primero;
		boolean encontrar = false;
		do{
			if(aux.dato == x){
				encontrar = true;
			}
			aux = aux.siguiente;
		}while(aux != primero);
		
		if(encontrar == true){
			System.out.println("Nodo encontrado");
		}else{
			System.out.println("Nodo no encontrado");
		}
	}

	public void modificarNodo(int x){
		Nodo aux = new Nodo();
		aux = primero;
		do{
			if(aux.dato == x){
				System.out.print("Ingrese el nuevo dato para este nodo: ");
				aux.dato = entrada.nextInt(); // reemplazo
			}
			aux = aux.siguiente;
		}while(aux != primero);
	}

	public void eliminarNodo(int x){
		Nodo actual = new Nodo();
		Nodo anterior = new Nodo();
		actual = primero;
		anterior = ultimo;
		do{	
			if(actual.dato == x){
				if(actual == primero){
					primero = primero.siguiente;
					ultimo.siguiente = primero;
				}else if(actual == ultimo){
					anterior.siguiente = ultimo.siguiente;
					ultimo = anterior;
				}else{
					anterior.siguiente = actual.siguiente; //4-3-5 ->4-5
				}
			}
			anterior = actual;
			actual = actual.siguiente;
		}while(actual != primero);
	}

	public void mostrarLista(){
		Nodo aux = new Nodo();
		aux = primero;
		do{
			System.out.println(" "+aux.dato);
			aux = aux.siguiente;
		}while(aux != primero);
	}
}