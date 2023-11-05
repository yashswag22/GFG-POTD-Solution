
#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	        long long n;
	        cin>>n;
	        int count=0;
	       // while (n % 2 == 0) 
        //         { 
        //                   n = n/2; 
        //         } 
                
	        if(n == 1)
	        cout<<"Bob\n";
	        else if( n%2 ==0)
	        cout<<"Bob\n";
	        else if(n%2 !=0)
	        cout<<"Alice\n";
	        
	}
}
