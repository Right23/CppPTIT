#include<bits/stdc++.h>
using namespace std;

class Person{
	private:
		string name, address;
	public:
		// function overriding
		void nhap(){
			getline(cin, name);
			getline(cin, address);
		}
		void in(){
			cout << name <<" "<< address <<" ";
		}//
		string getName(){
			return name;
		}
		string getAddress(){
			return this->address;
		}
		void setName(string name){
			this->name = name;
		}
		void setAddress(string address){
			this->address = address;
		}
};
class Student : public Person{
	private:
		float gpa;
	public:
		// function overriding
		void nhap(){
			Person :: nhap();
			cin >> gpa;
		}
		void in(){
			Person :: in();
			cout << gpa;	
		}
		//
		void setGpa(float gpa){
			this->gpa = gpa;
		}
		float getGpa(){
			return gpa;
		}
};
class Lecturer : public Person{
	private:
		double salary;
	public:
		void setSalary(double salary){
			this->salary = salary;
		}
};
int main(){
	Student s;
	//  chi nhap cac thuoc tinh cua student trong person
//	s.Person :: nhap();
//	s.Person :: in();
	//nhap  het cac thuoc tinh  cua student
	s.nhap();
	s.in();
	cout << endl;
	s.setName("LUONG");
	s.setGpa(3.8);
	s.setAddress("HD");
	cout << s.getName() <<" "<< s.getGpa() <<" "<< s.getAddress();
}
#include<bits/stdc++.h>
using namespace std;

class Person {
	private:
		int maSo;
		char tenN[20];
	public:
		Person();// ktao khong tham so
		Person(int, char[]);// khoi tao du tham so
		void nhap() {
			cin >> maSo >> tenN;
		}
		void in() {
			cout << maSo <<" "<< tenN <<" ";
		}
};
Person:: Person() {
	maSo = 0;
	strcpy(tenN, "");
}
Person::Person(int maSoln, char tenln[]) {
	maSo = maSoln;
	strcpy(tenN, tenln);
}
class SinhVien : public Person {
	private:
		int namSinh;
	public:
		SinhVien(); // khoi tao khong tham so
		SinhVien(int, char[], int);// khoi tao du tham so
		void  nhap() {
			Person :: nhap();
			cin >> namSinh;
		}
		void in() {
			Person :: in();
			cout << namSinh << endl;
		}
};
SinhVien:: SinhVien():Person() {
	namSinh = 0;
}
SinhVien::SinhVien(int maSoln1, char tenln1[], int namSinhln):Person(maSoln1, tenln1) {
	namSinh = namSinhln;
}
/////////// friend class
class sv{
	friend class gv;
	private:
		float gpa;
	public:
		void n, i;
};
class gv{
	private:
		string khoa;
	public:
		void update(sv &);
};
void gv :: update(sv &x){
	x.gpa = 3.2;
}
int main() {
// mang tinh
//	SinhVien ds[3];
////	for(int i = 0; i < 3; i++) {
////		ds[i].nhap();
////	}
//	for(int i = 0; i < 3; i++) {
//		ds[i].in();
//	}
//
// mang dong
//	SinhVien *p = new SinhVien[100];//
//
	SinhVien SV1(1, "hoa", 2003);
	SV1.in();
//	SinhVien *SV2 = new SinhVien(2, "binh", 2003);
//	SV2.in();
	SinhVien SV3(3, "hanh", 2003);
	SV3.in();
}