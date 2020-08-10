#include<iostream>
using namespace std;

class number
{
};
int main()
{
    number ob;
    cout<<"\nSize of object = "<<sizeof(ob);
    cout<<"\nSize of class = "<<sizeof(number)<<endl;
    return 0;
}


/* Output 
    Size of object = 1
    Size of class = 1
*/