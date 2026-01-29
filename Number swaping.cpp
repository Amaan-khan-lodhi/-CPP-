#include<iostream>
using namespace std;
int main()
{
 int n1,n2,n3;
 int *a,*b,*c;
 int x;
 cout<<"Enter Three numbers for swapping: "<<endl<<endl;
 cin>>n1;
 cin>>n2;
 cin>>n3;
 a=&n1;
 b=&n2;
 c=&n3;
 
 cout<<"BEFORE SWAPPING 3 INPUTED NUMBERS ARE: "<<endl<<endl;
 cout<<"First Number: "<<*a<<endl;
 cout<<"Second Number: "<<*b<<endl;
 cout<<"Third Number: "<<*c<<endl<<endl;
 x=*a;
 *a=*b;
 *b=*c;
 *c=x;

 cout<<"AFTER SWAPPING 3 INPUTED NUMBERS ARE: "<<endl<<endl;
 cout<<"First Number: "<<*a<<endl;
 cout<<"Second Number: "<<*b<<endl;
 cout<<"Third Number: "<<*c<<endl;

 return 0;
}
