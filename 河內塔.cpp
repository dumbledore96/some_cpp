#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Hanoi(int , int , int , int);

int main(){
	freopen("test-in.txt","r",stdin);
	freopen("test-out.txt","w",stdout);
	int n;
	cout<<"�e����Ѫk�A��J�L�l�ƶq"<<endl;
	cin>>n;
	cout<<"�@"<<fixed<<setprecision(0)<<pow(2,n)-1<<"�B"<<endl;
	Hanoi(n , 1 , 2 ,3);
	return 0;
}

int Hanoi(int n , int p1 , int p2 , int p3){
	if(n==1){
		cout<<p1<<"����"<<p3<<endl;
	}
	else{
		Hanoi(n-1 , p1 , p3 , p2);
		cout<<p1<<"����"<<p3<<endl;
		Hanoi(n-1 , p2 , p1 , p3);
	}	
}

