#include<iostream>
using namespace std;

class parent{
    private:
        int salary;
    protected:
        int empId;
    public:
        string name;

        void setName(string name){
            this->name=name;
        }

        void setEmpId(int empId){
            this->empId=empId;
        }

        void setSalary(int salary){
            this->salary=salary;
        }
};

class A:private parent{
    public:
        A(){
            setSalary(1500000);
        }
        void displaySalary(){
            //cout<<"salary :- "<<salary<<endl;           will give error becuse we are acessing the private var which is not allowed!!!
        }
};

class B:protected parent{
    public:
        B(){
            setName("rachit");
        }
        void displayName(){
            cout<<"name :- "<<name<<endl;
        }
};

class C:public parent{
    public:
        C(){
            setEmpId(1234);
        }
        void displayEmpId(){
            cout<<"employee id :- "<<empId<<endl;
        }
};

int main(){
    A a1;
    a1.displaySalary();

    B b1;
    b1.displayName();

    C c1;
    c1.displayEmpId();
    return 0;
}