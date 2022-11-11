#include<bits/stdc++.h>
using namespace std;
bitset<305> a[305];
int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	char b;

	for(int i=0 ; i<n ; i++){
		a[i].reset();
		for(int j=0 ; j<m ; j++){
			cin>>b;
			a[i][j]=b-'0';
		}
	}
}
