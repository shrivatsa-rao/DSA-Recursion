/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is mergesort using recursion..

#include <bits/stdc++.h>

using namespace std;

void mergesort(vector<int>& a,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int>temp;
    
    while((left<=mid) &&(right<=high))
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }
    
    while(left<=mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    
    while(right<=high)
    {
        temp.push_back(a[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}

void merge(vector<int>& v,int low,int high)
{
    if(low>=high)
    return;
    
    int mid=(low+high)/2;
    
    merge(v,low,mid);
    merge(v,mid+1,high);
    
    mergesort(v,low,mid,high);
}

int main()
{
    vector<int> v={5,4,3,2,1};
    
    int n=5;
    int low=0;
    int high=n-1;
    merge(v,low,high);
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    return 0;
}
