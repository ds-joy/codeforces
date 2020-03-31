#include <bits/stdc++.h>
using namespace std;

main()
{
     int n,l,e,L,R,i;
     cin>>n;
     int a[n],r=n-1;
     for(i=0;i<n;i++)
      cin>>a[i];
     string s;
     while(l<=r)
        {
              L=a[l];R=a[r];
              e=L>e?R>e?L<R?L:R:L:R>e?R:0;
              if(!e)break;
              if(L==e)l++;else r--;
              s+=e==L?'L':'R';
     }
     cout<<s.size()<<endl<<s;
      int n,l,e,L,R,i;
     cin>>n;
     int a[n],r=n-1;
     for(i=0;i<n;i++)
      cin>>a[i];
       int n,l,e,L,R,i;
     cin>>n;
     int a[n],r=n-1;
     for(i=0;i<n;i++)
      cin>>a[i];
       int n,l,e,L,R,i;
     cin>>n;
     int a[n],r=n-1;
     for(i=0;i<n;i++)
      cin>>a[i];
}
