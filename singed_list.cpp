
/*• Trình bày cấu trúc của một lớp node, lớp danh sách liên kết đơn:
+ Cấu trúc của một lớp node:
- Các thuộc tính:
Element elem;
Node *next;
- Các phương thức:
Node *getnext(): Trả lại địa chỉ của nút kế tiếp
Element getElem(): Trả lại giá trị phần tử lưu trữ trong nút
void setNext(Node *): Gán địa chỉ cho thuộc tính next
void setElem(Element e): Gán giá trị e cho thuộc tính elem
 + Cấu trúc của lớp danh sách liên kết đơn:
- Các thuộc tính:
Node *header
Node *trailer
- Các phương thức chung:
long size(),
int isEmpty()
- Các phương thức truy cập:
Node *first(): Trả lại địa chi do con trỏ header trỏ đến
Node *last(): Trả lại địa chỉ do con trỏ trailer trỏ đến
void replace(Node *p, Element e): Thay thế phần tử lưu trong p bằng 
phần tử e và trả lại đia chỉ p
Node *insertAfter(Node *p, Element e): Chèn thêm node sau node do p 
trỏ tới
Node * insertFirst(Element e): Chèn thêm 1 node vào đầu danh sách
Node * insertLast(Element e): Chèn thêm 1 node vào cuối danh sách
Node * getNode(int i): 
 void remove(Node *p): Loại bỏ node do con trỏ p trỏ tới
• Lập trình lớp node, lớp danh sách liên kết đơn:
*/

// lop node
template<class T>
class Node{
private:
	T elem;
	Node *next;
public:
	Node(){
		elem=0;
		next=NULL;
	}
	Node *getNext(){
		return next;
	}
	T getE(){
		return elem;
	}
	void setNext(Node<T>*x){
		next=x;
	}
	void getE(T x){
		elem=x;
	}
};

template<class T>
class Slist{
private:
	Node<T> *head;
	Node<T> *tail;
	int num;
public:
	Slit(){
		head = trail = NULL;
		num=0;
	}
	int size(){
		return num;
	}
	bool empty(){
		return num==0;
	}
	void push_front(T x){
		head = new Node<T>(x,head);
		if(num==0)
			tail=head;
		num++;
	}
	void push_back(T x){
		if(num==0)
			push_front(x);
		else{
			tail->setNext(new Node<T>(x,NULL));
			tail=tail->getNext();
			num++;
		}
	}
	void pop_front(){
		if(num==0)
			return ;
		if(num==1)
			head = tail = NULL;
		else head = head->getNext();
		num--;
	}
	void pop_back(){
		if(num==0)
			return ;
		if(num==1){
		   head = tail = NULL;
		   num--;
		   return ;
		}
		Node<T> *p = head;
		while(p->getNext() != tail){
			p=p->getNext();
		}
		p->setNext(NULL);
		tail=p;
		num--;
	}
	T& front(){
		return head->getE();
	}
	T& back(){
		return tail->getE();
	}
	void erase(T x){
		Node<T> * p = head;
		if(head == NULL)
			return ;
		if(p->getNext()->getE() == x){
			Node * q= head;
			head=head->getNex();
			delete q;
			num--;
			return ;
		}
		while(p->getNext()->getE() != x){
			p->getNext();
		}
		if(p->getNext() != NULL){
			Node * q = p->getNext();
			p->getNext()=p->getNext()->getNext();
			delete q;
			num--;
		}
	}
};