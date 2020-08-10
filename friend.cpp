#include<iostream>
using namespace std;

class sample
{
    int a;
    int b;
    public:
    void setData(int x, int y);
    friend void add(sample);
};
void sample::setData(int x, int y)
{
    a = x;
    b = y;
}
void add(sample s)
{
    int sum = s.a + s.b;
    cout<<"\nsum = "<<sum<<endl;
}
int main()
{
    sample s1, s2;
    s1.setData(2, 3);
    s2.setData(5, 6);
    add(s1);
    return 0;
}

/*
output:
    sum = 5
*/