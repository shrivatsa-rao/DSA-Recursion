/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is the program to print numbers in words using recursion

#include <bits/stdc++.h>

using namespace std;
void fun(string a[],int num)
{
    if(num==0)
    return;
    
    int rem=num%10;
    num=num/10;
    
    fun(a,num);
    
    cout<<a[rem]<<endl;
}

int main()
{
    string a[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    int num=500;
    fun(a,num);

    return 0;
}
