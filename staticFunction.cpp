/*static member Function
    1. A static function can have access to only other static member \
       declared in same class.
    2. static member function can be called using class name.
    3. They can be called with or without object.
*/
#include<iostream>
using namespace std;

class item
{
    int num;
    static int count;
    public:
    void getNum(int n)
    {
        num = n;
        cout<<num<<endl;
    }
    static void getCount(int c)
    {
        count = c;
        cout<<c<<endl;
    }
};
int item::count;
int main()
{
    item::getCount(4);   //calling static function with class
    item obj;
    obj.getNum(10);
    obj.getCount(20);
    return 0;
}

/*
output:
    4
    10
    20
*/