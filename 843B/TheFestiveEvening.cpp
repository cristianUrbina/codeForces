#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n,k,dispGuards=0;
	string entrances;
	
	cin>>n>>k;
	cin>>entrances;
	
	vector<int> guards(26,0);
	vector<int> disp(n,0);
	set<char>letters;
	int i=0,cnt=0;
	
	while(i<n&&cnt<=k){
		if(letters.find(entrances[i])==letters.end())disp[entrances.find_last_of(entrances[i])]=1;
		if(i!=0&&disp[i-1]){
			dispGuards++;
		}
		if(!guards[entrances[i]-65]){
			if(!dispGuards){
				cnt++;
			}
			else --dispGuards;
		}
		guards[entrances[i]-65]=1;
		letters.insert(entrances[i]);
		i++;
	}
	if(cnt<=k) cout<<"NO";
	else cout<<"YES";
	
	return 0;
}
