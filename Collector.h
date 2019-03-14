    //
// Created by kevin on 03/03/19.
//

#ifndef EXTRACLASE_COLLECTOR_H
#define EXTRACLASE_COLLECTOR_H


#include <list>
#include "Node.h"


/**
 * Clase encargada de reciclar el espacio en memoria
 * */
class Node;

class Collector {
private:
    std::list<Node*> *free;  // Utilizo lista de C++  /**> Lista que guarda las posiciones libres*/
public:
    /**
     * Constructor de Collector
     * */
    Collector(){
        free = new std::list<Node*>();  // Creo la nueva lista,  note que es necesario especificar que va a ser de punteros
    }

    void display();  // funcion para pruebas;
    std::list<Node*> *getfree();
    Node* retrive(int size);

};


#endif //EXTRACLASE_COLLECTOR_H
