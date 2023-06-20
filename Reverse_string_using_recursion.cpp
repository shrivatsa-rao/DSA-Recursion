/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//This is a c++ program to do reverse string using recursion

#include <bits/stdc++.h>

using namespace std;
void rev(string &s,int i,int j)
{
    if(i>j)
    {
        return ;
    }
    
    swap(s[i],s[j]);
    i++;
    j--;
    rev(s,i,j);
}

int main()
{
   string s="helloramrajtej";
   int n=s.length();
   int i=0,j=n-1;
   rev(s,i,j);
   cout<<s;

    return 0;
}
