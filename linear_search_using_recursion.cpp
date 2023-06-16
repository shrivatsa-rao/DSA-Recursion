/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is the linear search using recursion.

#include <iostream>

using namespace std;
bool solve(int a[],int n,int key)
{
    if(n==0)
    {
        return false;
    }
    
    if(a[0]==key)
    {
        return true;
    }
    else
    {
        bool z=solve(a+1,n-1,key);
        return z;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int key=10;
    int n=sizeof(a)/sizeof(a[0]);
    bool k=solve(a,n,key);
    if(k)
    {
        cout<<"element present";
    }
    else
    {
        cout<<"element not present";
    }

    return 0;
}
