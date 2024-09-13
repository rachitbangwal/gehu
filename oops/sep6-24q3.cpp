#include<iostream>
using namespace std;

class tollBooth{
    private:
        unsigned int totalNoOfCars;
        double totalAmmountOfMoneyCollected;

    public:
        tollBooth(){
            this->totalNoOfCars=0;
            this->totalAmmountOfMoneyCollected=0;
        }

        void payingCar(){
            totalNoOfCars++;
            totalAmmountOfMoneyCollected+=0.5;
        }

        void nonPayCar(){
            totalNoOfCars++;
        }

        void display(){
            cout<<"Toatal Number of cars :=> "<<totalNoOfCars<<endl;
            cout<<"Toatal ammount of money collected :=> "<<totalAmmountOfMoneyCollected<<endl;
        }
};

int main(){
    tollBooth t1;
    char input;
    cout<<"enter 1 for paying car, 2 for non paying, 0 to display and ESC to exit !!"<<endl;
    cin>>input;
    while(input!='*'){
        cout<<"enter 1 for paying car, 2 for non paying, 0 to display and ESC to exit !!"<<endl;
        cin>>input;
        switch (input){
            case '1':
                t1.payingCar();
                continue;
            case '2':
                t1.nonPayCar();
                continue;
            case '0':
                t1.display();
                continue;
        }
    }
    return 0;
}