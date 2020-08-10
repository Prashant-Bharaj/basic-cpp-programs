#include<iostream>
using namespace std;

#define PETROL 1
#define DISEL 2
#define TWO_WH 3
#define FOUR_WH 4

class Vechile
{
    unsigned type : 3;
    unsigned Fuel : 24;
    public:
    void show()
    {
        cout<<"\ntype of vehicle :"<<type;
        cout<<"\nfuel : "<<Fuel<<endl;
    }
    Vechile()
    {
        type = FOUR_WH;
        Fuel = PETROL;
    }
};
int main()
{
    Vechile V;
    cout<<"\nsize of Vehicle :"<<sizeof(V);
    V.show();
    return 0;
}