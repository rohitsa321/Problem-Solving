#include<iostream>
using namespace std;
int solve(int N){
     int SquareOfSum=0;
     int SumOfSquare=0;
     for(int i=1;i<=N;i++){
         SquareOfSum=SquareOfSum+i;
         SumOfSquare=SumOfSquare+(i*i);
         if(i==N){
             SquareOfSum=SquareOfSum*SquareOfSum;
         }
     }
      return (SquareOfSum-SumOfSquare);
}


int main(){
   int result=0;
   result=solve(100);
    cout<<result<<endl;
    return 0;
}

