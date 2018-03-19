#ifndef nodo_h
#define nodo_h
 class nodo{
	private:
	 int dato;
	nodo *siguiente;
	nodo *anterior;
	public:
		nodo(int);	
		~nodo();	
	friend class Lista;	
	friend class cola;
	friend class ListaDe;		
};
#endif

