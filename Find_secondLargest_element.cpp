#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int First_largestElement=arr[0];
    int Second_largestElement=arr[0];
    for(int i=0;i<9;i++)
    {
      if(arr[i]>First_largestElement)
      {
        First_largestElement=arr[i];
      }
    }
    for(int i=0;i<9;i++)
    {
        if(arr[i]!=First_largestElement)
        {
       if(arr[i]>Second_largestElement)
        {
            Second_largestElement=arr[i];
            //foundSecond=true;
        }
        }
        
      }
      cout<<"The second largest Number is found at: "<<Second_largestElement<<endl;
}