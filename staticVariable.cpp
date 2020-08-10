/*In static variable, only one memory space is allocated for all objects.*/
#include<iostream>
using namespace std;

class item
{
    int num;
    static int count;
    public:
    void get_data(int n)
    {
        num = n;
        ++num;
        ++count;
    }
    void disp()
    {
        cout<<"\nnumber = "<<num;
        cout<<"\ncount = "<<count<<endl;
    }
};
int item::count;
int main()
{
    item a, b, c;
    a.get_data(0);
    b.get_data(0);
    c.get_data(0);
    a.disp();
    b.disp();
    c.disp();
    return 0;
}

/*
output:
number = 1
count = 3

number = 1
count = 3

number = 1
count = 3
*/