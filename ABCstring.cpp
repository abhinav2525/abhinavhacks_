#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
int n=0;char a[1000][50],d;
cin>>n;
vector <char> s;
if((n>=1)&&(n<=1000)){
 
for(int i=1;i<=n;i++){
   cin>>a[i];
   if((strlen(a[i])>=2)&&(strlen(a[i])<=50)){
    continue;
    }
   else
    {
    exit(0);
    }
 }
}

else{
exit(0);
}
for(int i=1;i<=n;i++){
 for(int j=0;j<=strlen(a[i]);j++){
   if((a[i][j]=='A')||(a[i][j]=='C'))
        {  d=a[i][j];
         s.push_back(d);
        }
        else if((a[i][j]=='B'))
        {
         s.pop_back();
        }
}
   if(s.size()==0)
     { 
       cout<<"YES"<<endl;
     }
    else if(s.size()>0) {
       cout<<"NO-"<<endl;
      }
  
 s.clear();
 } 
return 0;
} 
