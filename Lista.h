/*
 * Lista.h
 *
 *  Created on: 18 nov. 2021
 *      Author: julian
 */

#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <iostream>
#include "Nodo.h"
template <typename Dato>
class Lista{
private:
	 Nodo<Dato>* primero;
	unsigned int tam;

	void eliminarDato(Nodo<Dato>* dato);
public:
	//
	Lista();
	//
	bool listaEstaVacia();
	//
	void agregarDato(Dato d);

	void agregarDato(Dato d,unsigned int pos);

	void cambiarDato(Dato d,unsigned int pos);

	Dato getPrimerDato();
	//
	Dato getDato(unsigned int pos);

	Nodo<Dato>* getFirst();
	//
	unsigned int getTamLista();
	//
	void borrarDatoLista(unsigned int pos);
	//
	~Lista();
};

template<typename Dato>
Lista<Dato>::Lista(){
	primero = 0;
	tam=0;
}
template<typename Dato>
bool Lista<Dato>::listaEstaVacia(){
	return (this->tam==0);
}

template<typename Dato>
void Lista<Dato>::agregarDato(Dato d){
	Nodo<Dato>* pnodo;
	Nodo<Dato>* nodoaux = new Nodo<Dato>(d);
	if (this->listaEstaVacia()){
		this->primero=nodoaux;
	}else{
		pnodo=this->getFirst();
		while(pnodo->getSiguiente()){
			pnodo =pnodo->getSiguiente();
		}
		pnodo->setSiguiente(nodoaux);
	}
	this->tam++;
}

template<typename Dato>
Dato Lista<Dato>::getDato(unsigned int pos){
	Nodo<Dato>* nodoAux = this->getFirst();
	unsigned int i=1;
	if (this->listaEstaVacia()){
		return 0;
	}
	while((i<pos)&&(nodoAux->getSiguiente())){
		nodoAux= nodoAux->getSiguiente();
		i++;
	}
	return nodoAux->getDato();
}

template<typename Dato>
Dato Lista<Dato>::getPrimerDato(){
	return this->primero->getDato();
}

template<typename Dato>
Nodo<Dato>* Lista<Dato>::getFirst(){
	return this->primero;
}

template<typename Dato>
unsigned int Lista<Dato>::getTamLista(){
	return this->tam;
}

template<typename Dato>
void Lista<Dato>::agregarDato(Dato d,unsigned int pos){
	Nodo<Dato>* nuevoNodo = new Nodo<Dato>(d);
	Nodo<Dato>* nodoAnt;
	Nodo<Dato>* pnodo= this->getFirst();
	unsigned int i=1;
	if ((pos>1)&&(pos<this->getTamLista())){
		while((i<pos)&&(pnodo->getSiguiente())){
			nodoAnt = pnodo;
			pnodo=pnodo->getSiguiente();
			i++;
		}
		nuevoNodo->setSiguiente(pnodo);
		nodoAnt->setSiguiente(nuevoNodo);
		this->tam++;
	}

}

template<typename Dato>
void Lista<Dato>::cambiarDato(Dato d,unsigned int pos){
	Nodo<Dato>* nodoAnt = this->getFirst();
	if ((pos>1)&&(pos<this->getTamLista())){
		for(unsigned int i=1;i<pos && nodoAnt->getSiguiente();i++){
			nodoAnt=nodoAnt->getSiguiente();
		}
	nodoAnt->setDato(d);
	}
}
template<typename Dato>
void Lista<Dato>::borrarDatoLista(unsigned int pos){
	Nodo<Dato>* nodoDel = this->getFirst();
	Nodo<Dato>* nodoAnt;
	if ((pos == 1)|| !(primero->getSiguiente())){
	this->primero = nodoDel->getSiguiente();
	}else{
		for(unsigned int i=1;(i<pos)&&(nodoDel->getSiguiente());i++){
			nodoAnt = nodoDel;
			nodoDel = nodoDel->getSiguiente();
		}
	nodoAnt->setSiguiente(nodoDel->getSiguiente());
	}
	this->eliminarDato(nodoDel);
	this->tam--;
}

template<typename Dato>
void Lista<Dato>::eliminarDato(Nodo<Dato>* dato){
	if (dato != NULL){
		delete dato;
	}
}

template<typename Dato>
Lista<Dato>::~Lista(){
	while(!this->listaEstaVacia()){
		this->borrarDatoLista(1);
	}
}
#endif /* LISTA_H_ */
