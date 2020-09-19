#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	long long i=0;
	while(i<s.length()&&i<t.length()&&s[s.length()-1-i]==t[t.length()-1-i])++i;
	long long result =(t.length()-i+s.length()-i);
	cout<<result;
	return 0;
}
