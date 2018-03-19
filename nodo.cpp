#include <iostream>
#include "nodo.h"
using namespace std;
nodo::nodo(int x)
{
	dato=x;
	siguiente='\0';
	anterior=NULL;
}
nodo::~nodo(){
}
