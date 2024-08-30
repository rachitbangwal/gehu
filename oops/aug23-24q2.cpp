#include<iostream>
using namespace std;

class calculate{
	private:
		int unit;
		//setting the fix 50 rupee ammount
		float sum=50;

	public:
		void setUnit(int tmp){
			unit=tmp;
		}
		
		int calculateAmount(){
			int tmp=unit;
			if((tmp-300)>0){
				sum+=220;
				tmp-=300;
				sum+=tmp*0.9;                  //to calculate amount of units
				sum+=(sum*0.15);               //to calclate percentage
			}
			else{
				if((tmp-100)>0){
					tmp-=100;
					sum+=tmp*0.8;
					sum+=100*0.6;
				}
				else{
					sum+=tmp*0.6;
				}
			}
			
			return sum;
		}
};

int main(){
	string name;
	int unit;
	cout<<"enter your name :- ";
	cin>>name;
	cout<<"enter your units :- ";
	cin>>unit;

	calculate b1;
	b1.setUnit(unit);
	cout<<"total bill amount is :- "<<b1.calculateAmount()<<endl;
	return 0;
}
