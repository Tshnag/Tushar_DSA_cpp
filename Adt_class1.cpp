//Simple Class

#include<iostream>
using namespace std;

class Animal{
    private:
    string m_name;

    public:
    void GiveName(string name){
        m_name = name;
    }
    string GetName(){
        return m_name;
    }
};

int main()
{
    Animal dog = Animal();// Animal(); means assigning animal class feature to dog object.
    dog.GiveName("Doggo");
    cout<<"Hello, I'm "<<dog.GetName()<<endl;
    return 0;
}