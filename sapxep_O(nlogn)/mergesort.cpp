#include<bits/stdc++.h>
using namespace std;

template<class T>
vector<int> mergesort(vector<T> &a, vector<T> &b){
	vector<T> c;
	unsigned int i=0;
	unsigned int j=0;
	while(i<a.size() && j<b.size()){
		if(a[i]<b[j]){
			c.push_back(a[i]);
			i++;
		}
		else {
			c.push_back(b[j]);
			j++;
		}
	}
	while(i<a.size()){
		c.push_back(a[i]);
			i++;
	}
	while(j<b.size()){
		c.push_back(b[j]);
			j++;
	}
	return c;
}

int main(){
	vector<int> a{1,3,5,7};
	vector<int> b{2,4,6,8,10};
	vector<int> c = mergesort(a,b);
	for(auto x: c)
		cout<<x<<" ";
}