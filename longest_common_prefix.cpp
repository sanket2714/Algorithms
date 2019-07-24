#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int pos=-1;
	    while(!s1.empty()){
	        if(s2.find(s1) == string::npos){
	            s1.pop_back();
	        }
	        else{
	            pos=s2.find(s1);
	            break;
	        }
	    }
	    if(pos==-1)
	    cout<<-1<<endl;
	    else
	    cout<<pos<<" "<<s1<<endl;
	    
	}
	return 0;
}
