//
// Created by kevin on 03/03/19.
//

#include "List.h"
#include <iostream>

/**
 * Getter del head
 * */
Node *List::getHead(){
    return head;
}

/**
 * Setter del head
 * */
void List::setHead(Node *new_node){
    head = new_node;
}


/**
 * Agrega un numero a la lista
 * @param value Valor a agregar
 * */
void List::addFirst(int value){
    Node *NewNode = new (sizeof(Node)) Node(value);  // Creo un nuevo puntero, deberia cambiarse por el New de collector
    if(head == nullptr){
        head = NewNode;
    }else{
        Node *aux;  // Existe un puntero
        aux = head;
        head = NewNode;  // Ahora el puntero de head va a ser el del nuevo modo
        NewNode->setNext(*aux);  // Y el puntero next del nuevo nodo, va a apuntar a mi auxiliar
    }
}

/**
 * Elimina el primer nodo
 * */
void List::deleteFirst(){

    head = head->getNext();

}


/**
 * Ensenna como esta la lista actualmente
 * */
void List::display(){
    Node *temp;
    temp = head;
    while(temp != nullptr){  // Mientras que temp no sea un null pointer...
        std::cout << temp->getValue() << std::endl;
        temp = temp->getNext();
    }
    free(temp);
}