#include<iostream>
using namespace std;

int all(int a[], int n, int k, int output[]) {
    if (n < 0 ) {
        return -1;
    }

    int ans = all(a+1, n-1, k, output);

    if (a[0] == x) {
        for (int i = 0; i < ans; i++)
        {
            a[i+1] = a[i];
        }
        
    }
}

int main()
{
    int arr[5] = {9,8,10,8,8};
    int output[5];
    all(arr,4,8,output);



    return 0;
}