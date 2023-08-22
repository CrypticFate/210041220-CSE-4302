#include<iostream>
using namespace std;
class Counter{
    private:
        int count;
        int increment_step;
   
    public:
        void setIncrementStep(int step_val){
            increment_step=step_val;
        }
        int getCount(){
            return count;
        }
        void increment(){
            count+=increment_step;
        }
        void resetCount(){
            count=0;
        }
        bool isEven(){
            if(count%2==0) return true; 
            else return false;
        }
};
int main(){
    Counter counter1;
    counter1.resetCount();
    counter1.setIncrementStep(5);

    counter1.increment();
    counter1.increment();

    cout<<"Current count :"<<counter1.getCount()<<endl;
    if(counter1.isEven()) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;

    counter1.resetCount();
    cout<<"Current count after reset :"<<counter1.getCount()<<endl;
}