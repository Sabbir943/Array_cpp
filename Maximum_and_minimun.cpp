#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter your student's numbers : ";
    cin >> n;
    
    int a[n];
    
    cout << "Enter your marks : ";
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int max_marks = a[0];
    int min_marks = a[0];
    
    for(int i=1; i<n; i++)
    {
        if(a[i]>max_marks)
        {
            max_marks = a[i];
        }
        
        if(a[i]<min_marks)
        {
            min_marks = a[i];
        }
    }
    cout <<" Highest mark: " << max_marks << endl;
    cout <<" Lowest mark: " << min_marks << endl; 
    
    return 0;
}