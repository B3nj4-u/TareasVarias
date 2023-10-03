import java.util.*;
import java.io.*;

public class ListaDoblementeEnlazada{
	private Nodo inicio;
	private Nodo fin;

	public ListaDoblementeEnlazada(){
		inicio = null;
		fin = null;
	}

	public void insertarInicio(int dato){
		if(inicio == null){
			inicio = new Nodo(dato,null,null);
			fin = inicio;
		}
		else{
			Nodo nuevo = new Nodo(dato,null,inicio);
			inicio.setAnterior(nuevo);
			inicio = nuevo;
		}

	}
	public void insertarFin(int dato){
		if(inicio == null){
			inicio = new Nodo(dato,null,null);
			fin = new Nodo(dato,null,null);
		}
		else{
			Nodo nuevo = new Nodo(dato,fin,null);
			fin.setSiguiente(nuevo);
			fin = nuevo;
		}
	}

	public int ExtraerInicio(){
		int dato = inicio.getDato();

		inicio = inicio.getSiguiente();
		if(inicio != null){
			inicio.setAnterior(null);
		}
		else{
			fin = null;
		}
		return dato;
	}

	public int ExtraerFin(){
		int dato = fin.getDato();

		fin = fin.getAnterior();
		if(fin != null){
			fin.setSiguiente(null);
		}
		else{
			inicio = null;
		}
		return dato;
	} 

	public void MostrarAdelante(){
		Nodo temp = inicio;
		while(temp != null){
			System.out.println(temp.getDato());
			temp = temp.getSiguiente();
		}
	}

	public void MostrarRegreso(){
		Nodo temp = fin;
		while(temp != null){
			System.out.println(temp.getDato());
			temp = temp.getAnterior();
		}
	}

	public Boolean buscar(int dato){
		Nodo temp = inicio;
		while(temp != null){
			if(temp.getDato() == dato){
				return  true;
			}
			temp = temp.getSiguiente();
		}
		return false;
	}
}