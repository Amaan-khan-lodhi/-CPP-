#include<iostream>
using namespace std;

void areaOfSphere(float r);
void volOfSphere(float r);
int main()
{
 float radius;

 cout<<"Enter value of Radius for calculating Area of sphere & Volume of Sphere: ";
 cin>>radius;

 cout<<"AREA OF SPHERE: "<<endl;

 areaOfSphere(radius);

 cout<<"VOLUME OF SPHERE: "<<endl;
 
 volOfSphere(radius);


 return 0;
}
void areaOfSphere(float r)
{
 float areaOfSphere;
 areaOfSphere = (4.0)*(3.142)*(r*r);
 cout<<"Area Of Sphere is: "<<areaOfSphere<<endl;
}
void volOfSphere(float r)
{
 float volOfSphere;
 volOfSphere = (4.0/3.0)*(3.142)*(r*r*r);
 cout<<"Volume of Sphere is: "<<volOfSphere<<endl;
}