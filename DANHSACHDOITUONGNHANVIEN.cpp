#include<bits/stdc++.h>
using namespace std;


int cnt = 0;
class NhanVien {
	private:
		string  ten, gt, ns, dc, mst, nk, ma;
	public:
		
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
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}