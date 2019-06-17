#include<bits/stdc++.h>
using namespace std;
void longest_common_prefix(multimap<int,string> &mp){
    
    string sx=mp.begin()->second;
    multimap<int,string>::iterator it =mp.begin();
    auto itl=next(it,1);
    string sx2=itl->second;
    int count1=0,temp=0,jj=0;
    
    //In this loop comparing shortest string with the second shortest string to find common prefix from the first two strings
    
    for(int i=0;i<sx.size();i++){
       
            if(sx[i]==sx2[jj]){
                jj++;
                count1++;
            }
            else
                temp=-1;
                    
            if(temp==-1)
                break;
    }
    
    string sub=sx.substr(0,count1);
    
    //In next loop we will compare the obtained sub string with the other remaining strings
    
    int count2=0;
    for(auto i=mp.begin();i!=mp.end();i++){
        int temp1=0,j=0;
        string z=i->second;
        for(auto xx:z){
            
                if(xx==sub[j]){
                    j++;
                    count2++;
                 }
                else{
                    temp1=-1;
                 }
            
                if(temp1==-1){
                    break;
                }
        }
    }
    
    cout<<sub.substr(0,count2)<<endl; //this prints the longest common prefix
}
/*int main(){
    int n;
    cin>>n;
    multimap<int,string> mp;
    while(n--){
        string s;
        cin>>s;
        mp.insert({s.size(),s});
    }
    longest_common_prefix(mp);
    return 0;
}*/
