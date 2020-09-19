#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>n>>m;
	if((n*m)%2==0) cout<<n*m/2;
	else cout<<(n*m-1)/2;
	return 0;
}
