/*
//Thuat toan QuickSort- Ý tưởng: - Chọn một phần tử trong mảng làm phần tử trung gian 
để chia đôi mảng gọi là pivot. Thông thường ta thường chọn phần tử đầu tiên, phần tử ở 
giữa mảng hoặc phần tử cuối cùng của mảng để làm pivot.
- Phân đoạn: di chuyển phần tử có giá trị nhỏ hơn pivot về một bên, tất cả các phần tử có 
giá trị lớn hơn pivot xếp về một bên (các giá trị bằng pivot có thể đi theo một trong hai 
cách).
- Sau bước phân đoạn di chuyển pivot về đúng vị trí giữa của 2 mảng con
- Áp dụng đệ quy các bước phân đoạn trên cho hai mảng con để thực hiện sắp xếp
*/
#include<bits/stdc++.h>
using namespace std;

template<class T>
int partition(vector<T> &a, int l, int r){
	int i=l-1;
	int pivot = a[r];
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
	return i;
}
template<class T>
void quicksort(vector<T>& a, int l, int r){
	if(l>=r)
		return ;
	int pivot = partition(a,l,r);
	quicksort(a,l,pivot-1);
	quicksort(a,pivot+1,r);
}
int main(){
	vector<int> a{1,5,0,9,2,4,8,4};
	/*quicksort(a,0,a.size()-1);
	for(auto x: a)
		cout<<x<<" ";
		*/
	cout<<partition(a,0,a.size()-1);
}