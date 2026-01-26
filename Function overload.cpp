#include <iostream>
using namespace std;

void greet(string name){
      cout<<"Hello, "<<name<<'!'<<endl;
}

void greet(string name,string greeting){
	cout<<greeting<<', '<<name<<'!'<<endl;
}

//Third one is not possible (ambigious error/function)

int main() {
   string name,greeting="Hi";
     cout<<"Enter your Name : "<<endl;
     cin>>name;
greet(name);
greet(name,greeting);
    return 0;
}
