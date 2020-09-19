#include<bits/stdc++.h>
using namespace std;
int main(){
	string name;
	cin>>name;
	set<char> letters;
	for(char& x: name){
		letters.insert(x);
	}
	if(letters.size()%2==0)cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	return 0;
}
