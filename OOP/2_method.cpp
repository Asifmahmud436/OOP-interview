#include <iostream>
#include <string>
using namespace std;

class A{
    public:
        string display(){
            return "I am a Method";
        }
};

int main(){
    A obj1;
    cout<< obj1.display();
}
