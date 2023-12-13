/*
Trình bày cấu trúc của một lớp vector:
Sử dụng mảng V có kích thước N chứa các phần tử của vector
Một biến n lưu trữ kích thước của vector (số phần tử được lưu trữ)
+ Các phương thức chính trên vector:
- int getAtRank(integer r, object &o): Trả lại phần tử có chỉ số r, nhưng không loại 
bỏ nó
- int replaceAtRank(integer r, object o, object & o1): Thay thế phần tử có chỉ số r 
bằng phần tử o và trả lại phần tử bị thay thế
- int insertAtRank(integer r, object o): Chèn phần tử o vào vị trí r
- int removeAtRank(integer r, object &o): loại bỏ phần tử tại vị trí r, và trả lại phần 
tử bị loại bỏ
- int size() cho biết kích thước của Vector
- int isEmpty() cho biết Vector có rỗng hay không
• Lập trình các phương thức của lớp:
*/

template<class T>
class Vector{
private:
	int cap,num;
	T* buff;
public:
	Vector(){
		cap=num=0;
		buff=NULL;
	}
	Vector<int k, T x>{
		cap=num=k;
		buff = new T[k];
		for(int i=0;i<k;i++)
			buff[i]=x;
	}
	~Vector(){
		if(buff)
			delete[] buff;
	}
	int capacity(){
		return cap;
	}
	int size(){
		return num;
	}
	bool empty(){
		return num==0;
	}
	void pop_back(){
		if(num>0)
			num--;
	}
	void extend(int newcap){
		if(newcap <= cap)
			return;
		cap=newcap;
		T *temp = new T[cap];
		for(int i=0;i<num;i++)
		   temp[i]=buff[i];
	    ~Vector();
	    buff = temp; 
	}
	T& back(){
		return buff[num-1];
	}
	void push_back(T xx){
		if(num==cap)
			extend(cap*2);
		buff[num++]=x;
	}
	void insert(int k, T x){
		if(cap == num)
			extend(cap*2)
		for(int i=num-1;i>=k;i--)
			buff[i+1]=buff[i];
		buff[k]=x;
		num++;
	}
};