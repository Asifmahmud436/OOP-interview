#include <iostream>
#include <string>
using namespace std;

class Calculator{
    public:
        int sum(int num1, int num2){
            return num1+num2;
        }

        int sum(int num1,int num2,int num3){
            return num1+num2+num3;
        }
};

// function overloading means 
// having the same name of the function 
// more than once with different tasks

int main(){
    Calculator cal;
    cout<<cal.sum(1,2)<<endl;
    cout<<cal.sum(1,2,3)<<endl;

    return 0;
}