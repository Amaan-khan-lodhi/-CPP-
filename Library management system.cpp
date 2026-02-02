#include<iostream>
#include<vector>
using namespace std;

class Book{

private:
		const int bookId; 
		string title; 
		string author; 
		float price;
		bool issued; 
		static int T_book;
public:		
		Book (int b_id, string tit, string aut, float p): bookId(b_id){
		
		title = tit;
		author = aut;
		price=p;
		issued = false;
		T_book++;
		}
		
		int getbookId() const { return bookId;	}
		
			string gettitle() const { return title; }
		
			string getauthor() const { return author; }
		
		void setprice(float p){
			if (p>0){
				price=p;
			}
			else {
			price=0;
			cout<<"Invalid price! " <<"( "<<p<<" )"<<endl<<endl;
		}
		}
		
			float getprice(){ return price; }
			
			bool isIssued() const { return issued; }
    		void setIssued(bool val) { issued = val; }
		
		static int Tot_book() { return T_book; }
    
     void book_info() const {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "Issued: " <<(issued ? "Yes" : "No")<<endl;
        cout << "-------------------------" << endl;
    }
		
};

int Book::T_book = 0;

class Member{
	
private:
	int mem_id;
	string name;
	static const int max_book_allowed=5;
	static int T_mem;
	vector<int> borrowedbooks;
public:
	
	Member(int m_id, string n){
		mem_id=m_id;
		name=n;
		T_mem++;	
	}
	
	
	int getmem_id() const { return mem_id; }
	
	bool canborrow(){ return borrowedbooks.size() < max_book_allowed; }
	
	void borrowbook(int bookId){ return borrowedbooks.push_back(bookId); }
	
	string getname() const { return name;}
	
	static int Total_member(){ return T_mem;}	
	
	  void mem_info() const {
        cout << "Member ID: " << mem_id <<endl;
        cout << "Name: " << name <<endl;
        cout << "Borrowed Books: " << borrowedbooks.size() << endl<<endl;
    }
};

int Member::T_mem=0;

class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:
    void addBook(const Book& b) {
        books.push_back(b);
    }

    void registerMember(const Member& m) {
        members.push_back(m);
    }
    
    void issuebook(int bookId, int mem_id){
    	 int bookIndex = -1;
        int memberIndex = -1;
	
	for (int i = 0; i < books.size(); i++) {
            if (books[i].getbookId() == bookId) {
                bookIndex = i;
                break;
            }
        }
        
        for (int i = 0; i < members.size(); i++) {
            if (members[i].getmem_id() == mem_id) {
                memberIndex = i;
                break;
            }
        }
		
		 if (bookIndex == -1 || memberIndex == -1) {
            cout << "Book or Member not found!" << endl;
        }
        
         if (books[bookIndex].isIssued()) {
            cout << "Book already issued!" << endl;
        }
        
          if (!members[memberIndex].canborrow()) {
            cout << "Member has reached max book limit!" << endl;
            return;
        }
        
          books[bookIndex].setIssued(true);
        members[memberIndex].borrowbook(bookId);

        cout << "Book issued successfully!" << endl;
    }
    	 void displayBooks() const {
        	cout << "\n--- All Books ---\n";
    		for(int i=0;i<books.size();i++){
    		books[i].book_info();
    		}
		}
	 	void displayMembers() const {
       	 	cout << "\n--- All Members ---\n";
    		for(int i=0;i<members.size();i++){
    		members[i].mem_info();
    		}
		}
};

int main() {
    Library lib;


    lib.addBook(Book(101, "C++ Basics", "Auth", 500));
    lib.addBook(Book(102, "OOP in C++", "Aubtin ", 700));
    lib.addBook(Book(103, "Data Structures", "Carter", 600));

    lib.registerMember(Member(77, "Amaan"));
    lib.registerMember(Member(81, "Arsal"));


    lib.issuebook(101, 77);  
    lib.issuebook(102, 77);  
    lib.issuebook(103, 81);  


    lib.displayBooks();
    lib.displayMembers();

    return 0;
}