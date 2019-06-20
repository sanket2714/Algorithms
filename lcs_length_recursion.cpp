#include<bits/stdc++.h>
using namespace std;
long long LCS(string s,string s1,long long m,long long n){
    if(m==0 || n==0)
    return 0;
    if(s[m-1]==s1[n-1])
    return 1+LCS(s,s1,m-1,n-1);
    else
    return max(LCS(s,s1,m,n-1),LCS(s,s1,m-1,n));
}
int main(){
    string s,s1;
    cin>>s>>s1;
    cout<<LCS(s,s1,s.size(),s1.size());
    return 0;
}
