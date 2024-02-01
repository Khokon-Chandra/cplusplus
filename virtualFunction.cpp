#include <iostream>
using namespace std;

// Your code goes here
class Animal
{

public:
    Animal(int a)
    {
        age = a;
    }
    virtual void Eat()
    {
        cout << "Animal eats food" << endl;
    }

    virtual int get_Age()
    {
        return age;
    }

protected:
    int age;
};

class Dog : public Animal
{
public:
    Dog(int a=0): Animal(a){}
    
    void Eat()
    {
        cout << "Dog eats meat" << endl;
    }

    int get_Age()
    {
        return age;
    }
};

class Cat : public Animal
{
public:
    Cat(int a=0): Animal(a){}
    
    void Eat()
    {
        cout << "Cat eats meat" << endl;
    }

    int get_Age()
    {
        return age;
    }
};

int main()
{
    Animal *a;
    Dog dg(8); // making object of child class Dog
    Cat ct(3); // making object of child class Cat

    a = &dg;
    a->Eat();
    cout << "Dog's age is: " << a->get_Age() << endl;
    a = &ct;
    a->Eat();
    cout << "Cat's age is: " << a->get_Age() << endl;
    return 0;
}
