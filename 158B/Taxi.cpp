#include<bits/stdc++.h>
#define FOR(i,k,n)  for(int i=0;i<n;++i)
#define Vi vector<int>
#define out cout<<
#define in cin>>
using namespace std;
int main(){
	long long int n;
	int cnttaxis;
	in(n);
	Vi v(100002);
	FOR(i,0,n)in(v[i]);
	sort(v.begin(),v.end());
	int i=v.size()-1;
	int k=0;
	while(k!=i){
		if(v[i]+v[k]<=4){
			v[i]+=v[k];
			k++;
		}
		else{
			i--;
			cnttaxis++;
		}
	}
	out(cnttaxis+1);
	return 0;
}
