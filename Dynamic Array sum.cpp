#include <iostream>
using namespace std;

int main(){
	
	int n,sum=0;
	
	cout<<"Enter size of array"<<endl;
	cin>>n;
	
	int *array = new int[n];
	
	for (int i=0;i<n;i++){
	cout<<"Enter "<<i+1<<" Element"<<endl;
    cin>>*(array+i);
    
    sum+=*(array+i);
}

cout<<"The Sum is : "<<sum<<endl;

delete [] array;

return 0;
}