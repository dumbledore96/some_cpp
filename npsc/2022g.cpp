#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005]={},l[1005][1005]={},aq[1005],bq[1005];

int va(int a,int b)
{
    if(a==-1)return -1;
    if(a+b<0)return -1;
    return a+b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    for(int i=1 ; i<=a ; i++){
        cin>>aq[i];
        dp[0][i]=va(dp[0][i-1],aq[i]);
        l[0][i]=max(l[0][i-1],dp[0][i]);
    }
    for(int i=1 ; i<=b ; i++){
        cin>>bq[i];
        dp[i][0]=va(dp[i-1][0],bq[i]);
        l[i][0]=max(l[i-1][0],dp[i][0]);
    }
    for(int i=1 ; i<=b ; i++){
         for(int j=1 ; j<=a ; j++){
            int t1=va(dp[i][j-1],aq[j]),
            t2=va(dp[i-1][j],bq[i]);

            if(t1==-1){
                if(t2==-1){
                    dp[i][j]=-1;
                    l[i][j]=-1;
                }
                else {
                    dp[i][j]=t2;
                    l[i][j]=max(l[i-1][j],t2);
                }
            }
            else if(t2==-1){
                dp[i][j]=t1;
                l[i][j]=max(l[i][j-1],t1);
            }
            else{
                dp[i][j]=min(t1,t2);
                l[i][j]=max(min(l[i][j-1],l[i-1][j]),dp[i][j]);
            }

         }
    }

    cout<<l[b][a]<<endl;
    return 0;
}
