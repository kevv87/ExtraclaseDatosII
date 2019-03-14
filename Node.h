//
// Created by kevin on 03/03/19.
//

#ifndef EXTRACLASE_NODE_H
#define EXTRACLASE_NODE_H
#include "Collector.h"
#include <stdlib.h>
#include "List.h"

/**
 * Clase encargada de almacenar un int y puntero a siguiente
 * */
class Node {
    int valor;
    Node *next;

public:
    /**
    * Constructor predeterminado de Node
    * */
    Node(){
        next = nullptr;
        valor = 0;
    }
    /**
    * Constructor de Node
    * */
    Node(int value){
        this->next = nullptr;
        this->valor = value;
    }

    void setNext(Node &next);   //Funcion para establecer el siguiente Node
    Node *getNext();    //Funcion para obtener el siguiente Node
    int getValue(); //Funcion para obtener valor
    int getValor() const;   //Funcion para obtener valor
    void setValor(int valor);   //Funcion para establecer valor
    void setNext(Node *next);   //Funcion para establecer siguiente nodo
    void operator delete(void *ptr);    //Funcion para liberar el puntero
    void *operator new(std::size_t size, int te);   //Funcion para obtener un puntero reciclado/nuevo

};


#endif //EXTRACLASE_NODE_H
