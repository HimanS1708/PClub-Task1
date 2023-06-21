#include<bits/stdc++.h>
using namespace std;

const int N=0;

#define ll long long
#define ld long double

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int a1,a2,a3,a4;
		cin>>a1>>a2>>a3>>a4;
		if(a1==0){
			printf("1\n");
		}
		else{
			printf("%d\n",a1 + min(a2,a3)*2 + min(a1 + 1, abs(a2 - a3) + a4));
		}
	}
}
