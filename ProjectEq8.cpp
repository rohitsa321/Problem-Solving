#include <iostream>
using namespace std;

int main() 
{
   
string str;
cin>>str;
int length=str.length();
int span=13;
long result=0,temp=1;

for(int i=0;i+span<length;i++){
      temp=1;
    for(int j=0;j<span;j++){
        temp*=str[i+j]-'0';
    }
    if(result<temp){
        result=temp;
    }
}
cout<<result;
    return 0; 
}
