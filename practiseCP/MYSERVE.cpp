#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int p,q;
	    cin>>p>>q;
	    int temp = p + q + 1;
	    if(temp!= 0 && temp%4 == 0){
	        cout<<"Bob\n";
	    }
	    else if((temp+1)%4 == 0){
	        cout<<"Bob\n";
	    }
	    else if((temp+3)%4 == 0){
	        cout<<"Alice\n";
	    }
	    else if((temp + 2)%4 == 0){
	        cout<<"Alice\n";
	    }
	}
	return 0;
}
