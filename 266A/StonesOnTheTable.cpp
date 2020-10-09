#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	char holder=' ',aux=' ';
	string colors;
	cin>>n;
	cin>>colors;
	for(char x:colors){
		if(x==holder)cnt++;
		else holder=x;
	}
	cout<<cnt;
	return 0;
}
