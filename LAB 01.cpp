#include<iostream>
#include<string>
using namespace std;

//All questions are included

//For question 4
void addMatrices(int arr1[3][3], int arr2[3][3]);
void multiplyMatrices(int arr1[3][3], int arr2[3][3]);

//For question 5
void areaOfSphere(float r);
void volOfSphere(float r);

int main(){
	
/*Question 1: Write a program that take input of your roll number along with the marks obtained in five
subjects and display the total marks obtained and the percentage.*/

	int marks[5],roll=0,total=0;
	float per=0.0;
	
	cout<<" Enter your roll Number : ";
	cin>>roll;
	
	for(int i=0;i<5;i++){
		cout<< " Enter marks of Subject "<<i+1<<": ";
		cin>>marks[i];
		total+=marks[i];

}
	
		per=(total/500)*100;
		
		cout<<" Total Marks = "<<total<<endl;
		cout<<" Percentage = "<<per<<endl;


/*Question 2: Write a program to swap three numbers entered by a user using pointers.*/

	int num1,num2,num3,*ptr1,*ptr2,*ptr3,temp;
	
	cout<<"Enter Three numbers for swapping: ";
	cin>>num1>>num2>>num3;
	
	ptr1=&num1;
	ptr2=&num2;
	ptr3=&num3;
	
	cout<<"BEFORE SWAPPING 3 INPUTED NUMBERS ARE: "<<endl;
	cout<<*ptr1<<endl<<*ptr2<<endl<<*ptr3<<endl;
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*ptr3;
	*ptr3=temp;
	
	 cout<<"AFTER SWAPPING 3 INPUTED NUMBERS ARE: "<<endl;
	cout<<num1<<endl<<num2<<endl<<num3<<endl;


/*Question 3: Write a program to convert temp from Fahrenheit to Celsius unit using equation C=(F-32)/1.8*/

	int F,C;
	
	cout<<"Enter Temperature in Fahrenheit : ";
	cin>>F;
	
	C=(F-32)/1.8;
	
	cout<<"Temperature in Celsius : "<<C<<endl;
	

/* Question 4: Using 2-D arrays, write a program that allows the user to input two, 3x3 matrices. Write a function for adding two matrices. Write another function for multiplying the two matrices.*/


 int arr1[3][3];
 int arr2[3][3];

 cout<<"Enter the values of Matrix A(3x3):\n";

 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 cout<<"Value at ["<<i+1<<"]["<<j+1<<"]: ";
 cin>>arr1[i][j];

 }
 }
 cout<<"The Matrix A will look like this: \n";
 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 cout<<"[ "<<arr1[i][j]<<" ]";
 }
 cout<<"\n";
 }

 cout<<"Enter the Value for Matrix B(3x3):"<<endl;

 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 cout<<"Value at ["<<i+1<<"]["<<j+1<<"]: ";
 cin>>arr2[i][j];
 }
 }
 cout<<"The Matrix B will look like this: \n";
 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 cout<<"[ "<<arr2[i][j]<<" ]";
 }
 cout<<"\n";
 }

 cout<<"ADDITION OF MATRIX A AND MATRIX B: \n";
 addMatrices(arr1, arr2);
 cout<<"MULTIPLICATION OF MATRIX A AND MATRIX B: \n";
 multiplyMatrices(arr1, arr2);
 
 
 /* Write a program to find Surface area and volume of a sphere using functions.*/
 
 float radius;

 cout<<"Enter value of Radius for calculating Area of sphere & Volume of Sphere: ";
 cin>>radius;

 cout<<"AREA OF SPHERE: "<<endl;

 areaOfSphere(radius);

 cout<<"VOLUME OF SPHERE: "<<endl;
 
 volOfSphere(radius);
 
 
 
 /*Question 6: Write a program to help a bank create its withdrawal system. Your program should allow the user to input their account type. Account types are: savings, current.*/

	string acctype, accnum;
 char acccode;
 double withdrawamount;
 double balance = 200000.0;
 double fee = 0.0;
 double tax = 0.0;
 cout << "Enter Account Type (savings/current): ";
 cin >> acctype;
 cout << "Enter Account Number: ";
 cin >> accnum;
 cout << "Enter Account Code (S/C): ";
 cin >> acccode;
 cout << "Enter Amount to Withdraw: ";
 cin >> withdrawamount;
 if (withdrawamount > 100000)
 {
 cout << "Error: Maximum withdrawal limit is 100,000." << endl;
 }
 if ((acctype == "savings" || acctype == "Savings") && acccode == 'S')
 {
 fee = withdrawamount * 0.02;
 if (withdrawamount > 50000)
 {
 tax = withdrawamount * 0.05;
 }
 }
 else if ((acctype == "current" || acctype == "Current") && acccode == 'C')
 {
 fee = 100;
 if (withdrawamount > 50000)
 {
 tax = withdrawamount * 0.05;
 }
 }
 else
 {
 cout << "Invalid account type or code combination." << endl;
 }
 double totaldeduction = withdrawamount + fee + tax;
 if (totaldeduction > balance)
 {
 cout << "Insufficient amount to cover withdrawal and fees." << endl;
 }
 else
 {
 balance -= totaldeduction;
 cout << " Withdrawal Successful" << endl;
 cout << "Amount: " << withdrawamount << endl;
 cout << "Fees: " << fee << endl;
 cout << "Tax: " << tax << endl;
 cout << "Remaining Balance: " << balance << endl;
 }

	return 25077;
}
	
	//For question 4
void addMatrices(int arr1[3][3], int arr2[3][3])
{
 int add[3][3];
 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 add[i][j]=arr1[i][j]+arr2[i][j];
 }
 }
 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 cout<<"["<<add[i][j]<<"]";
 }
 cout<<"\n";
 }
}

void multiplyMatrices(int arr1[3][3], int arr2[3][3])
{
 int mul[3][3]={0};
 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 for(int k=0; k<3; k++)
 {
 mul[i][j]+=arr1[i][k]*arr2[k][j];
 }
 }
 }
 for(int i=0; i<3; i++)
 {
 for(int j=0; j<3; j++)
 {
 cout<<"["<<mul[i][j]<<"]";
 }
 cout<<"\n";
 }
}

//For question 5
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