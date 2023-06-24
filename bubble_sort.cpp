/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//This is bubble sort using recursion.


#include <iostream>

using namespace std;
void bubble(int a[],int n)
{
    if(n==0 || n==1)
    return ;
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    
    
    bubble(a,n-1);
    
}

int main()
{
   int a[]={5,2,4,1,0};
   int n=sizeof(a)/sizeof(a[0]);
   bubble(a,n);
   cout<<"the sorted array is"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}
