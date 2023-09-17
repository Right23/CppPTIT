#include<bits/stdc++.h>

using namespace std;

int lomutopartition(int a[], int l, int r){
	int pivot = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(a[j] <= pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	//dua cho ve giua
	i++;
	swap(a[i], a[r]);
	return i;
}
void lomutoquicksort(int a[], int l, int r){
	if(l >= r ) return ;
	int p = lomutopartition(a, l, r);
	lomutoquicksort(a, l, p - 1);
	lomutoquicksort(a, p + 1, r);
}

int hoarepartition(int a[], int l, int r){
	int pivot = a[l];
	int i = l - 1, j = r + 1;
	while(true){
		do{
			i++;
		}while(a[i] < pivot);
		do{
			j--;
		}while(a[j] > pivot);
		if(i < j){
			swap(a[i], a[j]);
		}else return j;
	}
}
void hoarequicksort(int a[], int l, int r){
	if(l >= r){
		return;
	}
	int p = hoarepartition(a, l, r);
	hoarequicksort(a, l, p);
	hoarequicksort(a, p + 1, r);
}
 
 int main(){
 	int a[1000], n;
 	cin >> n;
 	srand(time(NULL));
 	for(int i = 0; i < n; i++){
 		a[i] = rand() % 500;
	 }
	hoarequicksort(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		cout << a[i] <<" ";
	}
 }