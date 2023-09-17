#include<bits/stdc++.h>
using namespace std;
class KhachHang {
	friend class HoaDon;
	private:
		string maKH, tenKH, gt, ns, dc;
	public:
		static int cnt;
		friend istream& operator >> (istream& in, KhachHang &a){
			cnt++;
			string s = to_string(cnt);
			s = string(3 - s.size(), '0') + s;
			a.maKH = s;
			scanf("\n");
			getline(in, a.tenKH);
			in >> gt >> ns;
			scanf("\n");
			getline(in, a.dc);
			return in;
		}
		string getMAKH(){
			return maKH;
		}
		string getTENKH(){
			return tenKH;
		}
};
int KhachHang :: cnt = 0;
class MatHang {
	friend class HoaDon;
	private:
		string maMH, tenMH, dv_tinh;
		int mua, ban;
	public:
		static int cnt;
		friend istream& operator >> (istream& in, MatHang &a){
			cnt++;
			string s = to_string(cnt);
			while(s.size() < 3){
				s = "0" + s;
			}
			a.maMH = s;
			scanf("\n");
			getline(in, a.tenMH);
			cin >> a.dv_tinh >> a.mua >> a.ban;
			return in;
		}
		int getMUA(){
			return mua;
		}
		int getBAN(){
			return ban;
		}
		
};
class HoaDon {
	private:
		string maHD, maKH, maMH;
		int sl;
	public:
		void setMAHD(string maHD){
			this->maHD = maHD;
		}
		
};