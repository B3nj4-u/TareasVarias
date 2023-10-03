import java.util.*;
import java.io.*;
public class main{
 public static void main(String[] args){
  ListaDoblementeEnlazada ld = new ListaDoblementeEnlazada();
  Scanner entrada = new Scanner(System.in);
  int tamanio, dato, opcion, num, j=1,h=1,i;
  
  do{
   System.out.println("Ingrese el tamanio de la lista");
   tamanio = entrada.nextInt();
  }while(tamanio < 0);
  num=tamanio/2;
  int[] pares = new int[num];
  int[] impares = new int[num];
  
  for( i = 0; i<tamanio; i++){
   if(i == 0){
    System.out.println("Ingrese el dato ("+(i+1)+"): ");
    dato = entrada.nextInt();
    ld.insertarInicio(dato);
    pares[0]=dato;
   }
   if(i > 0){
    System.out.println("Ingrese el dato ("+(i+1)+"):) ");
    dato = entrada.nextInt();
    ld.insertarFin(dato);
    if(i%2==0){
     pares[j]=dato;
     j++;
    }else{
     impares[h]=dato;
     h++;
    }
   }
  }
  do{
   System.out.println("---------------------------");
   System.out.print("\n1. Mostrar valores\n2. Eliminar inicio\n3. Eliminar final\n4. Ver si un elemento se encuentra en la lista\n5. Ver posiciones pares\n6. Ver posiciones impares.\n7. Salir\nOpcion:");
   opcion = entrada.nextInt();
   switch(opcion){
    case 1:
     System.out.println("-----------------");
     System.out.println("Los valores son:");
     ld.MostrarAdelante();
     System.out.println("-----------------");
    break;
    case 2:
     System.out.println("-----------------");
     System.out.println("Eliminando... "+ld.ExtraerInicio());
     System.out.println("-----------------");
    break;
    case 3:
     System.out.println("-----------------");
     System.out.println("Eliminando... "+ld.ExtraerFin());
     System.out.println("-----------------");
    break;
    case 4:
     System.out.println("-----------------");
     System.out.print("Ingrese el valor: \nNumero:");
     dato = entrada.nextInt();
     System.out.println(ld.buscar(dato));
     System.out.println("-----------------");
    break;
    case 5:
     System.out.println("Estos son los datos en las posiciones pares:");
        for(i=0;i<num;i++){
         System.out.println(pares[i]);
        }
    break;
    case 6:
     System.out.println("Hola");
    break;
    case 7:
     System.out.println("-----------------");
     System.out.println("Fin");
     break;
    }
   }while(opcion != 7);
 }
}