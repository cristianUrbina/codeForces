#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k,score,cnt=0;
	cin>>n>>k;
	cin>>score;
	int aux=n;
	int kscore=0;
	while(aux--&&score>0&&score>=kscore){
		cnt++;
		if(aux==n-k) kscore=score;
		cin>>score;
	}
	cout<<cnt;
	return 0;
}
