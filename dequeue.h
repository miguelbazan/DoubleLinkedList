//
//  dequeue.h
//  Tarea7_DobleEncadenamiento
//
//  Created by Miguel Bazán on 10/6/15.
//  Copyright © 2015 MiguelBazan. All rights reserved.
//

#ifndef dequeue_h
#define dequeue_h
#include "Node.h"
template <class T>
class dequeue
{
public:
    dequeue();
    ~dequeue();
    void pushLeft(T data);      // Mete elemento en la izquierda
    void popLeft();            // Saca elemeno de la izquierda
    T left();                 // Saber cual es el elemento de la izquierda
    void pushRight(T data);  // Mete el elemento en la derecha
    void popRight();        // Saca elemento del lado derecho
    T right();             // Saber cual es el elemento de la derecha
    bool isEmpty();       // Regresa true si la fila esta vacia
    
private:
    
    node<T> *left1;          // nodo izquierdo
    node<T> *right1;          // nodo derecho
    int iC;
};
template <typename T>
dequeue<T>::~dequeue()
{
    node<T> *aux;
    
    
    while (left1 != NULL)
    {
        aux = left1;
        left1 = left1->getNext();
        delete  aux;
        right1 = NULL;
    }
}
template <typename T>
dequeue<T>::dequeue()
{
    left1 = NULL;
    right1  = NULL;
    iC = 0;
}

template <typename T>
void dequeue<T>::pushLeft(T data)
{
    if (isEmpty())
    {
      node<T> *aux = new node<T>(data,left1, NULL);
        left1 = aux;
        iC++;
    }
    else {
        node<T> *aux = new node<T>(data,left1,NULL);
        left1->setBack(aux);
        left1 = aux;
        iC++;
    }
}
template <typename T>
void dequeue<T>::popLeft()
{
    if (!isEmpty())
    {
        node<T> *aux = left1;
        left1 = left1->getNext();
        if (left1 == NULL) {
            right1 = NULL;
        }
        else
        {
        left1->setBack(NULL);
        }
        delete aux;
        iC--;
    }
}
template <typename T>
T dequeue<T>::left()
{
    return left1->getData();
}
template <typename T>
void dequeue<T>::pushRight(T data)
{
    if (isEmpty())
    {
        node<T> *aux = new node<T>(data,NULL,right1);
        right1 = aux;
        iC++;
    }
    else {
        node<T> *aux = new node<T>(data,NULL,right1);
        right1->setBack(aux);
        right1 = aux;
        iC++;
    }
}
template <typename T>
void dequeue<T>::popRight()
{
    if (!isEmpty())
    {
        node<T> *aux = right1;
        right1 = right1->getNext();
        
        if (right1 == NULL)
        {
            left1 = NULL;
        }
        else
        {
        right1->setNext(NULL);
        }
        delete aux;
        iC--;
    }
}
template <typename T>
T dequeue<T>::right()
{
    return right1->getData();
    
}
template <typename T>
bool dequeue<T>::isEmpty()
{
    return (left1 == NULL && right1 == NULL);
}
#endif /* dequeue_h */
