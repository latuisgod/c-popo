#include<iostream>
using namespace std;
int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    // x1 and x2 are starting point//
   cin>>x1>>v1>>x2>>v2;

   if (x1 != x2){
       while(x1 != x2){
           x1 = x1+v1;
           x2= x2+v2;
       }
       else if (x1 == x2){
           cout<<"YES"<<endl;
       }
   }
   return 0;
}