/*
//Thuat toan heap sort- Ý tưởng: Thuật toán Heap sort lấy ý tưởng giải quyết từ cấu trúc 
heap, cụ thể:
-Ta coi dãy cần sắp xếp là một cây nhị phân hoàn chỉnh, sau đó hiệu chỉnh cây thành 
dạng cấu trúc heap ( vun đống)
-Dựa vào tính chất của cấu trúc heap, ta có thể lấy được ra phần từ lớn nhất hoặc nhỏ nhất 
của dãy, phần tử này chính là gốc của heap. Giảm số lượng phần tử của cây nhị phân và 
tái cấu trúc heap.
-Đưa phần tử đỉnh heap về đúng vị trí của dãy ở cuối mảng, sau đó giảm số lượng phần tử 
của mảng (không xét tới phần tử cuối nữa)
-Tái cấu trúc heap và lặp lại việc lấy phần tử gốc của cấu trúc heap cho tới khi danh sách 
ban đầu chỉ còn 1 phần tử. Đưa phần tử này về đúng vị trí và kết thúc thuật toán.
Ta phải thực hiện tái cấu trúc heap, vun lại đống bởi vì sau khi lấy ra phần tử gốc heap, 
cấu trúc heap không còn nữa.
*/
#include<bits/stdc++.h>
using namespace std;

template<class T>
void heapify(vector<T> &a, int i, int n){
	int l = 2*i+1;
	int r = 2*i+2;
	int largest = i;
	if(l<n && a[l] > a[largest])
		largest = l;
	if(r<n && a[r] > a[largest])
		largest = r;
	if(largest != i){
		swap(a[i],a[largest]);
		heapify(a,largest,n);
	}
}
template<class T> 
void heapsort(vector<T> &a, int n){
	for(int i=n/2-1; i>=0;i--)
		heapify(a,i,n);
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		heapify(a,0,i);
	}
}
int main(){
	vector<int> a{2,6,1,3,9,5,6};
	heapsort(a,a.size());
	for(auto x: a)
		cout<<x<<" ";
}