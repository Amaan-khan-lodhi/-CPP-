#include<iostream>
#include<string>
using namespace std;


//Write a C++ program to copy the value of one object to another object using copy constructor.

//class Copy{
//	int roll;
//	string name;
//	public:
//		Copy(int r, string n){
//			roll=r;
//			name=n;
//			cout<<"Constructor is called"<<endl;
//		}
//		
//		Copy(const Copy& c1){
//			name=c1.name;
//			roll=c1.roll;
//			cout<<"Copy constructor is called"<<endl;
//		}
//		
//		void display(){
//			cout<<"Roll Number = "<<roll<<"Name: "<<name<<endl;
//		}
//      ~Copy(){}
//};
//
//
//int main(){
//	Copy c1(25077, "Amaan khan lodhi");
//	Copy c2(c1);
//	Copy c3=c1;
//	
//	c1.display();
//	c2.display();
//	c3.display();
//	
//	return 25077;
//}



//Question 2: Create a class tollbooth. The two data items are a type int to hold the total number of cars and a type double to hold the total amount of money collected.

//class tollbooth{
//	int T_car;
//	double T_money;
//	
//	public:
//		tollbooth(){
//			T_car=0;
//			T_money=0;
//		}
//		
//		void payingCar(){
//			T_car++;
//			T_money+=0.50;
//		}
//		
//		void display(){
//			cout<<"Total Number of Car's are : "<<T_car<<endl;
//			cout<<"Total Amount of Money collected is : "<<T_money<<"$"<<endl;
//		}
//		~tollbooth(){}
//};
//
//
//
//int main(){
//	tollbooth Tb1;
//	Tb1.payingCar();
//	Tb1.payingCar();
//	Tb1.display();
//	Tb1.payingCar();
//	Tb1.payingCar();
//	Tb1.payingCar();
//	Tb1.payingCar();
//	Tb1.display();
//	
//	return 25077;
//}


/*Question 3: Some of the characteristics of a book are the title, author(s), publisher, ISBN, price, 
			  and year of publication. Design a class bookType that defines the book as an ADT.*/

//class BookType{
//		string title;
//		string author[4];
//		string publisher;
//		int ISBN;
//		float price;
//		int stock;
//		int num=0;
//		
//		public:
//			BookType(string title="ABCD", string publisher= "IJKL", int ISBN =0, float price=0, int stock=0 ){
//				this->title=title;
//				this->publisher=publisher;
//				this->ISBN=ISBN;
//				this->price=price;
//				this->stock=stock;
//			}
//			
//			void settitle(string t){
//			title=t;
//		}
//		
//		string gettitle(){
//			return title;
//		}
//		
//		void setauthor(){
//			
//			cout<<"Numbers of Author of this book: ";
//			cin>>num;
//			for (int i=0; i<num; i++){
//				cout<<"Enter Author"<<i+1<<" :";
//				cin>>author[i];
//			}
//			
//		}
//		
//		void getauthor(){
//			for (int j=0;j<num; j++){
//				cout<<"Authors are: "<<author[j]<<endl;
//			}
//		}
//		
//		void setpublisher(string publi){
//			publisher=publi;
//		}
//		
//		string getpublisher(){
//			return publisher;
//		}
//		
//		void setISBN(int is){
//			ISBN=is;
//		}
//		
//		
//		int getISBN(){
//			return ISBN;
//		}
//		
//		void setprice(float p){
//			price=p;
//		}
//		
//		float getprice(){
//			return price;
//		}
//		
//		void setstock(int s){
//		 stock=s;
//		}
//		
//		int getstock(){
//			return stock;
//		}
//		
//		
//		void checktitle(string tit){
//				if (title == tit){
//					cout<<"The title you enter Exists"<<endl;
//				}
//				else {
//					cout<<"the title you enter does not Exists"<<endl;
//				}
//		}
//		
//		void checkISBN(int isbn){
//			if (ISBN == isbn){
//					cout<<"The Book with similar ISBN Exists"<<endl;
//				}
//				else {
//					cout<<"The Book with similar ISBN does not Exists"<<endl;
//				}
//		}
//		
//		void updatestock(int change)
//		{
//    		stock = change;
//			}
//		
//			
//			
//			
//			~BookType(){}
//};
//			
//			
//
//			int main()
//{
//    BookType books[100];
//
//
//    books[0].settitle("C++");
//    books[0].setISBN(255098);
//    books[0].setpublisher("ABC");
//    books[0].setprice(1200);
//    books[0].setstock(22);
//
// 
//    books[1].settitle("Java");
//    books[1].setISBN(255099);
//    books[1].setpublisher("XYZ");
//    books[1].setprice(1500);
//    books[1].setstock(15);
//
//  
//    books[0].checktitle("C++");
//    books[1].checktitle("Python");
//
//  
//    books[0].checkISBN(255098);
//    books[1].checkISBN(255100);
//
// 
//    cout << "Current stock of Book 1: "
//         << books[0].getstock() << endl;
//
//  
//    books[0].updatestock(30);
//
//    cout << "Updated stock of Book 1: "
//         << books[0].getstock() << endl;
//
//    return 25077;
//}
//			
//			
//
//
//
//
//
//
//
//
