#include<iostream>
using namespace std;

bool search(int a[], int n, int k) {
    if (n < 0)  {
        return false;
    }
    
    if (a[n] == k) {
        return true;
    }

    return search(a,n-1,k);
}

int main()
{
    int arr[5] = {1,2,5,8,9};
    cout<<search(arr,5,2)<<endl;

    return 0;
}