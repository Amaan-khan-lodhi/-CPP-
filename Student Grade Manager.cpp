#include<iostream>
using namespace std;

class StudentGrade{
private:
		string name;
		float grade[5];
		int gcount;	
public:	
		StudentGrade(string n){
		name=n;	
		gcount=0;
	}
	
	bool addgrade(float g){
	
		if (g<0||g>100){
			
			cout<<"Invalid Grade "<<g<<". Must be (0-100)"<<endl<<endl;
		return false;
		}
		
		if (gcount >=5){
		cout << "Cannot add more than 5 grades." << endl;
		return false;
	}
		grade[gcount]=g;
		gcount++;
		
		return true;
	}
	
	float getaverage(){
		if (gcount==0){
			return 0;
		}
		
		float sum=0;
		for(int i=0;i<gcount;i++){
			sum+=grade[i];
		}
		
		return sum/gcount;
	}
	
	void result(){
		cout<<"Name : "<<name<<endl;
		for(int i=0;i<gcount;i++){
			cout<<"Grade "<<i+1<<": "<<grade[i]<<endl<<endl;
		}
		cout<<"Average : " <<getaverage()<<endl;
	}
	
};

int main(){
	
	StudentGrade s1("Amaan Khan");
	
	s1.addgrade(2.5);
	s1.addgrade(98);
	s1.addgrade(109);
	s1.addgrade(88);
	s1.addgrade(80);
	

	s1.result();
	
}

















