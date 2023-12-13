#include <bits/stdc++.h>
#include "node.cpp"
#include "slist_iterator.cpp"
using namespace std;
#ifndef __slist__cpp__
#define __slist__cpp__
template <class T>
class slist{
	node<T> *head,*tail;
	unsigned int num;
	public:
		typedef slist_iterator<T> iterator;
		typedef slist_reverse_iterator<T> reverse_iterator;
		slist(){
			num=0;
			head=tail=nullptr;
		}
		bool empty(){ return num==0;}
		unsigned size(){return num;}
		reverse_iterator rbegin(){
			return tail;
		}
		reverse_iterator rend(){
			return NULL;
		}
		iterator begin(){
			return head;
		}
		iterator end(){
			return NULL;
		}
		void push_back(T x){
			if(num==0) head=tail=new node<T>(x);
			else {
				tail->setnext(new node<T>(x,tail,0));
				tail = tail->getnext();
			}
			num++;
		}
		void push_front(T x){
			if(num==0) head=tail=new node<T>(x);
			else {
				head->setprev(new node<T>(x,0,head));
				head = head->getprev();
			}
			num++;
		}
		T &front(){
			return head->getelem();
		}
		T &back(){
			return tail->getelem();
		}
		void pop_back(){
			if(num==0) return;
			if(num==1) head=tail=nullptr;
			else{
				tail=tail->getprev();
				tail->setnext(NULL);
			}
			num--;
		}
		void pop_front(){
			if(num==0) return;
			if(num==1) head=tail=nullptr;
			else{
				head=head->getnext();
				head->setprev(0);
			}
			num--;
		}
		void insert(iterator it,T x){
			node<T> *p = it.getcurr();
			if(p==head) return push_front(x);
			node<T> *q = p->getprev();
			node<T> *r = new node<T>(x,q,p);
			p->setprev(r);
			q->setnext(r);
			num++;
		}
		void erase(iterator it)
		{
			if(it.getcurr()==head) return pop_front();
			if(it.getcurr()==tail) return pop_back();
			node<T>*L=it.getcurr()->getprev(),*R=it.getcurr()->getnext();
			L->setnext(R); R->setprev(L);
			num--;
		}
};
#endif