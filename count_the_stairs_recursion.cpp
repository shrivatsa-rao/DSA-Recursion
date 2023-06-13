/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//You are climbing a staircase that has n steps. 
//You can take either 1 or 2 steps at a time. 
//Count the number of distinct ways to reach the top of the staircase.
#include <iostream>

using namespace std;

int fcount(int n)
{
    int c;
    //if the step is below ground then it as zero itself.
    if(n<0)
    return 0;
    
    
    //if the step is in the starting position then take the count as 1.
    if(n==0)
    return 1;
    
    ///if the person wants to climb for one step or two step then
    c=fcount(n-1)+fcount(n-2);
    
    return c;
    
    
}

int main()
{   
    //n tells destination
    
    int n=5;
    int nways=fcount(n);
    cout<<"the number of ways to reach the top of staircase is"<<nways<<endl;

    return 0;
}
