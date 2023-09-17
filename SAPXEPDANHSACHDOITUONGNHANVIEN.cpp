#include<bits/stdc++.h>
using namespace std;


class NhanVien {
	private:
		string  ten, gt, ns, dc, mst, nk, ma;
	public:
		static int cnt;
		friend istream& operator >> (istream& in, NhanVien &a) {
			++cnt;
			string s = to_string(cnt);
			s =  string(5 - s.size(), '0') + s;
			a.ma = s;
			scanf("\n");
			getline(in, a.ten);
			in >> a.gt >> a.ns; scanf("\n");
			getline(in, a.dc);
			in >> a.mst >> a.nk;
			return in;
		}
		friend ostream& operator << (ostream& out,  NhanVien a){
			out << a.ma <<" ";
			out << a.ten<<" "<<a.gt<< " "<< a.ns<<" "<< a.dc <<" "<<a.mst<<" "<< a.nk<< endl;
			return out;
		}
		string getNs(){
			return this->ns;
		}
};
bool cmp(NhanVien a, NhanVien b) {
	string s = a.getNs(), t = b.getNs();
	int t1 = (s[0] - '0')* 10 + s[1] - '0', n1 = (s[3] - '0')* 10 + s[4] -'0', na1 = stoi(s.substr(6));
	int t2 = (t[0] - '0')* 10 + t[1] - '0', n2 = (t[3] - '0')* 10 + t[4] -'0', na2 = stoi(t.substr(6));
	if(na1 != na2) return na1 < na2;
	if(t1 != t2) return t1 < t2;
	return n1 < n2;
}
void sapxep(NhanVien a[], int n){
	sort(a, a + n, cmp);
}
int NhanVien :: cnt= 0;
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}