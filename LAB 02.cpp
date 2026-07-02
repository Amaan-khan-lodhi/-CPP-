#include<iostream>
#include<string>
#include <random>
using namespace std;


// All questions are included in this file


/* Question 1: Write a program in which a class named student has member variables name, roll_no, semester
and section. Create 4 objects of this class to store data of 4 different students, now display data
of only those students who belong to section A.*/

class Student{
	string name;
	int roll;
	int semester;
	string section;
	
	public:
		Student(string n, int r, int sem, char s){
			name=n;
			roll=r;
			semester=sem;
			section=s;
		}
		
	
		void display(){
			if (section == "A" ){
			cout<<"Name = "<<name<<endl<<"Roll Number = "<<roll<<endl<<"Semester = "<<semester<<endl<<"Section = "<<section<<endl<<endl;
}
					}
			
	
};


int main(){
	Student s1("Amaan khan ", 25007, 2 ,'B' ), s2("Zahid lodhi", 25007, 2 ,'A' ),
			s3("Fahad ", 25007, 2,'C' ), s4("Danish", 25077, 2 ,'A' );
			
			
			s1.display();
			s2.display();
			s3.display();
			s4.display();
			
			return 25077;
}



/*You are a programmer for the ABC Bank assigned to develop a class that models the basic
workings of a bank account.*/



class Bank{
		string name;
		int acc_num;
		int acc_bal;
		int tot_trans;
			
	public:
		Bank(string n, int acc_N, int acc_B){
			name=n;
			acc_num=acc_N;
			acc_bal=acc_B;
		}
		
		void deposits(int amt){
			acc_bal+=amt;
			tot_trans++;
			cout<<amt<<"rs Deposited Succesfully"<<endl;
		}
		
		void withdraw(int amt){
			acc_bal-=amt;
			tot_trans++;
			cout<<amt<<"rs withdrwed Succesfully"<<endl;
		}
		
		int getbalance(){
			return acc_bal;
		}
		
		int gettot_trans(){
			return tot_trans;
		}
};

int main(){
	
	int A_bal, A_num, choice, amount;
	string nam;
	
	cout<<" Enter your Name: ";
	cin>>nam;
	cout<<"Enter your Account Number: ";
	cin>>A_num;
	
	A_bal=5000;
	
	Bank c1(nam, A_num, A_bal);
	
	cout<<"1: Display Account Balance"<<endl
		<<"2. Display the number of transactions"<<endl
		<<"3. Make a deposit"<<endl
		<<"4. Make a withdrawal"<<endl
		<<"5. Exit the program"<<endl<<endl;
		
	cin>>choice;
	
	switch (choice){
		case 1:
			cout<<"Your Account Balance is: "<<c1.getbalance();
			break;
		case 2:
			cout<<"Total Number of Transactions are:"<<c1.gettot_trans();
			break;
			
		case 3:
			cout<<"Enter the amount you want to deposit:";
			cin>>amount;
			c1.deposits(amount);
			break;
		
		case 4:
			cout<<"Enter the amount you want to Withdraw:";
			cin>>amount;
			c1.withdraw(amount);
			break;
		
		case 5:
			cout<<"Program Exited Successfully"<<endl;
			break;
			
		default:
			cout<<"Invalid choice"<<endl;
	}
	
		return 25077;
}



/* Question 3: Create a class called Employee that includes three pieces of information as data members—a
			   first name (type char* (DMA)), a last name (type string) and a monthly salary (type int).*/
			   
	
class Employee{
	string F_name;
	string L_name;
	int M_salary;
	
	public:
		
		void setfirstname(string Fn){
			F_name=Fn;
		}
		void setlastname(string Ln){
			L_name=Ln;
		}
		void setmounthlysalary(int M_sal){
			if(M_sal>=0){
		    	M_salary=M_sal;
	}
			else
				M_salary=0;
		}
		
		int getyearlysalary(){
			return M_salary*12;
		}
		
		int getincresedsalary(){
			return (M_salary+(M_salary*0.10))*12;
		}
};



	int main(){
		
			Employee e1,e2;
			
			e1.setfirstname("Amaan ");
			e1.setlastname("Khan");
			e1.setmounthlysalary(12000);
			
			e2.setfirstname("Zaid ");
			e2.setlastname("Khan");
			e2.setmounthlysalary(1200);
			
			cout<<"Yearly Salary of Employee 1:"<<e1.getyearlysalary()<<endl;
			cout<<"Yearly Increased Salary of Employee 1:"<<e1.getincresedsalary()<<endl;
			
			cout<<"Yearly Salary of Employee 2:"<<e2.getyearlysalary()<<endl;
			cout<<"Yearly Increased Salary of Employee 2:"<<e2.getincresedsalary()<<endl;
			
			
		return 25077;
	}

/* Question 4: Write C++ code to represent a hitting game by using OOP concept.*/

class Team{
	int T_player;
	int yourhit;
	int enemyhit;
	
	public:
		void settotalplayer(){
					random_device rd;
				    mt19937 gen(rd());                  
				    uniform_int_distribution<> dist(1, 10);
				
				    T_player = dist(gen);
				    
				    cout << "Total No. Of Players in your team: " << T_player << endl;
		}
		
		
		void playgame(){
			yourhit=0;
		 	enemyhit=0;
			for (int i=1; i<=T_player; i++){
				    random_device rd1;
				    mt19937 gen1(rd1());                  
				    uniform_int_distribution<> dist1(1, 10);
				
				    int RandomNumber1 = dist1(gen1);
				    
				    random_device rd2;
				    mt19937 gen2(rd2());                  
				    uniform_int_distribution<> dist2(1, 10);
				
				    int RandomNumber2 = dist2(gen2);
				    
				    cout << "\nPair of numbers:\n";
					cout << "Number1: " << RandomNumber1 << endl;
					cout << "Number2: " << RandomNumber2 << endl;
				    
				    if (RandomNumber1==RandomNumber2){
				    	cout<<"Enemy got hit by your Team"<<endl;
				    	yourhit++;
					}
					
					else{
						cout<<"You got hit by the Enemy team"<<endl;
						enemyhit++;
			}
		  }
		}
		
		void Result(){
			if(yourhit>enemyhit){
				cout<<"Game Over! You Won"<<endl;
			}
			
			else if (yourhit<enemyhit){
				cout<<"Game Over! You lose"<<endl;
			}
			
			else{
				cout<<"Match Draw"<<endl;
			}
		}
		
};


int main(){
		
		Team t1;
		t1.settotalplayer();
		t1.playgame();
		t1.Result();
		
	return 25077;
}
			   
	




	