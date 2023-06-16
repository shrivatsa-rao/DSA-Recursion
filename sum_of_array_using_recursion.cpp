/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

///this is the program to find the total sum of the array using recursion

#include <iostream>

using namespace std;
int solve(int a[],int n)
{
    if(n==1)
    {
        return a[0];
    }
    
    int k=solve(a+1,n-1);
    int sum=a[0]+k;
    return sum;
}

int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int k=solve(a,n);
    cout<<"the total sum is\n"<<k;

    return 0;
}
