#include<iostream>
#include<math.h>
using namespace std;

int sqrta(int);
int sqrtb(int);

int main(){
    int a,b,c;
    cin>>a;
    b=sqrta(a);
    c=sqrtb(a);
    if(c==1){
        cout<<b<<endl;
    }
    else{
        if(b==1)
            cout<<"กิ"<<c<<endl;
        else
        cout<<b<<"กิ"<<c<<endl;
    } 
    return 0;

}


int sqrta(int a) {
    int s,num=1;

    s=sqrt(a);
    for(int i=s ; i>1 ; i--){

        if(a%(i*i)==0){
            num*=i;
            a/=i*i;
        }
    }
    return num;
}


int sqrtb(int a) {
    int s;

    s=sqrt(a);
    for(int i=s ; i>1 ; i--){

        if(a%(i*i)==0){
            a/=i*i;
        }
    }
    return a;
 }

