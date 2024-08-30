#include<iostream>
using namespace std;
namespace myspace{
	int a=20;
	void show(){
		cout<<"print function in myspace namespace or ms1 alias"<<endl;
	}
}
namespace ms1=myspace;
