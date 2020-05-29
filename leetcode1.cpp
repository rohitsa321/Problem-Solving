#include<iostream>
#include<string>
using namespace std;

int main(){
       string s="PAYPALISHIRING";
       int row=5;
       int temp=(row+(row-2));
       string result;
         for(int i=0;i<row;i++){
            for(int j=i;j<s.length();j+=temp){
                        result+=s[j];
                        if(i!=0&&i!=row-1&&j+temp-2*i<s.length()){
                           result+=s[j+temp-2*i];
                        }
            }
         }
     cout<<result;
   return 0;
}
