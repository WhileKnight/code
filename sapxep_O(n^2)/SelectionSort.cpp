/*
//Thuat toan SelectionSort
- Ý tưởng: Thuật toán selection sort sắp xếp một mảng bằng 
cách đi tìm phần tử có giá trị nhỏ nhất (giả sử với sắp xếp mảng tăng dần) trong đoạn 
đoạn chưa được sắp xếp và đổi cho phần tử nhỏ nhất đó với phần tử ở đầu đoạn chưa 
được sắp xếp(không phải đầu mảng).
Thuật toán sẽ chia mảng làm 2 mảng con: Một mảng con đã được sắp xếp, một mảng con chưa được sắp xếp.
Tại mỗi bước lặp của thuật toán, phần tử nhỏ nhất ở mảng con 
chưa được sắp xếp sẽ được di chuyển về đoạn đã sắp xếp.

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
void SelectionSort(T *a,int n){
     int i,j,min;
     for(i=0;i<=n-2;i++){
             min=i;
             for(j=i+1;j<n;j++)
				{
					if(a[min]>a[j]) min=j;
					cout<<"i="<<i<<", j="<<j<<": "<<" postmin = "<<min<<endl;
				}
             if(min!=i)
                 Swap(a[i],a[min]);
		cout<<"i="<<i<<", j="<<j<<": ";
		printArray(a,n);
     }
}


int main ()
{
	//int a[]={80, 76, 10, 15 ,75, 20, 9};
	int a[]={12 , 43 ,  11 ,  34 ,   23 ,   435};
	int n =sizeof(a)/sizeof(int);

printArray(a,n);
	SelectionSort(a,n);
	printArray(a,n);
  return 0;
}

