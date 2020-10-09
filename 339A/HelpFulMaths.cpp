#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string sum,operators,summands;
	getline(cin,sum);
	for(int i=0;i<sum.length();i++){
		if(i%2==0){
			summands.push_back(sum[i]);
		}
	}
	sort(summands.begin(),summands.end());
	for(int i=0;i<summands.length()*2-1;i++){
		if(i%2==0){
			cout<<summands[i/2];
		}
		else cout<<"+";
	}
	return 0;
}
