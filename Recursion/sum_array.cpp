#include<iostream>
using namespace std;

int sum(int a[], int n) {
    if (n==0) {
        return a[n];
    }

    return a[n] + sum(a,n-1);
}

int main()
{
    int arr[5] = {1,2,5,8,9};
    cout<<sum(arr, 4)<<endl;

    return 0;
}