#include <bits/stdc++.h>
#include "node.cpp"
#ifndef __slist_iterator__cpp__
#define __slist_iterator__cpp__
using namespace std;

template<class T>
class slist_iterator{
  node<T> *curr;
public:
  slist_iterator(node<T> *c=nullptr){ 
    curr=c; 
  }
  node<T> *getcurr(){
    return curr;
  }

  slist_iterator &operator=(slist_iterator<T> it){
    this->curr=it.getcurr(); 
    return *this;
  }

  bool operator!=(slist_iterator<T> it){
    return curr!=it.getcurr();
  }
  T &operator*(){
    return curr->getelem();
  }

  slist_iterator operator++(int){
    slist_iterator it=curr;
    curr=curr->getnext(); 
    return it;
  }
  slist_iterator operator++(){
    curr=curr->getnext(); 
    return curr;
  }
};

template<class T>
class slist_reverse_iterator{
  node<T> *curr;
public:
  slist_reverse_iterator(node<T> *c=nullptr){
    curr=c;
  }

  node<T> *getcurr(){
    return curr;
  }

  slist_reverse_iterator &operator=(slist_reverse_iterator<T> it){
    this->curr=it.getcurr(); 
    return *this;
  }

  bool operator!=(slist_reverse_iterator<T> it){
    return curr!=it.getcurr();
  }

  T &operator*(){
    return curr->getelem();
  }

  slist_reverse_iterator operator++(int){
    slist_reverse_iterator it=curr;
    curr=curr->getprev(); 
    return it;
  }
  slist_reverse_iterator operator++(){
    curr=curr->getprev(); 
    return curr;
  }
};
#endif