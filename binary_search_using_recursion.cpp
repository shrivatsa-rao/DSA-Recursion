/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//binary seacrh using recursion
#include <iostream>

using namespace std;

bool binary(int a[],int l,int r,int k)
{
    
     if(l>r)
     {
        return false;
     }
    int mid=l+(r-l)/2;
    
    if(a[mid]==k)
        return true;
        
    if(a[mid]<k)
    {
        return binary(a,mid+1,r,k);
    }
    else
    {
        return  binary(a,l,mid-1,k);
    }
        
}

int main()
{
      int a[]={1,2,3,4,5};
      int n=sizeof(a)/sizeof(a[0]);
      int k=12;
      int l=0;
      int r=n-1;
      bool m;
      m= binary(a,l,r,k);
      if(m)
      {
          cout<<"present\n";
      }
      else
      {
          cout<<"not present\n";
      }

  

    return 0;
}

