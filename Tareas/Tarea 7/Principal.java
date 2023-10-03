import java.util.*;
import java.io.*;
public class Principal{
	public static void main(String[] args){
		ListaDoblementeEnlazada ld = new ListaDoblementeEnlazada();
		Scanner entrada = new Scanner(System.in);
		int tamanio, dato, opcion;
		
		do{
			System.out.println("Ingrese el tamanio de la lista");
			tamanio = entrada.nextInt();
		}while(tamanio < 0);
		
		for(int i = 0; i<tamanio; i++){
			if(i == 0){
				System.out.println("Ingrese el dato ("+(i+1)+"): ");
				dato = entrada.nextInt();
				ld.insertarInicio(dato);
			}
			if(i > 0){
				System.out.println("Ingrese el dato ("+(i+1)+"):) ");
				dato = entrada.nextInt();
				ld.insertarFin(dato);
			}
		}
		do{
			System.out.print("\n\n1. Mostrar valores\n2. Eliminar inicio\n3. Eliminar final\n4. Ver si un elemento se encuentra en la lista\n5. Salir\nOpcion:");
			opcion = entrada.nextInt();
			switch(opcion){
				case 1:
					System.out.println("\n\nLos valores son: ");
					ld.MostrarAdelante();
				break;
				case 2:
					System.out.println("\n\nEliminando: "+ld.ExtraerInicio());
				break;
				case 3:
					System.out.println("\n\nEliminando: "+ld.ExtraerFin());
				break;
				case 4:
					System.out.print("\n\nIngrese el valor: \nNumero:");
					dato = entrada.nextInt();
					System.out.println(ld.buscar(dato));
					break;
				case 5:
					System.out.println("\n\nFin");
					break;
				}
			}while(opcion != 5);
	}
}