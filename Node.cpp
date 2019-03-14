//
// Created by kevin on 03/03/19.
//


#include <stdlib.h>
#include <iostream>
#include "List.h"

using namespace std;

void Node::setNext(Node &next) {
    Node::next = &next;
}

int Node::getValue(){
    return valor;
}

Node *Node::getNext(){
    return next;
}

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

int Node::getValor() const {
    return valor;
}

void Node::setValor(int valor) {
    Node::valor = valor;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
