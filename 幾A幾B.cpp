#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void random(int a[],int n)
	{
		srand(time(NULL));
		int repeat;
		for(int i=1;i<=n;i++){
			do{repeat=0;
				a[i]=rand()%9+1;
				for(int j=0;j<i;j++)
				{
					if(a[i]==a[j])
						{
							repeat=1;
							break;
						}		
				}
			}while(repeat);
		}
	}
int main(){
	int ans[15]={},repeat=0,number,cor[15]={};
	int i,j,A=0,B,t=1,check=1,turn=0,n;
	cout<<"幾 A 幾 B 遊戲 輸入要猜的數字為幾位數"<<endl; 
	do{
	cin>>n;
	if(n>=1&&n<=9)
		repeat=1;
		else cout<<"錯誤輸入"<<endl; 
		
	}while(repeat!=1);
	
	random(ans,n);
	
	while(1){
	 	turn+=1;
		A=0;B=0;
		while(t==1){
			cout<<"請輸入一個"<<n<<"位數 輸入則 0 顯示答案"<<endl;
			t--;
		}
		while(cin>>number){
			if(number==0){
				cout<<"正確答案是 ";
				for(i=n;i>=1;i--){
					cout<<ans[i];
				}
				cout<<endl;
			}
			if(number<1000000000&&number>0)
				break;
			else if(number!=0) 
				cout<<"錯誤輸入"<<endl; 
		}
		
		for(i=1;i<=n;i++)
		{		
			cor[i]=number%10;
			number=number/10;
			for(j=1;j<=n;j++)
			{
				if(cor[i]==ans[j]&&i==j)
					A=A+1;
				else if(cor[i]==ans[j]) 
					B=B+1;
			}
	 	}
		cout<<A<<"A"<<B<<"B"<<endl;
		if(A==n)
		{
			cout<<"猜對了"<<"\t"<<"你總共猜了 "<<turn<<" 次"<<endl;t=1;turn=0;
			cout<<"重新輸入要猜得為幾位數"<<endl;cin>>n;
			random(ans,n);
			int ans[15]={};
		}
    }
	return 0;
}
