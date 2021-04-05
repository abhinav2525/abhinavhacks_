#include<bits/stdc++.h>
using namespace std;
int main()
{   int b=0,c=0;
    string s;
    cin>>s;
    string a="hello";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[c]){
            c++;
            b++;
        }
    }
 
   if(b==5){
       cout<<"YES";}
       else
       {cout<<"NO";
   }
  return 0;
}
