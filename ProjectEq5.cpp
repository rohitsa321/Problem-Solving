#include<iostream>
using namespace std;
int main(){
    int result=20; //starting from 20
    int i=0;
    while(i!=21){
        for(i=2;i<21;i++){
         if(result%i==0){
               continue;
         }
         else{
            result++;
            break;
            }

    }
    }
    cout<<result<<endl;
    return 0;
}


//ANSWER=232792560
