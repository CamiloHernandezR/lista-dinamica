#ifndef COLA_H
#define COLA_H
#include "nodo.h"

class cola
{
	private:
		nodo *inicio;
		nodo *fin;
	public:
		cola();
		~cola();
		bool vacio();
		void insertar(int);
		void mostrar();
		void buscar(int);
		void eliminar();
		
};

#endif
