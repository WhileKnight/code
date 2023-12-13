/*
//Thuat toan Insertion Sort- Ý tưởng: - Giả sử cần sắp xếp tăng dần một danh sách có n 
phần tử a0, a1, a2,…,an-1.
- Giả sử đoạn a[0] trong danh sách đã được sắp xếp. Bắt đầu từ phần tử thứ i=1, tức là a1. 
Tìm cách chèn phần tử ai vào vị trí thích hợp của đoạn đã được sắp xếp để có dãy mới 
a0,…,ai trở nên có thứ tự. Vị trí này chính là vị trí giữa hai phần tử ak-1 và ak thỏa ak-1 < 
ai < ak (0<= k <=i). Lưu ý, khi k=0 thì có nghĩa là ai cần chèn vào trước vị trí đầu tiên 
trong danh sách.
18
- Lặp lại quá trình trên ở mỗi lần lặp với mỗi lần lặp thì tăng i lên 1 đến khi i<n thì dừng 
quá trình lặp.
*/
#include <bits/stdc++.h>
using namespace std;
template <class T>
void Swap(T &a, T &b)
{
    T tg =a;
    a= b;
    b=tg;
}
template <class T>
void printArray(T *A,int n){
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
	cout<<endl;
}
template<class T>
void InsertionSort(T *a,int n){
     T x;
     int i, j;
     for(i=1; i<=n-1;i++){
        j = i-1;
        x = a[i];
        cout<<"i = "<<i<<", j = "<<j<<": ";
		printArray(a,n);
        while(a[j]>x && j>=0){
           a[j+1]=a[j];
           j--;
           cout<<"\nj= "<<j<<", x =  "<<x<<" : ";
           printArray(a,n);
        }

		a[j+1]= x;
		cout<<"\n";
		printArray(a,n);
     }
}
int main ()
{
//	int a[]={80, 76, 10, 15 ,75, 20, 9};
	int a[]={12 , 43 ,  11,   34  ,  23  ,  43};
	int n =sizeof(a)/sizeof(int);
printArray(a,n);
	InsertionSort(a,n);
	printArray(a,n);
  return 0;
}

