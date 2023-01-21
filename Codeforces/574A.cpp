#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[110];

int main(){
  ll n;
  cin>>n; 
  for(int i = 0;i < n;i++) 
  		cin>>a[i];
  int r = 0;
  while(true){
    int  maxi = 0; 
    for(int i = 1;i < n;++i){
        if(a[i] >= a[maxi]) 
	  		maxi = i;
    }
    if(maxi == 0) 
		break;
    ++r;
    ++a[0];
    --a[maxi];
  }
  cout<<r<<endl;
}
