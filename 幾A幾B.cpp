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
	cout<<"�X A �X B �C�� ��J�n�q���Ʀr���X���"<<endl; 
	do{
	cin>>n;
	if(n>=1&&n<=9)
		repeat=1;
		else cout<<"���~��J"<<endl; 
		
	}while(repeat!=1);
	
	random(ans,n);
	
	while(1){
	 	turn+=1;
		A=0;B=0;
		while(t==1){
			cout<<"�п�J�@��"<<n<<"��� ��J�h 0 ��ܵ���"<<endl;
			t--;
		}
		while(cin>>number){
			if(number==0){
				cout<<"���T���׬O ";
				for(i=n;i>=1;i--){
					cout<<ans[i];
				}
				cout<<endl;
			}
			if(number<1000000000&&number>0)
				break;
			else if(number!=0) 
				cout<<"���~��J"<<endl; 
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
			cout<<"�q��F"<<"\t"<<"�A�`�@�q�F "<<turn<<" ��"<<endl;t=1;turn=0;
			cout<<"���s��J�n�q�o���X���"<<endl;cin>>n;
			random(ans,n);
			int ans[15]={};
		}
    }
	return 0;
}
