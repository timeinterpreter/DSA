#include<iostream>
using namespace std;

bool check(int a[], int n, int x) {
    if (n == 0) {
        return false;
    }

    if (a[n] == x) {
        return true;
    }

    return check(a, n-1, x);
}

int main()
{
    int arr[5] = {1,2,5,8,9};
    cout<<check(arr, 5 ,1)<<endl;
    /*if (check(arr, 5, 2)) {
        cout<<"True"<<endl;
    }

    else
    {
        cout<<"False"<<endl;
    } */
    

    return 0;
}