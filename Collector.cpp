//
// Created by kevin on 03/03/19.
//

#include "Collector.h"
#include <iostream>
#include <new>
#include <list>


/**
 * Verifica si hay que crear una nueva posicion de memoria
 * @param size Tamanno de memoria a alojar
 * */
Node* Collector::retrive(int size) {
    Node *result = nullptr;  // Crea puntero a retornar
    if(free->size()>0){  // Si la lista tiene algo:
        result = free->front();  // El espacio en memoria del puntero va a ser igual al primer elemeto de la lista
        free->pop_front();  // Se elimina ese primer elemento;
    }else{  // si no:
        result = ::new Node();
    }
    return result;  // retorna
}

/**
 * Muestra como esta la lista actual de posiciones liberadas.
 * */
void Collector::display(){ // Borra la lista, be careful.
    std::cout<<"Start\n";
    int i = free->size();
    while(i>0){
        std::cout << (free->front()) << std::endl;
        i--;
    }
    std::cout<<"End\n";
}

std::list<Node*> *Collector::getfree(){
    return free;
}
