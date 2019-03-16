#include <iostream>
using namespace std;

int main() {

    //Enter number of test cases
    int t; 
    cin>>t;
    
    //Loop for test cases
	for(int i=0;i<t;i++){
  
      //n is the value upto which we have to find prime numbers
	    int n;
	    cin>>n;
      
      //initiallize an integer array to define whether the index is prime or non prime(0 for non-prime & 1 for prime) 
	    int prime[n+1];
	    
	    for(int i=0;i<=n;i++){
	        prime[i]=1;
	    }
      
      //Logic goes here
      
	    for(int p=2;p*p<=n;p++){
	        if(prime[p]==1){
	            for(int j=p*p;j<=n;j+=p){
	                prime[j]=0;
	            }
	        }
	    }
      
      //Loop to prime prime
	    for(int i=2;i<=n;i++){
	        if(prime[i]==1)
	            cout<<i<<" ";
	        
	    }
	    cout<<endl;
	}
	return 0;
}
