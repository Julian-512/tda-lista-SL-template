/*
 * Nodo.h
 *
 *  Created on: 18 nov. 2021
 *      Author: julian
 */

#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template < typename Dato  >

class Nodo{
private:
	Dato dato;
	Nodo* siguiente;
public:
	//constructor
	//pre: recibe como parametro el dato a guardar
	Nodo(Dato d);
	//mostrar el dato del nodo.
	//pre:
	//post:
	Dato getDato();
	//cambiar dato del nodo
	//pre:recibe el dato a  cambiar
	//post:
	void setDato(Dato d);
	//obtener nodo siguiente
	//pre:
	//post: devuelve la direccion del nodo siguiente al mismo.
	//si existe, si no devuelve Null
	Nodo* getSiguiente();
	//cambiar nodo siguiente
	//pre:recibe el nodo nuevo donde va a
	//apuntar el siguiente
	//post:
	void setSiguiente(Nodo* nodo);
	//destructor
	//pre:
	//post:
	~Nodo();
};

//constructor con parametro
template <typename Dato>
Nodo<Dato>::Nodo(Dato d){
	dato=d;
	siguiente=0;
}

template <typename Dato>
Dato Nodo<Dato>::getDato(){
	return this->dato;
}

template <typename Dato>
void Nodo<Dato>::setDato(Dato d){
	this->dato = d;
}

template<typename Dato>
Nodo<Dato>* Nodo<Dato>::getSiguiente(){
	return this->siguiente;
}

template <typename Dato>
void Nodo<Dato>::setSiguiente(Nodo* nodo){
	this->siguiente = nodo;
}

template <typename Dato>
Nodo<Dato>::~Nodo(){

}
#endif /* NODO_H_INCLUDED */
