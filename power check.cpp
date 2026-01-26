#include <iostream>
using namespace std;

bool ispoweroftwo(int n){
	 return n>0 && (n&(n-1))==0;
}

int main(){
	
	int n;
	cout<<"Enter a number : "<<endl;
	cin>>n;

if(ispoweroftwo(n)){
	cout<<endl<<n<< " is a power of two"<<endl;
}

else
    cout<<n<< " is not a power of two"<<endl;
    
	
	return 0;
}