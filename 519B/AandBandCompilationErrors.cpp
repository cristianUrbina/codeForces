#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n),b(n-1),c(n-2);
	for(int& x: a){
		cin>>x;
	}
	for(int& x: b){
		cin>>x;
	}
	for(int& x: c){
		cin>>x;
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	int i = 0;
	while(b[i]==a[i]) i++;
	cout<<a[i]<<"\n";
	i = 0;
	while(c[i]==b[i]) i++;
	cout<<b[i];
	return 0;
}
