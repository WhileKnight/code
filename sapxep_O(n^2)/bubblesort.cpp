/*Thuat toan BubbleSort
- Ý tưởng: -Tiến hành sét 2 phần tử đứng cạnh nhau, nếu phần từ 
sau nhỏ hơn phần tử đứng trước thì tiến hành đổi chỗ chúng. 
Phần tử nhỏ sẽ nổi dần lên trên.
- Lập lại hành động cho tới khi không có cặp nào thỏa mãn. Tối đa là N-1 lần (N là số 
phần tử của mảng). Tức là ta sẽ cho 2 vòng lặp lồng nhau
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
template <class T>
void BubbleSort(T *a, int n){
	  int i, j;
	  for (i=0;i<n-1;i++)
	  {
	  	for(j=n-1;j>i;j--)
	  	{
	  		if(a[j]<a[j-1])
				Swap(a[j],a[j-1]);
			cout<<"i="<<i<<", j="<<j<<": ";
			printArray(a,n);
		}
	  }
}

