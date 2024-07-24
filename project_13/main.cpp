#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   char x;
   cin>>x;
   if(isdigit(x)){
    cout<<"IS DIGIT";
   }
   else if(islower(x)){
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL";
   }else{
       cout<<"ALPHA"<<endl;
       cout<<"IS CAPITAL";
   }

    return 0;
}
