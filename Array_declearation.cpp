#include<iostream>
#include <iomanip>
#include <ios>
using namespace std;
int main()
{
   int  arr1[]={1,2,3,4,5},arr2[]={10,20,30,40},sum=0;
   float avg;
   int size1=sizeof(arr1)/sizeof(arr1[0]);
   int size2=sizeof(arr2)/sizeof(arr2[0]);
   cout<<"Size of first array: "<<size1<<endl;
   cout<<"Size of second array: "<<size2<<endl;
   for(int i=0;i<size1;i++)
   {
    cout<<arr1[i]<<" ";
    sum=sum+arr1[i];
    avg=(float)sum/size1;

   }
   cout<<endl;
   cout<<sum<<endl;
   
   cout<<avg<<setprecision(3)<<endl;
   for(int i=0;i<size2;i++)
   {
    cout<<arr2[i]<<" ";
    sum=sum+arr2[i];
    avg=(float)sum/size2;
   }
   cout<<endl;
   cout<<sum<<endl;
   cout<<avg<<setprecision(4)<<endl;
   }