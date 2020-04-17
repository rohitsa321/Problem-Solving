
#include<iostream>
using namespace std;

int main(){
    long result=2;
    int i=0;
    int count=1;
    while(count<10001){
        result++;
        for(i=2;i<result;i++){
              if(result%i==0){
                  break;
              }
              else{
                  if(result-1==i){
                      count++;
                  }
                  continue;
              }
        }
        
    }
    cout<<result<<endl;
    return 0;
}
