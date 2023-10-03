import java.io.*;
import java.util.*;

public class principal
{
	public static void main(String[] args){

		nulist l1 = new nulist();
       	Scanner sc  = new Scanner(System.in);
       	int tamano = 0, numero;
       	
       	do{
       		System.out.println("Ingrese el tamano de los elementos: ");
        	tamano = sc .nextInt();
       	}while(tamano < 0);
       
        for(int i = tamano; i>0; i--){
        	if(i < tamano){
        		do{
        			System.out.println("\nIngrese un valor ("+i+"): ");
        			numero = sc .nextInt();
        			l1.Inserprime(numero);
        		}while(numero < 0);
        	}else if(i == tamano){
        		do{
        			System.out.println("\nIngrese el ultimo valor ("+(tamano)+"): ");
        			numero = sc .nextInt();
        			l1.Inserultimo(numero);
        		}while(numero < 0);
        	}
        }
        l1.Mostrar();
        System.out.println("El numero menor de la lista es: "+l1.menor());        
        System.out.println("\nEl numeor mayor de la lista es: "+l1.mayor());
        System.out.println("\nEl promedio la lista es: "+l1.prome());
        System.out.println("\nLos numeros pares en la lista es: "+l1.NumPar());
        System.out.println("\nLos numeros impares en la lista es: "+l1.NumImpar());
        System.out.println("\nLos numeros superiores al promedio es: "+l1.MayorAlProm());
        System.out.println("\nLos numeros perfectos son: "+l1.NumPerfec());       
        System.out.println("\nSe quitara el primer y último elemento: ");
        l1.QuitarPrime();
        l1.QuitarUlti();
        l1.Mostrar();
	}
}