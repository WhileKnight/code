#include<bits/stdc++.h>
using namespace std;

template<class T>
class node{
private:
	T elem;
	node *next;
public:
	node(){
		next=NULL;
	}
	node<T> (T x, node<T>* p = NULL){
		elem = x;
		next=p;
	}
	T getElem(){
		return elem;
	}
	node *getNext(){
		return next;
	}
	void setNext(node<T> *p){
		next=p;
	}
	void setElem(T x){
		elem =x;
	}
}; 

class Queue{
private:
	unsigned int num;
	node<T> *head, *tail;
public:
	Queue(){
		num=0;
		head= tail = NULL;
	}
	unsigned int size(){
		return num;
	}
	bool empty(){
		return num==0;
	}
	T &front(){
		return head->getElem();
	}
	T &back(){
		return tail-> getElem();
	}
	void push(T x){
		if(num==0){
			head = tail = new node<T>(x);
			num++;
		}
		else {
			tail ->setnext(new node<T>(x));
			tail = tail -> getNext();
			num++;
		}
	}
	void pop(){
		if(num==0)
			return ;
		head = head ->getNext();
		num--;
	}
};