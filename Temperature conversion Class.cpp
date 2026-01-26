#include<iostream>
using namespace std;

class Temperature{
	float C;
	
public:
	
	void setTemperature(float T){
		if (T>=-273.15){
			C=T;
}
		else{
			cout<<"Invalid Temperature"<<endl<<"Automatically set to '-273.15' "<<endl;
			C=-273.15;
		}
	}
	
    float getCelcius(){
    	return C;
	}
	
	float getFahrenheit(){
    	return (C*9/5)+32;
	}
	
	float getKelvin(){
    	return (C+273.15);
	}
};

int main(){
	
	Temperature temp;
	
	temp.setTemperature(25);
	
	cout<<"Temperature in Celsius : "<<temp.getCelcius()<<endl<<"Temperature in Fahrenheit : "<<temp.getFahrenheit()<<endl<<"Temperature in Kelvin : "<<temp.getKelvin()<<endl;
	
}
