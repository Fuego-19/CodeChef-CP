#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int n,x;
	    cin>>n;
	    cin>>x;
	    if(n%6 ==0){
	        cout<<x*(n/6)<<"\n";
	        continue;
	    }
	    int tvs = (int)(n/6 + 1);
	    cout<<x*tvs<<"\n";
	}
	return 0;
}
