#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,c=0,d=0,n=0;
	    cin>>x;
	    string s;
	    cin>>s;
	    n=count(s.begin(),s.end(),'N');
	    c=count(s.begin(),s.end(),'C');
	    d=count(s.begin(),s.end(),'D');
	    if(c>n){
	        cout<<x*60<<endl;
	    }else if(n>c){
            cout<<40*x<<endl;
        }else if( c=n){
           cout<<55*x<<endl; 
        }
	}
	return 0;
}
