#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,s,t=0;
	cin>>a;
	for(int i=-abs(a) ;i<=abs(a) ;i++){
		for(int j=-abs(a) ;j<=abs(a) ;j++){
			if(i*j==a){
				cout<<i<<"x"<<j<<endl;
			}
		}	
	}
	return 0;
} 
