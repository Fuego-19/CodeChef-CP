#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int sx,sy,ex,ey;
	    cin>>sx>>sy>>ex>>ey;
	    
	    if(sx == ex || sy == ey){
	        cout<<2<<"\n";
	    }
	    else{
	        cout<<1<<"\n";
	    }
	}
	return 0;
}
