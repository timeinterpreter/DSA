#include<iostream>
using namespace std;

bool is_sorted (int a[], int n) {
    if (n==0 || n==1) {
        return true;
    }

    if (a[0] > a[1]) {
        return false;
    }

    bool is_smallerSorted = is_sorted(a+1, n-1);
    return is_smallerSorted;
}

int main()
{
    int arr[5] = {1,2,5,8,9};
    int x = is_sorted(arr, 5);
    if (x) {
        cout<<"Array is sorted"<<endl;
    }
    else
        cout<<"Array is not sorted"<<endl;

    return 0;
}