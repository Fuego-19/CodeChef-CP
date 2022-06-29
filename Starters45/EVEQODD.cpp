#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int steps(int n){
    int count = 0;
    while(n%2 == 0){
        n = n/2;
        count ++;
    }
    return count;
}
int main(){
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int arr[2*n];
	    int even =0;
        int odd = 0;
	    for(int i =0; i<2*n; i++){
	        cin>>arr[i];
            if(arr[i]%2 == 0){
	            even++;
	        }
	        else{
	            odd++;
	        }
	    }
        if(odd == even){
            cout<<"0\n";
            continue;
        } 
        int ans = 0;
        sort(arr, arr + 2*n);
        if(even > odd)
        {
            vector <int> chkr;
            for(int j =0; j<2*n; j++){
                if(arr[j]%2 == 0){
                    // float temp = log2(arr[j]);
                    // if(floor(temp)!= ceil(temp)){
                    //     exp = steps(arr[j]);
                    //     if(exp < minm){
                    //         minm = exp;
                    //         idx = j;
                    //     }
                    // }
                    // else{
                    //     if(temp<minm){
                    //         minm = temp;
                    //         idx = j;
                    //     } 
                    // }
                    int temp = arr[j];
                    int count = 0;
                    while(temp%2 == 0){
                        temp/= 2;
                        count++;
                    }
                    chkr.push_back(count);

                }
            }
            sort(chkr.begin(), chkr.end());
            for(int q = 0; q < even - n; q++){
                ans += chkr[q];
            }
            
        }
        else{
            // for(int k = 0; k< 2*n; k++){
            //     if(arr[k]%2 != 0){
            //         even++;
            //         arr[k] = arr[k]*2;
            //         ans++;
            //     }
            //     if(even == odd){
            //         break;
            //     }
            // }
            ans = odd - n;
        }
        cout<<ans<<"\n";
        
	}

    return 0;
}
