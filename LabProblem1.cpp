#include<iostream>
using namespace std;
int main()
{
   int arr[]={11,20,30,40,50};
   int max=arr[0];
   int mini=arr[0];
   for(int i=2;i<5;i++)
   {
    if(arr[i]>max)
    max=arr[i];
    if(arr[i]<mini)
    mini=arr[i];
   }
   
  cout<<"Maximun:"<<max<<endl;
   cout<<"Minimum:"<<mini<<endl;
   if(max%2==0)
   cout<<max <<" is Even Number!"<<endl;
   else 
   cout<<max <<" is Odd Number!"<<endl;
   if(mini%2==0)
   cout<<mini <<" is Even Number!"<<endl;
   else 
   cout<<mini <<" is Odd Number!"<<endl;
   return 0;

}