import java.util.*; //Scanner
public class principal{
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		ListaCircular l = new ListaCircular();
		int opcion = 0;
		
		do{
			System.out.println("\nLista Circular Simple");
			System.out.print("1. Ingresar valores\n2. Buscar Nodo\n3. Modificar el nodo\n4. Eliminar Nodo\n5. Mostrar Datos\n6. Salir\nOpcion: ");
			opcion = entrada.nextInt();
			switch(opcion){
				case 1:
					System.out.println("\n\nINGRESAR NODO");
					System.out.println("\n\nIngrese el valor del nodo a crear: ");
					int dato = entrada.nextInt();
					l.ingresarNodo(dato);
					break;
				case 2:
					System.out.println("\n\nBUSCAR");
					System.out.println("\n\nIngrese el valor: ");
					dato = entrada.nextInt();
					l.buscarNodo(dato);
					break;
				case 3:
					System.out.println("\n\nMODIFICAR");
					System.out.print("\n\nIngrese el valor del nodo a modificar: ");
					dato = entrada.nextInt();
					l.modificarNodo(dato);
				break;
				case 4:
					System.out.println("\n\nELIMINAR");
					System.out.print("\n\nIngrese valor del nodo a eliminar: ");
					dato = entrada.nextInt();
					l.eliminarNodo(dato);
					break;
				case 5:
					System.out.println("\n\nLISTA:");
					l.mostrarLista();
					break;
				default :
			}
		}while(opcion != 6);
	}
}