interface cola { // TAD COLA
	public void poner(int n);
	public void quitar();
   	public void colavacia();
   	public boolean esvacia();
   	public void vaciar();
   	public int primero();
   	public String nombre_cola();
   	public ColaDinamica clone();
   	@Override String toString();
   	boolean equals ( Cola x);
}