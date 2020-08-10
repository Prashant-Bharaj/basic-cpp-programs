/*if we don't override pure virtual function in the derived then derived class also become abstract class*/
/*
#include<iostream>
using namespace std;

class Test
{
    public:
    virtual void show() = 0;
};
class Derived:public Test
{
};
int main()
{
    Derived D;
    D.show();
    return 0;
}

This program will give an error
that we can't instantiate abstract class
*/

#include<iostream>
using namespace std;

class Test
{
    public:
    virtual void show() = 0;
};
class Derived : public Test
{
    public:
    void show()
    {
        cout<<"\nshow function called "<<endl;
    }
};
int main()
{
    Derived D;
    D.show();
    return 0;
}

/*
output:
show function called 
*/