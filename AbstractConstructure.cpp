#include<iostream>
using namespace std;

class Test
{
    public :
    int x;
    Test(int i){x = i;}
    virtual void show() = 0;
};
class Derived : public Test
{
    int y;
    public:
    Derived(int i, int j):
    Test(i){y = j;}
    void show()
    {
        cout<<"\nx = "<<x<<" j = "<<y;
    }
};
int main()
{
    Derived D(2,4);
    D.show();
    return 0;
}
