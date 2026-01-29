#include <iostream>
#include <string>
using namespace std;

int main()
{
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
 return 0;
}