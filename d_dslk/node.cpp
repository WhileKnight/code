#include <bits/stdc++.h>
#ifndef __node__cpp__
#define __node__cpp__
using namespace std;
template <class T>
class node{
	T elem;
	node<T> *prev,*next;
	public:
		node(T x, node<T> *L=nullptr,node<T> *R=nullptr){
			elem=x;prev=L;next = R;
		}
		T &getelem(){
			return elem;
		}
		node<T> *&getprev(){ 
			return prev; 
		}
		node<T> *&getnext(){ 
			return next; 
		}
		void setelem(T x){
			elem=x;
		}
		void setprev(node<T> *p=nullptr){
			prev=p;
		}
		void setnext(node<T> *p=nullptr){
			next=p;
		}
};

#endif
