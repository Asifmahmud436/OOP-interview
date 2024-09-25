#include <iostream>
#include <string>
using namespace std;

class Father{
    protected:
        string father_name;
    public:
        Father(string father_name){
            this->father_name = father_name;
        }

        string show_father(){
            return "Fathers' name: " + father_name;
        }
};

class Mother{
    protected:
        string mother_name;
    public:
        Mother(string mother_name){
            this->mother_name = mother_name;
        }
        string show_mother(){
            return "Mothers' name: " + mother_name;
        };
};

class Child: public Father,public Mother{
    private:
        string child_name;
    public:
        Child(string father_name,string mother_name,string child_name):
        Father(father_name),Mother(mother_name){
            this->child_name = child_name;
        }

        string show_child(){
            return "Childs' name: " + child_name;
        }
};

int main(){
    Child obj1("John","Stephany","Asif"); 
    
    cout<< obj1.show_child() << endl;
    cout<< obj1.show_father() << endl;
    cout<< obj1.show_mother() << endl;
}