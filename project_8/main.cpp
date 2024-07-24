#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double b,a;
    double x,y,z;
    cin>>a>>b;
    x=floor(a/b);
    y=ceil(a/b);
    z=round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<x<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<y<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<z<<endl;

    return 0;
}
