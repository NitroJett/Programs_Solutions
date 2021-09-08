//optimised secondLargest

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

//optimised secondLargest

int secondLargest(int a[],int n)
{
   int res=-1,largest=0;
   for(int i=1;i<n;i++)
   {
    if(a[i]>a[largest])
    {
    res=largest;
    largest=i;
    }
   else if(a[i]!=a[largest])
    {
    if(res==-1 ||a[i]>a[res])
     res=i;
    }
  }
  return res;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   
   int sl=secondLargest(a,n);
    
    cout<<sl;
    return 0;
}

