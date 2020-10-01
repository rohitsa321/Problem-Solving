//The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143 ?

#include <iostream>
using namespace std;

bool prime(int x){
     for(int j=2;j<x;j++){
         if(x%j!=0){
             continue;
         }else{
             return false;
         }
     }
    return true;
}

int main() {
	// your code goes here
	int result=0;
    long  a=600851475143 ;
	int temp=0;
	while(a>1){
      for(int i=2;i<=a;i++){
          if(a%i==0){
              a=a/i;
              temp=i;
              break;
          }
       }
    if(prime(temp)){
         if(result<temp){
                result=temp;
            }
        }
	
	}
	cout<<result<<endl;
	return 0;
}
