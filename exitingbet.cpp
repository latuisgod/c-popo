#include<iostream>

using namespace std;

int main(){
   
  int n;
  cin>>n;
  int h= 0;
     int m;
   cin>>m;
   int arr[m];
  while(h<n){
      for(int j=0;j<m;j++){        
          cin>>arr[j];
          int sum=0;
           sum +=arr[j];
          if(sum%m==0){
             cout<<"0"<<endl;
          }
          else if(sum%m>m || sum%m<m){
              sum++;
              m++;
          }
       
      }
      h++;
  }
    return 0;
}