import java.io.*;
import java.util.*;



class main {

    public static void main(String[] args){

        int cant, uwu=0;

        Scanner sc = new Scanner(System.in);
        Scanner sc1 = new Scanner(System.in);
        ColaDinamica fdp = new ColaDinamica();
        ColaDinamica aux = new ColaDinamica();

        System.out.println("Ingrese la cantidad de elementos que desea ordenar");
        cant=sc.nextInt();

        System.out.println("ingrese elemento ");
        uwu=sc.nextInt();

        fdp.poner(uwu);
        for (int i = 1; i < cant; i++){
            System.out.println("Ingrese otro elemento");
            uwu=sc.nextInt();
            fdp.ordenar(uwu);
            fdp.Mostrar();

        }
        
    }
}