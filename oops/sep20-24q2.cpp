/*Using the concept of operator overloading. Implement a program to overload the following:
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

        void operator-(){
            num=-(num);
        }

        void operator--(){
            num-=1;
        }

        void operator++(){
            num+=1;
        }

        //-----------------postincriment-------------------
        void operator-(int a){
            num=-(num);
        }

        void operator--(int a){
            num-=1;
        }

        void operator++(int a){
            num+=1;
        }

        void display(){
            cout<<num<<endl;
        }
};

int main(){
    overload q1(9);
    
    //------------------preincriment-------------------

    cout<<"preincriment urinary - :=> ";
    -q1;
    q1.display();
    
    cout<<"preincriment urinary -- :=> ";
    --q1;
    q1.display();

    cout<<"preincriment urinary ++ :=> ";
    ++q1;
    q1.display();

    //------------------postincriment-------------------
    cout<<endl;

    cout<<"postincriment urinary -- :=> ";
    q1--;
    q1.display();

    cout<<"postincriment urinary ++ :=> ";
    q1++;
    q1.display();

    return 0;
}