#include<iostream>
using namespace std;

class Animal{
    private:
    string m_name;

    public:
    Animal(string name):m_name(name){ //This is by using constructor

    }
    
    //interface that has to be implemented in derived class
    virtual string MakeSound()=0;
    
    string GetName(){
        return m_name;
    }
};

class Dog:public Animal{

    public:
    //Forward the constructor arguments
    Dog(string name):Animal(name){

    }
    //Now we implement the interface
    string MakeSound() override{
        return "woof-woof";
    }
};


int main()
{
    Dog dog = Dog("Pitbull");//Since we had used constructor therefore we pass argument at creation of object.
    cout<<dog.GetName()<<" Barks "<<dog.MakeSound()<<endl;
}