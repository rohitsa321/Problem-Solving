#include <iostream>
using namespace std;

int main() {
	// your code goes here
  // taking array size 32 after that the values greater than four million 
    int a[32];
    int  x=1;
    int  y=1;
     int sum=0;
    a[0]=x;
    
   for(int i=1;i<32;i++){
        a[i]=x+y;
        x=y;
        y=a[i];
    }
    cout<<endl;
    for(int j=1;j<32;j+=3){
        sum=sum+a[j];

    }
    cout<<sum;
    
	return 0;
}
// Answer is 4613732
