/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is program to check whether a string is palindrome or not

#include <bits/stdc++.h>

using namespace std;

bool pal(string& ans,int i,int j)
{
    if(i>j)
    return true;
    
    if(ans[i]!=ans[j])
    {
        return false;
    }
    else
    {
        i++;
        j--;
        pal(ans,i,j);
        return true;
        
    }
    
}

int main()
{
    string ans="abbbbbba";
    int n=ans.length();
    int i=0,j=n-1;
    bool h=pal(ans,i,j);
    cout<<h;

    return 0;
}
