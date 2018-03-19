#include <conio.h>
#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "cola.h"
using namespace std;

 main(){
 	cola *cola1=new cola();
	int r; 
	bool k=false;
	char p[2];
	system("CLS");
	do{
				system("CLS");
			cout<<endl<<" 1) ingresar"<<endl<<" 2) buscar"<<endl<<"3) Mostrar"<<endl<<"4) Eliminar"<<endl<<"Otro salir"<<endl;
			cin>>r;
			switch(r){
				case 1:
					int x;
					cout<<"ingrese valor ";
					cin>>x;
					cola1->insertar(x);
					break;
				case 2: 
					cout<<"Dato a buscar 	";cin>>x;
					cola1->buscar(x);
					getch();
					break;
				case 3:
					cola1->mostrar();
						getch();
					break;
				case 4:
					cola1->eliminar();
					break;
				default:
					cout<<"Opcion  no valida	"<<endl;
					k=true;
			}
		
		}while(k==false);
}
 


