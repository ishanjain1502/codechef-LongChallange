#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int g1,g2,b1,b2,s1,s2;
	    cin>>g1>>s1>>b1;
	    cin>>g2>>s2>>b2;
	    
	    int t1,t2;
	    t1 = g1+b1 + s1;
	    t2 = g2 + b2 + s2;
	    
	    (t1>t2)?cout<<"1\n":cout<<"2\n";
	}
	
	return 0;
}
