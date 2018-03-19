#include "cola.h"
#include <iostream>
using namespace std;
cola::cola(){
	inicio=NULL;
	fin=NULL;
}
void cola::insertar(int x){
	nodo *nuevo=new nodo(x);
	if(inicio==NULL){
		inicio=nuevo;
		fin=nuevo;
	}
	else{
		fin->siguiente=nuevo;//no se si vaya;
		fin=nuevo;
	}
}
void cola::mostrar(){
	nodo *aux=inicio;
	int c=0;
	if(vacio()==true){
		cout<<endl<<"cola vacia	"<<endl;
	}
	else{
			while(aux->siguiente!=NULL || c==0){
			cout<<(aux->dato)<<"-->	";
			if(aux->siguiente==NULL){
				c++;
			}
			else{
				aux=aux->siguiente;
			}
		}
			cout<<"NULL";
	}
}
bool cola::vacio(){
	if(inicio==NULL){
		return true;
	}
	else{
		return false;
	}
}
void cola::eliminar(){
	nodo *aux=inicio;
	if(vacio()==true){
		cout<<endl<<"cola vacia "<<endl;
	}
	else{
		if(inicio==fin){
				delete(inicio);
				inicio=NULL;
				fin=NULL;	
		}
		else{
			aux=inicio->siguiente;
			delete (inicio);
			inicio=aux;
			
		}
		
	}
}
void cola::buscar(int x){
	nodo *aux=inicio;
	int c=0,p=0,t=0,z=0;
	if(inicio==fin){
		if(aux->dato==x){
			t=0;
			z=1;
		}
	}
	else{
			while((aux->siguiente!=NULL || c==0)&&aux->dato!=x){
				p++;
				if(aux->siguiente==NULL){
					c++;
				}
				else{
					aux=aux->siguiente;
					
				}
				if(aux->dato==x){
					t=p;
				}
			
			}
		}
	if(t!=0 || z==1 ){
	
	cout<<endl<<"El dato "<<x<<" esta en la posicion "<<(t+1);}
	else{
		cout<<endl<<"Elemento no encontrado";
	}
}
