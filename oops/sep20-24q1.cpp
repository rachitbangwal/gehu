//Create a class Complex having two int type variable named real & img denoting real and imaginary part respectively of a complex number. Overload +, - , == operator to add, to subtract and to compare two complex numbers being denoted by the two complex type objects

#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;

    public:
        complex(){}
        complex(int real,  int img){
            this->real=real;
            this->img=img;
        }
        
        complex operator+(complex c1){
            complex c3;
            c3.img=c1.img+this->img;
            c3.real=c1.real+this->real;            
            return c3;
        }

        complex operator-(complex c1){
            complex c3;
            c3.img=c1.img-this->img;
            c3.real=c1.real-this->real;            
            return c3;
        }

        bool operator==(complex c1){
            complex c3;
            if(c1.img==img && c1.real==real){
                return true;
            }
            return false;
        }

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){
    complex c1(2,4);
    complex c2(4,2);
    complex c3;
    
    c3=c1+c2;
    c3.display();

    c3=c1-c2;
    c3.display();

    if(c1==c2){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
    return 0;
}