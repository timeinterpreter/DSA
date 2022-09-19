#include<iostream>
using namespace std;
/*
int last_indx(int a[], int n, int k) {
    if (n < 0) {
        return -1;
    }

    if (a[n] == k) {
        return n;
    }

    int ans = last_indx(a,n-1,k);

    return ans;
}
*/

int last_indx(int a[], int n, int k) {
    if (n < 0) {
        return -1;
    }

    int ans = last_indx(a+1,n-1,k);

    if (a[0] == k ) {
        return 0;
    }

    else
        return -1;

    return ans;

}


int main()
{
    int arr[5] = {45, 11, 44, 11, 45};

    cout<<last_indx(arr, 4, 11);

    return 0;
}