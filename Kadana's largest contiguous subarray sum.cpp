#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int max_ending_here = 0,max_so_far = 0;
    for(int i=0;i<8;i++){
        max_ending_here+=arr[i] ;
        if(max_ending_here < 0){
            max_ending_here = 0 ;
        }
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here ;
        }
    }
    cout<<max_so_far;
    return 0;
}
