// This is not the correct solution, it only gives 25pts
// The algorithm needs to be more optimised

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,a,b,c,d=0;
	    cin>>n;
	    
	    
	    for(c=1; c<=n; c++ ){
	        for( b=c; b<=n ; b = b+c){
	            for(a=c; a<=n; a = a+b){
	                if(a%b == c && b%c == 0){
	                    ++d;
	                }
	            }
	        }
	    }
	    
	    cout<<d<<endl;
	}
	
	return 0;
}
