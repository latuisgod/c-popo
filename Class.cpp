#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

/*
    add code for struct here.
*/
struct Student {
    public :
    int age;
    string  first_name;
    string  last_name;
    int standard;
   
};
int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << "\n";
     cout << st.last_name << ", " << st.first_name << "\n";
      cout << st.standard << "\n"; 
      cout << "\n"; 
      cout << st.age<<","<<st.first_name<<","<<st.last_name<<","<<st.standard;
    
    return 0;
}