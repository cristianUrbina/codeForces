#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,cnt=0;
	cin>>n>>m;
	if(m==n||m%n==0&&(m%2==0||m%3==0)){
		m/=n;
		while(m%2==0){
			m/=2;
			cnt++;
		}
		while(m%3==0){
			m/=3;
			cnt++;
		}
		if(m==1) cout<<cnt;
		else cout<<-1;
	}
	else cout<<-1;
	return 0;
}
