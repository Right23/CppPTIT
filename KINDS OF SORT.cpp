#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[],int n) {
	for(int i=0; i<n; i++) {
		int minpos=i;
		for(int j=i+1; j<n; j++) {
			if(a[j]<a[minpos]) {
				minpos=j;
			}
		}
		swap(a[i],a[minpos]);
	}
}
void bubblesort(int a[],int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1;j++) {
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

void insertionsort(int a[],int n){
	for(int i=1;i<n;i++){
		//lay ra phan tu o chi so i
		int x=a[i], pos=i-1;
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
void insertionsort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i],pos=i-1;
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
int main() {
	int a[100];
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	insertionsort(a,n);
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
}