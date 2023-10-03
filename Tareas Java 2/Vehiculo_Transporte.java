import java.util.*;

class Vehiculo_Transporte extends Vehiculo_Pesado{
  private int cant_pasaj;

  public Vehiculo_Transporte(int a, int b, int c, int d){
    super(a,b,c);
    this.cant_pasaj=d;
  }

  public void setcant_pasaj(int d){
    this.cant_pasaj=d;
  }

  public int getcant_pasaj(){
    return this.cant_pasaj;
  }
}
