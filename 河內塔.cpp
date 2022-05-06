#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Hanoi(int , int , int , int);

int main(){
	freopen("test-in.txt","r",stdin);
	freopen("test-out.txt","w",stdout);
	int n;
	cout<<"河內塔解法，輸入盤子數量"<<endl;
	cin>>n;
	cout<<"共"<<fixed<<setprecision(0)<<pow(2,n)-1<<"步"<<endl;
	Hanoi(n , 1 , 2 ,3);
	return 0;
}

int Hanoi(int n , int p1 , int p2 , int p3){
	if(n==1){
		cout<<p1<<"移到"<<p3<<endl;
	}
	else{
		Hanoi(n-1 , p1 , p3 , p2);
		cout<<p1<<"移到"<<p3<<endl;
		Hanoi(n-1 , p2 , p1 , p3);
	}	
}

