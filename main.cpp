/*
 * main.cpp
 *
 *  Created on: 24 nov. 2021
 *      Author: julian
 */
#include "Lista.h"
#include <iostream>

int main(){
using namespace std;
//lista de enteros
 Lista<int> lista1;
 lista1.agregarDato(1);
 lista1.agregarDato(2);
 lista1.agregarDato(3);
 lista1.agregarDato(4);
 for(unsigned i=0;i<lista1.getTamLista();i++){
 	 cout<<"valor de la posicion "<<i+1<<" : "<<lista1.getDato(i+1)<<endl;
  }
 cout<<"tamanio de la lista: "<<lista1.getTamLista()<<endl;
 cout<<"valor de la posicion 2 : "<<lista1.getDato(2)<<endl;
 lista1.borrarDatoLista(2);
 cout<<"tamanio de la lista: "<<lista1.getTamLista()<<endl;
 cout<<"valor de la posicion 2 : "<<lista1.getDato(2)<<endl;
 for(unsigned i=0;i<lista1.getTamLista();i++){
	 cout<<"valor de la posicion "<<i+1<<" : "<<lista1.getDato(i +1)<<endl;
 }
 lista1.agregarDato(2,2);
 cout<<"tamanio de la lista: "<<lista1.getTamLista()<<endl;
 cout<<"valor de la posicion 2 : "<<lista1.getDato(2)<<endl;
 for(unsigned i=0;i<lista1.getTamLista();i++){
	 cout<<"valor de la posicion "<<i+1<<" : "<<lista1.getDato(i +1)<<endl;
 }
 //lista de cadenas de caracteres
 Lista<string> lista2;
  lista2.agregarDato("uno");
  lista2.agregarDato("dos");
  lista2.agregarDato("tres");
  lista2.agregarDato("cuatro");
  cout<<"tamanio de la lista: "<<lista2.getTamLista()<<endl;
  cout<<"valor de la posicion 2 : "<<lista2.getDato(2)<<endl;
  lista2.borrarDatoLista(2);
  cout<<"tamanio de la lista: "<<lista2.getTamLista()<<endl;
  cout<<"valor de la posicion 2 : "<<lista2.getDato(2)<<endl;
  lista2.agregarDato("dos",2);
  cout<<"tamanio de la lista: "<<lista2.getTamLista()<<endl;
  cout<<"valor de la posicion 2 : "<<lista2.getDato(2)<<endl;
  for(unsigned i=0;i<lista2.getTamLista();i++){
 	 cout<<"valor de la posicion "<<i+1<<" : "<<lista2.getDato(i+1)<<endl;
  }
	return 0;
}


