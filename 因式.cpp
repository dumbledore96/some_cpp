#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main(){
	int a,b,c;
	cout<<"��J2����Y��:";
	cin>>a;
	while(a==0){
		cout<<"2����Y�Ƥ��o����0�A�Э��s��J:";
		cin>>a;
	}
	cout<<"��J1����Y��:";
	cin>>b;
	cout<<"��J�`�ƶ��Y��:";
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

