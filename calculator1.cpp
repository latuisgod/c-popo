#include<iostream>
#include<string>
using namespace std;

int main(){
   int a;
   int b;
   cin>>a;
   string s;
   cin>>s;
   cin>>b;
   
   if( s == "+"){
       cout<<a+b<<endl;
   }
  if(s == "-"){
      cout<<a-b<<endl;
  }
  if( s == "*"){
      cout<<a*b<<endl;
  }
  if( s == "/"){
      cout<<a/b<<endl;
  }
    return 0;
}