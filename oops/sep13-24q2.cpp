#include<iostream>
using namespace std;

class savingAccount{
    private:
        int savingsBalance;
        int tosavingsBalance;

    public:
        void setBalance(int savingsBalance){
            this->savingsBalance=savingsBalance;
        }

        static int annualInterestRate;
        static void modifyInterestRate(int);

        void calculateMonthlyInterest(){
            tosavingsBalance=((savingsBalance*annualInterestRate)/12)+savingsBalance;
        }
        void display(){
            cout<<tosavingsBalance<<endl;
        }
};

int savingAccount::annualInterestRate=0;

void savingAccount::modifyInterestRate(int tmp){
    savingAccount::annualInterestRate=tmp;
}

int main(){
    savingAccount::modifyInterestRate(4);

    savingAccount s1;
    s1.setBalance(2000);
    s1.calculateMonthlyInterest();
    s1.display();

    savingAccount s2;
    s2.setBalance(3000);
    s2.calculateMonthlyInterest();
    s2.display();

    savingAccount::modifyInterestRate(5);

    s1.calculateMonthlyInterest();
    s1.display();

    s2.calculateMonthlyInterest();
    s2.display();

    return 0;
}
