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
	node<T> (T x,node<T> *p = NULL){
		elem = x;
		next=p;
	}
	node *getNext(){
		return next;
	}
	T getElem(){
		return elem;
	}
	void setNext(node<T> *p){
		next=p;
	}
	void setElem(T x){
		elem = x;
	}
};

template<class T>
class Stack{
private:
	unsigned int num;
	node<T> *head;
public:
	Stack(){
		num=0;
		head=NULL;
	}
	unsigned int size(){
		return num;
	}
	bool empty(){
		return num==0;
	}
	T &top(){
		return head->getelem();
	}
	void pop(){
		if(num==0){
			return ;
		}
		if(num==1){
			num=0;
			head=NULL;
			return ;
		}
		head = head -> getElem();
		num--;
	}
	void push(T x){
		head = new node<T>(x,head);
		num++;
	}
};