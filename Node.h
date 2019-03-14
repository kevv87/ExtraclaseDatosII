//
// Created by kevin on 03/03/19.
//

#ifndef EXTRACLASE_NODE_H
#define EXTRACLASE_NODE_H

#include "Collector.h"
#include <stdlib.h>
#include "List.h"

// Creo que es necesario que esta clase herede de Collector e implemente los metodos New y Delete diferente o algo parecido
// Luego, en List se utilizan unos new Node(), en lugar de eso deberian implementarse los new de Collector.

class Node {
    int valor;
    Node *next;

public:
    Node(){
        next = nullptr;
        valor = 0;
    }

    Node(int value){
        this->next = nullptr;
        this->valor = value;
    }

    void setNext(Node &next);
    Node *getNext();
    int getValue();

    int getValor() const;

    void setValor(int valor);

    void setNext(Node *next);

    void operator delete(void *ptr);
    void *operator new(std::size_t size, int te);

};


#endif //EXTRACLASE_NODE_H
