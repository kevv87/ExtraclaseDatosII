//
// Created by kevin on 03/03/19.
//


#include <stdlib.h>
#include <iostream>
#include "List.h"

using namespace std;

/**
 * Establece la direccion del siguiente Node
 * @param next direccion del siguiente nodo
 * */
void Node::setNext(Node &next) {
    Node::next = &next;
}
/**
 * Obtiene el valor dentro del Node
 * */
int Node::getValue(){
    return valor;
}
/**
 * Obtiene el Nodo al que está apuntando
 * */
Node *Node::getNext(){
    return next;
}
/**
 * Libera el espacio de memoria para alojar en Collector
 * @param *ptr Puntero que libera
 * */
void Node::operator delete(void *ptr){
    List::cltr->getfree()->push_front((Node*) ptr);
}

/**
 * Verifica si hay que crear una nueva posicion de memoria
 * @param size Tamanno de memoria a alojar
 * */
void* Node::operator new(size_t size, int te) {
    return List::cltr->retrive(te);
}
/**
 * Obtiene el valor dentro de Node
 * */
int Node::getValor() const {
    return valor;
}

/**
 * Establece el valor dentro de Node
 * @param valor el int a asignar
 * */
void Node::setValor(int valor) {
    Node::valor = valor;
}
/**
 * Establece el Node al que apunta
 * @param Node el siguiente Nodo
 * */
void Node::setNext(Node *next) {
    Node::next = next;
}
