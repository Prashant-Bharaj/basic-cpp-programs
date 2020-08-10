#include<iostream>
using namespace std;

const int pi = 3.14;
const int x = 5;
// or #define Max 100;
//const memberFunction
class num
{
    public:
    
    void setData(int y)
    {
        cout<<y<<endl;
    }
};
int main()
{
    num n;
    n.setData(20);
    return 0;
}