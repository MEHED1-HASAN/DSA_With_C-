#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,k,sum=0,p=0;
   cin>>n>>k;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]>0)
        p=p+1;

   }
   if(p==0)
    cout<<0<<endl;
   else
   {

     for(i=0;i<n;i++)
     {
         if(a[i]>=a[k-1] && a[i]!=0)
            sum=sum+1;
     }
     cout<<sum<<endl;
}
}
