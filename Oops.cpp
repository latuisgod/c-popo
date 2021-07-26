#include<iostream>
using namespace std;
  
  class ghar{
      public :
      int lambai;
      int chaurai;
      void data(int x , int y){
          lambai = x;
          chaurai=y;
      }
      void totaldata(){
          cout<< lambai * chaurai;
      }
  };

int main(){
   ghar mihir;
   mihir.data(200 , 400);
   mihir.totaldata();
    return 0;
}