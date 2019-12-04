/* 
  Time complexity: O(sqrt(n))
  Auxiliary Space: O(sqrt(n))
*/

void printFactors(int n){
  vector<int> vc;
  for(int i=0;i<=sqrt(n);i++){
    if(n%i == 0){
      if(n/i == i){
        cout<<i<<" ";
      }
      else{
        cout<<i<<" ";
        vc.push_back(n/i);
      }
    }
  }
  for(int i=vc.size()-1;i>=0;i--){
    cout<<vc[i]<<" ";
  }
}
