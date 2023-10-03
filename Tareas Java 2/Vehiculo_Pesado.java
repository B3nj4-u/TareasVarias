import java.util.*;

class Vehiculo_Pesado{
  private int cant_ejes;
  private int precio;
  private int peso;

  //Constructor
  public Vehiculo_Pesado(int a, int b, int c){
    this.cant_ejes=a;
    this.precio=b;
    this.peso=c;
  }
  //Set
  public void setcant_ejes(int a){
    this.cant_ejes=a;
  }
  public void setprecio(int b){
    this.precio=b;
  }
  public void setpeso(int c){
    this.peso=c;
  }
  //Get
  public int getcant_ejes(){
    return this.cant_ejes;
  }
  public int getprecio(){
    return this.precio;
  }
  public int getpeso(){
    return this.peso;
  }
}
