#include<iostream>
using namespace std;

int bs(int a[], int n, int x)   {
    int s = 0, e = n-1, mid;
    if (s <= e) {
        mid = s + (e-1)/2;
        if (a[mid] == x) {
            return mid;
        }
        else if (a[mid] > x)
        {
            bs(a, )
        }
        
    }
}

int main()
{
    int size, ele;
    cout<<"Enter size : "<<endl;
    cin>>size;
    int arr[n];
    cout<<"Input array elements : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>a[i]
    }
    cout<<"Enter element to be found : "<<endl;
    cin>>ele;
    bs(arr, size, ele);



    return 0;
}