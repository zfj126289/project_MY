#include<iostream>
#include<string>
using namespace std;
int main()
{
    int k;
    int a[55];
    
    string cards[55]={"0","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13", \
                          "H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13", \
                          "C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13", \
                          "D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13", \
                          "J1","J2"};
    
   //string cards[6]={"0","S3","H5","C1","D13","J2"};
   string str[55];
    cin>>k;
    for(int i=1;i<55;i++)
        cin>>a[i];
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<55;j++)
        {
            str[a[j]]=cards[j];
        }
        for(int x=1;x<55;x++)
           cards[x]=str[x];
    }
    for(int i=1;i<55;i++)
    {
        if(i<54) cout<<cards[i]<<" ";
        else cout<<cards[i];
    }
    return 0;

}