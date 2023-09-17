#include<bits/stdc++.h>
using namespace std;
class sv {
	private :
		string id, ten, ns;
		double gpa;
	public:
		sv();// constructor
		sv(string, string, string, double);
		void nhap();
		void in();
		string getId();
		string getName();
		string gtNS();
		void setGpa();
		double getGpa();

		~sv();// destructor
};
sv :: sv() {
	//cout << "Ham ktao dc goi\n";
}
sv :: ~sv() {
	//cout << "doi tuong dc huy tai day\n";
}
sv :: sv(string ma, string name, string birth, double diem) {
//	cout << "ham ktao co tham so dc goi\n";
	id = ma;
	ten = name;
	ns = birth;
	gpa = diem;
}
// ten trung void tham so
/*sv :: sv(string id, string ten, string ns, double gpa){
	this->id = id;
	this->ten = ten;
	this->gpa ns = ns;
	this->gpa = gpa;
}*/

//////////implementation
//void sv::xinchao(){
//	cout << "HELLO/n";
//}
//void sv :: dihoc(){
//	cout << "DIHOC\n";
//}
void sv :: nhap() {
	cout << "ID: ";
	cin >> id;
	cin.ignore();
	cout << "Ten: ";
	getline(cin, ten);
	cout << "NS: ";
	cin >> ns;
	cout << "Diem: ";
	cin >> gpa;
}
void sv :: in() {
	cout << id <<" "<< ten <<" "<< ns <<" "<< gpa;
}
double sv :: getGpa() {
	return this->gpa;// \\gpa;
}
bool cmp(sv a, sv b) {
	return a.getGpa() > b.getGpa();
}
int main() {
	int n; cin >> n;
	sv a[100];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		a[i].in();
	}
	return 0;
}