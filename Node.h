//
//  Nodo.h
//  ListasEncadenadas
//
//  Created by Miguel Bazán on 9/1/15.
//  Copyright (c) 2015 MiguelBazan. All rights reserved.
//

#ifndef ListasEncadenadas_Node_h
#define ListasEncadenadas_Node_h
template <class T>
class node
{
public:
    
    node(T data);
    node(T data, node <T> *next, node<T> *back);
    T getData();
    node<T>* getNext();
    node<T>* getBack();
    void setData(T data);
    void setNext(node<T> *next);
    void setBack(node<T> *back);
    
private:
    
    T data;
    node<T> *next;
    node<T> *back;
};

template <typename T>
node<T>::node(T data)
{
    this -> data = data;
    this -> next = NULL;
    this -> back = NULL;
    
}
template <typename T>
node<T>::node(T data, node <T> *next, node<T> *back)
{
    this -> data = data;
    this -> next = next;
    this -> back = back;
    
}
template <typename T>
T node<T>::getData()
{
    return data;
}
template <typename T>
node<T>* node<T>::getBack()
{
    return back;
}
template <typename T>
node<T>* node<T>::getNext()
{
    return next;
}
template <typename T>
void node<T>::setData(T data)
{
    this -> data = data;
}
template <typename T>
void node<T>::setNext(node<T> *next)
{
    this -> next = next;
}
template <typename T>
void node<T>::setBack(node<T> *back)
{
    this -> back = back;
}
#endif
