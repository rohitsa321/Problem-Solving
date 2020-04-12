#include<iostream>
using namespace std;
int a[6]; // global array
int k=0;// for index
void storeInArray(int x){
       int temp;
        k=0;
       while(x>0){
           temp=x%10;
           a[k]=temp;
           x=x/10;
           k++;
      }
       for(int j=0;j<k/2;j++){
           a[j]=a[j]+a[k-1-j]-(a[k-1-j]=a[j]);
       }
}
bool pelindrome(){
    
    int mid=k/2;
    
    for(int i=0;i<mid;i++){
        if(a[i]==a[k-1-i]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
 

int main() {
	// your code goes heren
	int result=0;
      for(int i=999;i>900;i--){   //Assuming those numbers are above 900
       for(int j=999;j>900;j--){
	         result=i*j;
           storeInArray(result);
	         if(pelindrome()){
                  cout<<"Largest prime of product of 3 digit numbers is:-"<<endl;
	              for(int c=0;c<k;c++){
	                  cout<<a[c];
	             }
                 cout<<endl;
                 cout<<"And those numbers are "<<i<<" and "<<j<<endl;
	           return 0;
	       }
	    }
	 }
	  

	return 0;
}



//ANSWER IS;- 906609
//And those numbers are 993 and 913
