#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
        
        if(x+y+z <= s){
            cout<< 0<<"\n";
            continue;
        }
        if(x + z <= s){
            cout<<1<<"\n";
        }
        else if(y + z <= s){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
	}
	return 0;
}
