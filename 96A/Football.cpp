#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string potitions;
	cin>>potitions;
	char player=' ';
	char holder=' ';
	int cnt=1;
	
	for(int i=0;i<potitions.length()&&cnt<7;++i){
		player=potitions[i];
		if(player==holder)++cnt;
		else {
			cnt=1;
			holder=player;	
		}
	}
	if(cnt==7) cout<<"YES";
	else cout<<"NO";
	return 0;
}
