#include<bits/stdc++.h>
using namespace std;

struct sp {
	int a, b;// a + bi;
	kieu tra ve operator (+, -, ...) (danh sach tham so){}
	sp operator + (const sp other) {
		sp tong;
		tong.a = a + other.a;
		tong.b = b + other.b;
		return tong;
	}
	friend sp operator + (const sp x, const sp y){
		sp tong;
		tong.a = x.a + y.a;
		tong.b = x.b + y.b;
		return tong;
	}
	//insertion >>
	friend istream& operator >> (istream& in, sp &x){
		in >> x.a >> x.b;
		return in;
	}
	//extraction <<
	friend ostream& operator << (ostream& out, sp x){
		out << x.a << " " << x.b;
		return out; 
	}
	// so sanh
//	bool operator == (const sp other){
//		return a == other.a && b == other.b;
//	}
	//so sanh2
	friend bool operator == (const sp x, const sp y){
		return x.a == y.a && x.b == y.b;
	}
	//ss3
	friend bool  operator < (const sp x, const sp y){
		return (x.a * x.a + x.b * x.b) <(y.a * y.a + y.b * y.b);
	}
	
};
struct sv{
	string msv, ten;
	double gpa;
	//
	bool operator < (const sv other){
		return gpa < other.gpa;
	}
};
int main(){
	int n; cin >> n;
	sv ds[n];
	for(int i = 0; i < n; i++){
		cin >> ds[i].msv;cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].gpa;
	}
	sort(ds, ds + n);
	for(sv x : ds){
		cout << x.msv << " " << x.ten << " " << x.gpa << endl;
	}
}