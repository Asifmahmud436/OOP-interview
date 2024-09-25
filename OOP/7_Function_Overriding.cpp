#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        virtual void sound(){
            cout<<"I am a Random Animal!"<<endl;
        }
};

class Bird : public Animal{
    public:
        void sound() override{
            cout<<"I am a Bird.Chirp chip!"<<endl;
        }
};

class Cow : public Animal{
    public:
        void sound() override{
            cout<<"I am a cow.Moo!"<<endl;
        }
};

// here every class inherited the animal class and manipulated the sound function.
// This is an example of function overriding.

int main(){
    Animal* random = new Animal();
    Animal* cow = new Cow();
    Animal* bird = new Bird();

    random->sound();
    cow->sound();
    bird->sound();
}


