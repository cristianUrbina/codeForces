#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,x,y,holder;
	cin>>n;
	vector<long long>v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	holder = x = v[v.size()-1];
	long long i=v.size()-2;
	while(v[i]!=holder&&x%v[i]==0){
		holder=v[i];
		--i;
	}
	if(i<0) i=0;
	else y = v[i];
	cout<<x<<" "<<y;
	return 0;
}
