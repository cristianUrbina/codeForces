#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,aux;
	cin>>n;
	vector<int> first, second, third;
	while(n--){
		cin>>aux;
		if(first.empty()&&aux<0) first.push_back(aux);
		else if(second.empty()&&aux>0) second.push_back(aux);
		else third.push_back(aux);
	}
	
	if(second.empty()){
		int i = 0;
		while(second.size()<2){
			if(third[i]<0){
				second.push_back(third[i]);
				third.erase(third.begin()+i);
				i=0;
			}
			else i++;
		}
	}
	
	cout<<first.size()<<" ";
	for(int x:first){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<second.size()<<" ";
	for(int x:second){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<third.size()<<" ";
	for(int x:third){
		cout<<x<<" ";
	}
	return 0;
}
