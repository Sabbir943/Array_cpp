#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,45,89,34,90};
    int max_num=arr[0];
    int mini_num=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max_num)
        {
            max_num=arr[i];
        }
        if(arr[i]<mini_num)
        {
            mini_num=arr[i];
        }
    }
    cout<<"Maximum Number is: "<<max_num<<endl;
    cout<<"Minimum Number is: "<<mini_num<<endl;
    return 0;
}