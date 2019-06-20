#include<bits/stdc++.h>
using namespace std;
long long LCS(string s,string s1,long long m,long long n){
    int l[m+1][n+1];
    int i,j;
    for(long long i=0;i<m;i++){
        for(long long j=0;j<n;j++){
            if(i==0 || j==0)
            l[i][j]=0;
            else if(s[i-1]==s1[j-1])
            l[i][j]=l[i-1][j-1]+1;
            else
            l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    return l[m][n];
}
int main(){
    string s,s1;
    cin>>s>>s1;
    cout<<LCS(s,s1,s.size(),s1.size());
    return 0;
}
