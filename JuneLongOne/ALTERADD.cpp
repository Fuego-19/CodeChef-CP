#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    
	    
	    int a,b;
	    cin>>a;
	    cin>>b;
	 
        if((b - a)%3 == 2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
	}
	return 0;
}
