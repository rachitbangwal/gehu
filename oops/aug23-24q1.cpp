//basic implimentation of a class in c++

#include<iostream>
using namespace std;

class employe{
	private:
		int empid;
		string name;
		float salary;
		string companyName;
	
	public:
		//setter member
		void setId(int tmp){
			empid=tmp;
		}
		void setName(string tmp){
			name=tmp;
		}
		void setSalary(float tmp){
			salary=tmp;
		}
		void setCompanyName(string tmp){
			companyName=tmp;
		}
		
		//geter member
		int getId(){
			return empid;
		}
		string getName(){
			return name;
		}
		float getSalary(){
			return salary;
		}
		string getCompanyName(){
			return companyName;
		}
		
		void show(){
			cout<<"Employee Id :- "<<empid<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Salary :- "<<salary<<endl;
			cout<<"Company Name :- "<<companyName<<endl;
		}
};

int main(){
	employe e1;
	e1.setId(1234);
	e1.setName("Rachit Bangwal");
	e1.setSalary(150000000);
	e1.setCompanyName("Google");
	
	cout<<"Employee Id :- "<<e1.getId()<<endl;
	cout<<"Name :- "<<e1.getName()<<endl;
	cout<<"Salary :- "<<e1.getSalary()<<endl;
	cout<<"Company Name :- "<<e1.getCompanyName()<<endl;
	
	cout<<endl<<"calling show function ..."<<endl;
	e1.show();
	return 0;
}
