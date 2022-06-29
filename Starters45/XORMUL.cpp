#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int N,A,B;
	    cin>>N>>A>>B;
	    int chk = -1;
	    int tp = 0;
	    
	    
	    for(int i = N - 1;i>= 0; i--){
	        if(((1<<i)&A) == 0 && ((1 << i)&B) == 0){
	            tp |= (1<<i);
	        }
	        else if(((1<<i)&A) > 0 && ((1 << i)&B) > 0){
	            continue;
	        }
	        else{
	            if(chk == -1){
	                if(((1<<i)&A) == 0 && ((1 << i)&B) > 0){
	                   chk = 0;
	                }
	                else{
	                    chk = 0;
	                    tp |= (1 << i);
	                }
	            }
	            else{
	                if(((1<<i)&A) ==0 && ((1 << i)&B) > 0){
	                    tp |= (1 << i);
	                }
	            }
	        }
	    }
	    cout<< tp << "\n";
	}
	return 0;
}
