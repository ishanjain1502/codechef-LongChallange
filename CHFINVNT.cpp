#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    long long int n,p,k;
	    cin>>n>>p>>k;
	    
	    long long int ans=0, remReq = p%k;
	    if(n%k<=(remReq - 1)){
	        ans = (n%k)*(n/k + 1) + (remReq - n%k)*(n/k);
	        ans += (p/k + 1);
	    }
	    else{
	        ans = (remReq)*(n/k + 1);
	        ans +=(p/k + 1);
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}
