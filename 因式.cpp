#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main(){
	int a,b,c;
	cout<<"块2Ωよ玒计:";
	cin>>a;
	while(a==0){
		cout<<"2Ωよ玒计ぃ眔单0叫穝块:";
		cin>>a;
	}
	cout<<"块1Ωよ玒计:";
	cin>>b;
	cout<<"块盽计兜玒计:";
	cin>>c;
	cout<<endl<<a<<"x^2 + "<<b<<"x + "<<c<<endl<<endl;
	for(int i=-abs(a) ;i<=abs(a) ;i++){
		for(int j=-abs(c) ;j<=abs(c) ;j++){
			cout<<i<<" "<<j<<endl;
			if(i*j+(a/i)*(c/j)==b){
				cout<<"*"<<endl;
			}
		}	
	}
}

int gcd(int a, int b){
	if(a%b==0){
		return b;
	}
	else return gcd(b , a%b);
}

