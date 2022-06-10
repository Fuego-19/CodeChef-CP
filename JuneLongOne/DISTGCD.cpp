#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <math.h>

int gcd(int n1, int n2)
{
    return n2 == 0 ? n1 : gcd(n2, n1 % n2);   
}

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
        
        long long a,b;
        cin>>a;
        cin>>b;
        
        long long diff = abs(a - b);
        long long gcds = 0;
        // int gcds[n];
        // unordered_map<long, long> gcds;
        
        // for(long i = 0;i<diff; i++){
        //     a+= i;
        //     b+=i;
        //     gcds[gcd(a,b)]++;
        // }
        
        for(long long i =1; i<= sqrt(diff); i++){
            if(diff%i == 0){
                if(diff/i == i){
                    gcds+=1;
                }
                else{
                    gcds+=2;
                }
            }
        }
        cout<<gcds<<"\n";
	}
	
	
	return 0;
}
