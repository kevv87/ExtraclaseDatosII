//
// Created by kevin on 03/03/19.
//

#ifndef EXTRACLASE_LIST_H
#define EXTRACLASE_LIST_H

#include "Node.h"

class Node;
class Collector;
class List {

    Node *head;  // Defino puntero del inicio de la lista /**!> Puntero que apunta al primer elemento de la lista*/
public:
    Node *getHead();  // Devuelve un puntero
    void setHead(Node *new_head);  // Toma un puntero como argumento
    void addFirst(int value);
    void display();
    void deleteFirst();
    static Collector* cltr;

public:
    List(){
        head = nullptr;  // Inicializo en nulo los valores necesarios
    }
};


#endif //EXTRACLASE_LIST_H
