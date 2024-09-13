#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int seconds;
    
    public:
        Time(){
            hour=0;
            minute=0;
            seconds=0;
        }

        Time(int hour, int minute, int seconds){
            this->hour=hour;
            this->minute=minute;
            this->seconds=seconds;
        }

        Time add(Time t2){
            Time t3;
            t3.seconds=this->seconds+t2.seconds;
            t3.minute=this->minute+t2.minute;
            t3.hour=this->hour+t2.hour;

            while(t3.seconds>=60){
                t3.minute+=t3.seconds/60;
                t3.seconds=t3.seconds%60;
            }

            while(t3.minute>=60){
                t3.hour+=t3.minute/60;
                t3.minute=t3.minute%60;
            }
            return t3;
        }
        void show(){
            cout<<hour<<":"<<minute<<":"<<seconds;
        }
};

int main(){
    Time t1(13,43,62);
    Time t2(11,42,63);
    Time t3;
    t3=t1.add(t2);
    t3.show();
    return 0;
}