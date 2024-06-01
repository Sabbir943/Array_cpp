#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    int fl,sl,fs,ss;
    if(a[0]>a[1])
    {
        fl=a[0];
        sl=a[1];
        fs=a[1];
        ss=a[0];
    }
    else
    {
        fl=a[1];
        sl=a[0];
        fs=a[0];
        ss=a[1];

    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>fl)
        {
            sl=fl;
            fl=a[i];
        }
        else if(a[i]>sl&&a[i]!=fl)
        {
            sl=a[i];
        }
        
        if(a[i]<fs)
        {
            ss=fs;
            fs=a[i];
        }
        else if(a[i]<ss&&a[i]!=fs)
        {
            ss=a[i];
        }
    }
    cout<<"Second Largest: "<<sl<<endl;
    cout<<"Second Smallest: "<<ss<<endl;
}