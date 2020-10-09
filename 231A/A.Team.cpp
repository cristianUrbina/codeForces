#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int solution;
	int cnt=0;
	while(n--){
		int aux=0;
		for(int i = 0; i<3 ; ++i){
			cin>>solution;
			if(solution)aux++;
		}
		if(aux>=2) cnt++;
	}
	cout<<cnt;
	
	return 0;
}
