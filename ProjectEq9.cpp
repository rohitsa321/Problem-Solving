#include <iostream>
using namespace std;

bool pythagoras(int x,int y,int z){
    x=x*x;
    y=y*y;
    z=z*z;
    if(x+y==z){
        return true;
    }
    return false;
}

int main() {
	// your code goes here
	int a=333,b=333,c=334; //1000/3=333 but 333*3=999, so we will add 1 to c edge
	
	
	for(b=333;b<=1000-(a+c);b++){
	    for(a=333;a>0;a--){
	        c=1000-(a+b);
	        if(pythagoras(a,b,c)){
	            break;
	        }
	    }
	      if(pythagoras(a,b,c)){
	            break;
	        }
	}
	cout<<a*b*c<<endl;
	return 0;
}
