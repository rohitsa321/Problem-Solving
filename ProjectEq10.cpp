#include <iostream>
using namespace std;

bool prime(int temp){
    for(int i=2;i<=temp/2;i++){
        if(temp%i==0){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	long sum=2;
	for(int j=3;j<2000000;j++){
	    if(prime(j)){
	        sum+=j;
	    }
	}
	cout<<sum;
	return 0;
}
