#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n;
    cin>>s;
    cin>>n;
    string t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    int sl=s.size();
    string S[sl];
    for(int i=0;i<sl;i++){
        S[i]+=s;
        s.erase(0,1);
    }
    for(int i=0;i<n;i++){
        int nl=t[i].size();
        int g=-1,h=-1;
        for(int k=nl-1;k>=0;k--){
            if(t[i]==S[sl-1-k]){
                g=min(k+1,nl-k-1);
            }
            h=max(g,h);
            t[i]=t[i].erase(k,1);
        }
        cout<<h<<endl;
    }
    return 0;
}
