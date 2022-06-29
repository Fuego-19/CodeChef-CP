#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    int count = 0;
	    
	    for(int i =0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i] == 1){
	            count ++;
	        }
	    }
	    if(count % 2 != 0){
	        cout<<"NO\n";
	    }
	    else{
	        cout<<"YES\n";
	    }
	    
	    
	}
	return 0;
}
