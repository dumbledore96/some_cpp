#include<iostream>
using namespace std;

int GCD(int a, int b);

int main(){
	int a,b,c,d;
	cout<<"���z�Ƥ���"<<endl<<endl; 
	cout<<" a��b"<<endl;
	cout<<" �X�X"<<endl;
	cout<<" c��d"<<endl<<endl; 
	cout<<"�п�Ja:";
	cin>>a;
	cout<<"�п�Jb:";
	cin>>b;
	cout<<"�п�Jc:";
	cin>>c;
	cout<<"�п�Jd:";
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

