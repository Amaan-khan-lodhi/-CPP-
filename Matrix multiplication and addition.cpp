#include<iostream>
using namespace std;

void addMatrices(int arr1[3][3], int arr2[3][3]);
void multiplyMatrices(int arr1[3][3], int arr2[3][3]);
int main()
{
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

 return 0;
}
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