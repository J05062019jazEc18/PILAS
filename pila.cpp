#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo {
	int dt;
	Nodo *siguiente;

};

void agregarpl(Nodo *&pila,int );
void mostrarpl(Nodo*&,int &);

int main (){
	int dt;
	int opc,num,num2;
	Nodo*pila;
	pila=NULL;
	do{
		cout<<"Elija una opcion del menu siguiente: "<<endl;
		cout<<"1.-ingresar datos: "<<endl;
		cout<<"2.- Mostrar datos: "<<endl;	
		cout<<"3.- Salir "<<endl;
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<" ingrese cuantos datos desea: ";
				cin>>num;
				for(int i=1; i<=num; i++){
				cout<<"ingresa el valor del dato : ";
				cin>>num2;	
				agregarpl(pila,dt);
			}break;
			case 2:
				cout<<"Datos de las lista: ";
				mostrarpl(pila,num);
				if (pila!=NULL){
					cout<<dt<<",";
				}
				else{
					cout<<dt<<".";
				}
				cout<<endl;
			break;
			case 3:
				cout<<"Saliendo..."<<endl;
			break;			
		}					
	}while(opc!=3);
	return 0;
	}
void agregarpl(Nodo *&pila,int num){
	Nodo *nv_nodo=new Nodo();
	nv_nodo->dt=num;
	nv_nodo->siguiente=pila;
	pila=nv_nodo;
}

void mostrarpl(Nodo *&pila,int &num){
	Nodo *aux=pila;
	num=aux->dt;
	pila=aux->siguiente;
	delete aux; 
}
