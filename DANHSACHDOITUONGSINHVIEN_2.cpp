#include<bits/stdc++.h>
using namespace std;
string chuan(string name){
	string word;
	string res = "";
	stringstream ss (name);
	while(ss >> word){
		res += toupper(word[0]);
		for(int i = 1; i < word.length(); i++){
			res += tolower(word[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}
int cnt = 0;
class SinhVien {
	private:
		string ten, ma, lop, ns;
		float gpa;
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend istream& operator >> (istream& in, SinhVien &a) {
			++cnt;
			string s = to_string(cnt);
			s = string(3 - s.size(), '0') + s;
			a.ma = "B20DCCN" + s;
			cin.ignore();
			getline(in, a.ten);
			in >> a.lop;
			in >> a.ns >> a.gpa;
			if(a.ns[1] == '/') a.ns = "0" + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3,"0");
			return in;
		}
		friend ostream& operator << (ostream& out, const SinhVien a){
			
			out << a.ma <<" "<< chuan(a.ten) <<" "<< a.lop <<" "<< a.ns <<" "<<fixed << setprecision(2) << a.gpa << endl;
			return out;
		}

};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
