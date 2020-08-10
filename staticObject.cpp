//Declaring static object remove garbage value of its data member and initialize then the value of Zero.

#include<iostream>
using namespace std;

class item
{
    int num;
    int count;
    public:
    void add()
    {
        num = num + 2;
        count = count + 2;
    }
    void disp()
    {
        cout<<num<<endl;
        cout<<count<<endl;
    }
};
int main()
{
    static item a;
    a.add();
    a.disp();
    return 0;
}

/*
output:
    2
    2
*/