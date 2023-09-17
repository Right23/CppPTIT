# include <bits/stdc++.h>
using namespace std;
int main(){
		int v,e; cin>>v>>e;
		vector<int> a[v+9];
		int b[100][100];
		vector<pair<int,int>> c;
		for(int i=1;i<=e;i++){
			int tmp1,tmp2; cin>>tmp1>>tmp2;
			a[tmp1].push_back(tmp2);
			a[tmp2].push_back(tmp1);
			b[tmp1][tmp2]=1;
			b[tmp2][tmp1]=1;
			c.push_back({tmp1,tmp2});
		}
		cout<<"ds canh"<<endl;
		for(pair<int,int> x:c){
			cout<<x.first<<" "<<x.second<<endl;
		}
		int dem=0;
		
		cout<<"ds ke"<<endl;
		for(int i=1;i<=v;i++){
			dem+=a[i].size();
			cout<<dem<<": ";
			for(int x:a[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
		cout<<"ma tran ke"<<endl;
		for(int i=1;i<=v;i++){
			for(int j=1;j<=v;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
}

