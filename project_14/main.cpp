#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char x,y;
    cin>>x;
    if(isupper(x)){
        y=tolower(x);
        cout<<y;
    }else{
        y=toupper(x);
        cout<<y;
    }

    return 0;
}
