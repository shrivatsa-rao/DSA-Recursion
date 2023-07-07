/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//quick sort program using recursion


#include <bits/stdc++.h>

using namespace std;

int part(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(a[i]<=pivot && i<=high-1)
        {
            i++;
        }
        
        while(a[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    
    swap(a[low],a[j]);
    return j;
    
}


void qs(int a[],int low,int high)
{
    if(low<high)
    {
        int p=part(a,low,high);
        qs(a,low,p-1);
        qs(a,p+1,high);
    }
}

int main()
{
    int a[]={4, 6, 2, 5, 7, 9, 1, 3};
    int n=8;
    int low=0;
    int high=n-1;
    qs(a,low,high);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}


