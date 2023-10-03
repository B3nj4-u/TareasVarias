import java.util.*;
import java.io.*;

/**
 *
 * @author P. Benjamin Ulloa uwu
 */
public class main {
    public static void main(String[] args){
        Scanner awa = new Scanner(System.in);
        String ewe;
        PilaEstatica p1 = new PilaEstatica ("Pila",20);
        System.out.println("Inserte una operacion matematica (no mas de 20 caracteres)");
        ewe=awa.nextLine();
        for(int i=0;i<ewe.length();i++){
        	if(ewe.charAt(i)=='('){
        		p1.Apilar('(');
        	}
        	if(ewe.charAt(i)==')'&&(char)p1.Cima()=='('){
        		p1.Desapilar();
        	}else if(ewe.charAt(i)==')'&&(char)p1.Cima()!='('){
        		p1.Apilar(')');
        	}
        	if(ewe.charAt(i)=='{'){
        		p1.Apilar('{');
        	}
        	if(ewe.charAt(i)=='}'&&(char)p1.Cima()=='{'){
        		p1.Desapilar();
        	}else if(ewe.charAt(i)=='}'&&(char)p1.Cima()!='}'){
        		p1.Apilar('}');
        	}
        	if(ewe.charAt(i)=='['){
        		p1.Apilar('[');
        	}
        	if(ewe.charAt(i)==']'&&(char)p1.Cima()=='['){
        		p1.Desapilar();
        	}else if(ewe.charAt(i)==']'&&(char)p1.Cima()!=']'){
        		p1.Apilar(']');
        	}
        }
        if(p1.EsVacia() ) {
        	System.out.println("No hay ningun error en los parentesis");
        }else{System.out.println("Hay errores en los parentesis");}
    }
}