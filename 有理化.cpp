#include<iostream>
using namespace std;

int GCD(int a, int b);

int main(){
	int a,b,c,d;
	cout<<"有理化分母"<<endl<<endl; 
	cout<<" a√b"<<endl;
	cout<<" ——"<<endl;
	cout<<" c√d"<<endl<<endl; 
	cout<<"請輸入a:";
	cin>>a;
	cout<<"請輸入b:";
	cin>>b;
	cout<<"請輸入c:";
	cin>>c;
	cout<<"請輸入d:";
	cin>>d;
	
	return 0;
}

int GCD(int a, int b){
	if(a%b==0){
		return b;
	}
	else {
		return GCD(b , a%b);
	}
}

