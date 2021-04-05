//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int a[101],n,c;
cin>>n;
for(int i=1;i<n+1;i++)
{ cin>>c;
   a[c]=i;
}
 for(int i=1;i<n+1;i++)
  cout<<a[i]<<"\t";

return 0;
}
