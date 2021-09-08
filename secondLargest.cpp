//Second Largest in an array

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int secondLargest(int a[],int n,int l)
{
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[l])
        {
           if(res==-1)
           {
               res=i;
           }else if(a[i]>a[res])
           {
               res=i;
           }
        }
    }
    return res;
}
int largest(int a[],int n)
{
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[l])
        {
            l=i;
        }
    }
    return l;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   
   int l=largest(a,n);
   
   int sl=secondLargest(a,n,l);
    
    cout<<l<<" "<<sl;
    return 0;
}

