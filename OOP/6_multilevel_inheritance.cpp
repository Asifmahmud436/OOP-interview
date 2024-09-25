#include <iostream>
#include <string>
using namespace std;

class GrandFather{
    protected:
        string grandfather_name;
    public:
        GrandFather(string grandfather_name){
            this->grandfather_name = grandfather_name;
        };
        void show_grandfather(){
            cout<<grandfather_name<<" is your grandpa."<<endl;
        };
};

class Father: public GrandFather{
    protected:
        string father_name;
    public:
        Father(string grandfather_name,string father_name): 
        GrandFather(grandfather_name){
            this->father_name = father_name;
        }
        void show_father(){
            cout<<father_name<<" is your father."<<endl;
        }
};

class Child: public Father{
    protected:
        string child_name;
    public:
        Child(string grandfather_name,string father_name,string child_name):
        Father(grandfather_name,father_name){
            this->child_name = child_name;
        }

        void show_name(){
            cout<<"Assalamu Alaikum, "<<child_name<<"."<<endl;
        }
};

int main(){
    Child obj1("John","Doe","Asif");
    obj1.show_name();    
    obj1.show_father();    
    obj1.show_grandfather();    
}
