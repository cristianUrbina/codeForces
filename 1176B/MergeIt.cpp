#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,t,aux;
	cin>>t;
	while(t--){
		cin>>n;
		long long one=0,two=0,cnt=0;
		while(n--){
			cin>>aux;
			if(aux%3==0) ++cnt;
			else if(aux%3==1)++one;
			else ++two;
		}
		long long auxone=one;
		cnt+=min(auxone,two);
		one-=min(one,two);
		two-=min(auxone,two);
		cnt+=(one/3);
		cnt+=(two/3);
		cout<<cnt<<"\n";
	}
	return 0;
}
