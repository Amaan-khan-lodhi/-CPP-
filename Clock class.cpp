#include<iostream>
using namespace std;

class Clock{
private:
	int hours;
	int minutes;
public:
	Clock(int h,int m){
	if(h>=00 && h<=23){
		hours=h;
}
	
	else{
		cout<<"Invalid Hours!"<<endl<<"Automatically set to hours = 00"<<endl;
		hours=00;
}
		if(m>=00 && m<=59){
		minutes=m;
	}
	
	else{
		cout<<"Invalid Minutes!"<<endl<<"Automatically set to Minutes = 00"<<endl;
		minutes=00;
}
}
	void tick(){
		if (minutes<=58){
		minutes++;
	}
	
		else{
		minutes=00;
		hours++;
	}
	
	if (hours>23){
		hours=00;
	}
}
	
	void display(){
		
		cout<<"Time : "<<hours<<":"<<minutes<<endl;
		
	}
};


int main(){
	Clock C1(23,58);
	
	C1.tick();
	C1.display();
	C1.tick();
	C1.display();
	C1.tick();
	C1.display();
	C1.tick();
	C1.display();
	C1.tick();
	C1.display();
	
	return 0;
}


















