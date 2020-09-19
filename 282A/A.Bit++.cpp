#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string statement;
	int x=0;
	while(n--){
		cin>>statement;
		if(statement=="X++"||statement=="++X") x++;
		else x--;
	}
	cout<<x;
	return 0;
}
