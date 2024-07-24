#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double pi= 3.141592653;
    double r;
    cin>>r;
     cout << fixed << setprecision(9)<<pi*pow(r,2);
    return 0;
}
