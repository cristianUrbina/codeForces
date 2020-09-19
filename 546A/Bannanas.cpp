#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,w,n;
	cin>>k>>n>>w;
	int q=k*(w*(w+1)/2)-n;
	if(q>0){
		cout<<k*(w*(w+1)/2)-n;
	}
	else cout<<0;
	return 0;
}
