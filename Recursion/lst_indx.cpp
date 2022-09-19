#include<iostream>
using namespace std;

int lst_idx(int a[], int n, int x ) {
    if (n < 0) {
        return -1;
    }

    int ans = lst_idx(a+1, n-1, x);

    if (ans == -1) {
        if (a[0] == x) {
            return 0;
        }
        else {
            return -1;
        }
    }

    return ans+1;
}

int main()
{
    int arr[5] = {45, 11, 44, 11, 45};

    cout<<lst_idx(arr, 5, 45);

    return 0;
}