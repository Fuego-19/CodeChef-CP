#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int sum = 0;
	    int arr[n];
	    for(int m =0; m<n; m++){
	        cin>>arr[m];
	    }
	    if(n%2!= 0){
	        cout<<-1<<"\n";
	    }
	    else{
	        for(int i =0; i<n; i++){
	            sum+= arr[i];
	  
	        }
	        cout<<int(abs(sum)/2)<<"\n";
	    }
	}
	return 0;
}
