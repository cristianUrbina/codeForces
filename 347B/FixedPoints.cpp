#include<bits/stdc++.h>
using namespace std;
int main(){	
	int n,cnt=0;
	cin>>n;
	vector<int> a(n);
	int i = 0;
	while(i<n){
		cin>>a[i];
		if(a[i]==i) ++cnt;
		i++;
	}
	bool flag = false;
	for(i=0;i<n;++i){
		if(a[i]!=i){
			if(a[a[i]]==i){
				cnt+=2;
				flag = true;
				break;
			}
		}
	}	
	if(!flag&&cnt!=n){
		cnt++;
	}
	cout<<cnt;
	return 0;
}
