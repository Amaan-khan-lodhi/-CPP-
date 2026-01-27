#include<iostream>
using namespace std;

class Car{
private:
	string brand;
	int current_speed;
	int max_speed;

public:	
	Car(string name, int MSpeed){
		
		brand=name;
		current_speed=0;
		max_speed=MSpeed;
		
	}
	
	void inc_speed(int delta){
		if ((current_speed+delta)<=max_speed){
			
			current_speed+=delta;
			cout<<"Speed increased!"<<endl;
			cout<<"Current speed  "<<current_speed<<"Km/h"<<endl<<endl;
		}
		
		else{
			cout<<"Reached Max Speed"<<endl;	
		}
   }
   
   	void dec_speed(int belta){
		if ((current_speed-belta)>=0){
			
		
			current_speed-=belta;
			cout<<"Breaks Applied!"<<endl;
			cout<<"Current speed  "<<current_speed<<"Km/h"<<endl<<endl;
		}
		
		else{
			current_speed=0;
		 cout << "Car stopped!" << endl<<endl;
		}
   }
	
	void display(){
		
		cout<<"Name : "<<brand<<endl;
		cout<<"Max Speed "<<max_speed<<"Km/h"<<endl;
		cout<<"Current speed  "<<current_speed<<"Km/h"<<endl<<endl;
		
		if (current_speed == 0){
			cout<<"Car is at rest"<<endl;
	}
}
};

int main(){

Car c1("Toyota",180);
c1.display();
c1.inc_speed(170);
c1.dec_speed(30);
c1.inc_speed(60);

	return 0;

}