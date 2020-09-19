#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b,passengers=0,maxp=0;
	while(n--){
		cin>>a>>b;
		passengers+=b-a;
		maxp=max(maxp,passengers);
	}
	cout<<maxp;
	return 0;
}
