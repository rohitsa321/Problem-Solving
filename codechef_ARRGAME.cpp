 //codechef problem
 //Problem Code: ARRGAME

#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T>0){
     int n;
     cin>>n;
     int strip[n];
     vector<int>optimalSection;
     for(int i=0;i<n;i++){
       cin>>strip[i];
     }
     int count=0;
     for(int i=0;i<n;i++){
          if(strip[i]==1 && count==0){
                continue;
          }else if(strip[i]==0){
                      count++;
                      continue;
          }
          optimalSection.push_back(count);
          count=0;
     }
     int max= optimalSection.empty()?0:*max_element(optimalSection.begin(),optimalSection.end());
     if(max%2!=0){
       cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     }
    
    T--;
  }
  return 0;
}