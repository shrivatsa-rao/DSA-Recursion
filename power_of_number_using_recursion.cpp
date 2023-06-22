/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//the power of number using recursion

#include <iostream>

using namespace std;
int power(int a,int b)
{
    if(b==0)
    return 1;
    
    if(b==1)
    return a;
    
    int ans=power(a,b/2);
    
    if(b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
}

int main()
{
    int a,b;
    a=2,b=4;
    int k=power(a,b);
    cout<<"the value of "<<a<<"power"<<b<<"is "<<k<<endl;

    return 0;
}
