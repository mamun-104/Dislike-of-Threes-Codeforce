#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    int k,i,tmp=0;
    while(t--)
    {
        cin>>k;
        tmp=k;
        for(i=1;tmp;i++)
        {
            if(i%3==0 || i%10==3) {}
            else {tmp--;}
            if(tmp==0){cout<<i<<"\n"; break;}
        }
    }




    return 0;
}



