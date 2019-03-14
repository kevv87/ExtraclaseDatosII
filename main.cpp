#include <iostream>
#include "List.h"
#include "Collector.h"
#include <cstdlib>
#include "Node.h"


Collector *List::cltr = new Collector();

int main() {

    // Prueba del Collector

    Node *p1; // Crea el primer puntero
    p1 = new(sizeof(Node)) Node();  // Asigna un espacio en memoria al primer puntero

    std::cout << p1 << std::endl;

    delete p1;  // Libera el espacio de memoria del primer puntero
    List::cltr->display();

    Node *p2;  // Se crea el segundo puntero
    p2 = new(sizeof(Node)) Node();  // Se asigna un espacio en memoria al segundo puntero, deberia ser igual al espacio de memoria del primer puntero

    std::cout << p2 << std::endl;

    // Prueba de la lista
     List lista = List();
     lista.addFirst(12);
     lista.addFirst(13);
     lista.addFirst(14);
     lista.display();

    return 0;
}