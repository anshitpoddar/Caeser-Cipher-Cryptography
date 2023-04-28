#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int i,k,ch;
   string s,t;
    cout<<"!!!!! ENCRYPTION FUNC IN CEASER CIPHER METHOD !!!!!"<<endl;
    cout<<"YOU CAN CHOOSE ANY KEY OF YOUR LIKE PROVIDED K IN RAMGE OF [1,10] INCLUSIVELY !!!"<<endl;
    cout<<"DO YOU WANT TO ENCRYPT??"<<endl;
    cout<<"PLEASE ENTER YOUR CHOICE--"<<endl;
    cout<<"1. ENCRYPT THE PLAIN TEXT"<<endl;
    cout<<"2. DECRYPT THE CIPHER TEXT"<<endl;
    cout<<"CHOICE"<<endl;
    cin>>ch;
    if(ch==1) //the encryption part...
    {
       cout<<"PLEASE ENTER THE PLAIN TEXT"<<endl;
       cin>>s;
       cout<<"ENTER THE KEY PLEASE-"<<k<<endl;
       cin>>k;
       for(i=0;i<s.size();i++)
        {
         t+=(s[i]-'A'+k)%26+'A';
        }
       cout<<"THE ENCRYPTED CIPHER TEXT--"<<t<<endl;
    }

     else if(ch==2) //the decryption part...
     {
       cout<<"PLEASE ENTER THE CIPHER TEXT"<<endl;
       cin>>s;
       cout<<"ENTER THE KEY PLEASE-"<<k<<endl;
       cin>>k;
       for(i=0;i<s.size();i++)
        {
        t+=((s[i]-'A')-k)%26+'A';
        }
       cout<<"THE DECRYPTED CIPHER TEXT--"<<t<<endl;
     }

     else
        {
      cout<<"error"<<endl;
        }

    return 0;
}
