#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double pi=3.141592653;
    double r;
    double area;
    cin>>r;
    area=pi*pow(r,2);
    cout<<fixed<<setprecision(9)<<area;

    return 0;
}
