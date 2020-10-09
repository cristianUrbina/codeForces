#include<bits/stdc++.h>
#define in cin>>
using namespace std;
int fibb(const int& n){
	if(n==0||n==1) return 1;
	else return fibb(n-1)+fibb(n-2);

}
int main(){
	int n;
	in(n);
	cout<<fibb(n);
	return 0;
}
