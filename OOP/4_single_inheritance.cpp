#include <iostream>
#include <string>
using namespace std;

class A{
    protected:
        string name;
    public:
        A(string name){
            this->name = name;
        }
        void display(){
            cout<<this->name<<endl;
        }
};

class B : public A{
    public:
        B(string name) : A(name){}
};

int main(){
    B obj("Asif");
    obj.display();
}