/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is the program to check whether a array is sorted using recursion


#include <iostream>

using namespace std;
bool sortt(int a[],int n)
{
    if(n==0 || n==1)
    return true;
    
    if(a[0]>a[1]){
        return false;
    }
    else
    {
        bool t=sortt(a+1,n-1);
        return t;
    }
}

int main()
{
    int a[]={1,2,4,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    bool s=sortt(a,n);
    if(s)
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"not sorted";
    }

    return 0;
}
