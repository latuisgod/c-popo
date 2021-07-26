#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string s;
  string s1;
  getline(cin,s);
  getline(cin,s1);
  string s2= s+s1;
  cout<< s.length()<<" "<<s1.length()<<endl;
  cout<<s2<<endl;
  swap(s[0] , s1[0] );
    cout<< s<<" "<<s1;
    return 0;
}