#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,i,s,num=1;

    cin>>a;
    s=sqrt(a);
    
    for(i=s ; i>1 ; i--){
        //cout<<i;
        if(a%(i*i)==0){
            num*=i;
            a/=i*i;
            //cout<<"  o"<<endl;
        }

    }
    if(a==1){
        cout<<num<<endl;
    }
    else{
        if(num==1)
            cout<<"��"<<a<<endl;
        else
        cout<<num<<"��"<<a<<endl;
    } 
    
    return 0;
}