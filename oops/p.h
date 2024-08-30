#include<iostream>
using namespace std;
namespace pq{
	int a=10;
	void show(){
		cout<<"display function in pq namespace or ms2 alias"<<endl;
	}
}
namespace ms2=pq;
