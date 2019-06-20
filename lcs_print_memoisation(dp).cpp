#include<bits/stdc++.h>
using namespace std;
void LCS(string s,string s1,long long m,long long n){
    int l[m+1][n+1];
   
    for(long long i=0;i<=m;i++){
        for(long long j=0;j<=n;j++){
            if(i==0 || j==0)
            l[i][j]=0;
            else if(s[i-1]==s1[j-1])
            l[i][j]=l[i-1][j-1]+1;
            else
            l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    long long length=l[m][n];
    
    //for printing the LCS
    int index=l[m][n];
    int i=m,j=n;
    char lcs[index+1];
    lcs[index]=' ';
    lcs[index+1]=' ';
    while(i>0 && j>0){
        if(s[i-1]==s1[j-1]){
            lcs[index-1]=s[i-1];
            i--;
            j--;
            index--;
        }
        else if(l[i-1][j] > l[i][j-1])
        i--;
        else
        j--;
    }
    cout<<length<<endl<<lcs;
}
int main(){
    string s,s1;
    cin>>s>>s1;
    
    LCS(s,s1,s.size(),s1.size());
   
    return 0;
}
