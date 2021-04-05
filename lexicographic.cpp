//#include<iostream>
//#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 string a,b;
cin>>a;
cin>>b;
transform(a.begin(),a.end(),a.begin(),::tolower);
transform(b.begin(),b.end(),b.begin(),::tolower);

int x=0;
x = a.compare(b);
if(x<0)
 cout<<"-1";
 else if(x == 0)
      cout<<"0";
      else
      cout<<"1";  
return 0;
}
     



