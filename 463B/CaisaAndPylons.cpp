#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long n,h,holder=0,money=0,energy=0;
	cin>>n;
	while(n--){
		cin>>h;
		if(energy+holder-h<0){
		money+=energy+holder-h;
		energy=0;
		}
		else energy+=holder-h;
		holder=h;
	}
	cout<<-money;
	return 0;
}
