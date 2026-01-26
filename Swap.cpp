#include <iostream>
using namespace std;

void swap(int &a,int &b){
	 int temp;
	 temp=a;
	 a=b;
	 b=temp; 	 
}

int main(){
	int a,b;
	
	cout<<"Enter first number : "<<endl;
	cin>>a;
	cout<<"Enter second number : "<<endl;
	cin>>b;
	
	swap(a,b);
	
	cout<<"After swap"<<endl;
	 cout<<a<<endl;
	 cout<<b<<endl;
	return 0;
}