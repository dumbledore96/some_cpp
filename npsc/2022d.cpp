#include<bits/stdc++.h>
using namespace std;
struct q{
long long data;
bool st;
};

q a[10000000];
bool cmp(q a,q b){
return a.data<b.data;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i].data;
        if(i%2==0)
        a[i].st=1;
        else a[i].st=0;

    }
    sort(a,a+2*n,cmp);
    long long ans=0,p=1,high=0;
    for(int i=0;i<2*n;i++)
    {
        if(a[i].st)
        {
            if(high>=2)
            {
                long long r=high-1;
                r=(r+1)*r;
                r/=2;
               ans+=r*(a[i].data-p);

            }
            p=a[i].data;
          high++;
        }
        else{
        if(high>=2)
           {
               long long r=high-1;
                r=(r+1)*r;
                r/=2;
               ans+=r*(a[i].data-p);

            }
            p=a[i].data;
            high--;
        }
    }


    cout<<ans<<endl;
}
