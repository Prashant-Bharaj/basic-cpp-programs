//When we make class inside a function
//A local class is the class that is declared inside the function

#include<iostream>
using namespace std;

int x;
void fun(int a)
{
    x= a;
    class Test
    {
        public:
        void display()
        {
            cout<<endl<<x<<endl;
        }
    }t;
    t.display();
}
int main()
{
    fun(2);
    return 0;
}

/*
output:
    2
*/