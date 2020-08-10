//nested class is the class define inside another class.

#include<iostream>
using namespace std;

class Enclosing
{
    public:
    class Nest
    {
        public:
        int a;
        void sum(int x, int y )
        {
            a = x + y;
        }
        void display()
        {
            cout<<"\nsum = "<<a<<endl;; 
        }
    };
};
int main()
{
    Enclosing::Nest ob;
    ob.sum(10, 20);
    ob.display();
    return 0;
}

/*
output:
    sum = 30
*/