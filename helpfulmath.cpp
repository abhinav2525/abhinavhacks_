//#include<iostream>
//#include<string>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{   string a;int b=0,c;
     vector<int> arr;
     cin>>a;
    for(int i=0;i<a.length();i++){
       if(isdigit(a[i]))
       {
            arr.push_back((int)a[i]-48);
             b++;
       }
   
}
    sort(arr.begin(), arr.end());
    for(int i=0;i<arr.size();i++){ 
    cout<<arr[i];
    if(i!=b-1){cout<<"+";}
   }
       return 0;
}

