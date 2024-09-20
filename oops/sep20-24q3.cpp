/*Using the concept of operator overloading. Implement a program to overload the following:
with the help of friend function
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement*/

#include<iostream>
using namespace std;

class overload{
    private:
        int num;
    public:
        overload(int num){
            this->num=num;
        }
        //-----------------preincriment-------------------

        friend overload operator-(overload);
        friend overload operator--(overload);
        friend overload operator++(overload);

        //-----------------postincriment-------------------

        friend overload operator-(overload,int);
        friend overload operator--(overload,int);
        friend overload operator++(overload,int);

        void display(){
            cout<<num<<endl;
        }
};

overload operator-(overload o1){
	o1.num=-(o1.num);
    return o1;
}

overload operator--(overload o1){
    o1.num-=1;
    return o1;
}

overload operator++(overload o1){
	o1.num+=1;
    return o1;
}

//-----------------postincriment-------------------
overload operator-(overload o1, int a){
	o1.num=-(o1.num);
    return o1;
}
overload operator--(overload o1, int a){
    o1.num-=1;
    return o1;
}
overload operator++(overload o1, int a){
	o1.num+=1;
    return o1;
}

int main(){
    overload q1(9);
    
    //------------------preincriment-------------------

    cout<<"preincriment urinary - :=> ";
    q1=-(q1);
    q1.display();
    
    cout<<"preincriment urinary -- :=> ";
    q1=--(q1);
    q1.display();

    cout<<"preincriment urinary ++ :=> ";
    q1=++(q1);
    q1.display();

    //------------------postincriment-------------------
    cout<<endl;

    cout<<"postincriment urinary -- :=> ";
    q1=--(q1);
    q1.display();

    cout<<"postincriment urinary ++ :=> ";
    q1=++(q1);
    q1.display();

    return 0;
}