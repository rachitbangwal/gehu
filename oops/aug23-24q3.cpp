#include<iostream>
using namespace std;
class hotel{
	private:
		int roomNo;
		string name;
		int tariff;
		int nod;
		int calc(int n,int t){                  //returns ammount
			if((n*t)>10000){
				return n*t*1.05;
			}
			else{
				return n*t;
			}
		}
		
	public:
		
		void checkin(int rn, string nam, int t,int n){    //RNo(room no), name,, tarrif, nod
			roomNo=rn;
			name=nam;
			tariff=t;
			nod=n;
		}
		void checkout(){
			cout<<"room no :- "<<roomNo<<endl;
			cout<<"name :- "<<name<<endl;
			cout<<"tarrif :- "<<tariff<<endl;
			cout<<"Number of days :- "<<nod<<endl;
			cout<<"amount :- "<<calc(nod,tariff)<<endl;
		}
};

int main(){
	hotel c1;
	int rn;
	string nam;
	int t;
	int n;
	cout<<"room no :- ";
	cin>>rn;
	cout<<"name :- ";
	cin>>nam;
	cout<<"tarrif :- ";
	cin>>t;
	cout<<"Number of days :- ";
	cin>>n;
	c1.checkin( rn, nam, t, n);
	cout<<endl;
	c1.checkout();
	
}
