#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H

//Crear una función que dada dos listas enlazadas, pasadas como parámetro, devuelva una
//        lista enlazada que es la unión de las otras dos.
template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista <T> *l =new Lista<T>();

    for (int i = 0; i < lisA.getTamanio(); ++i) {
        l->insertarUltimo(lisA.getDato(i));
    }
    for (int i = 0; i < lisB.getTamanio(); ++i) {
        l->insertarUltimo(lisB.getDato(i));
    }
    return l;
}


#endif //UNION_H
