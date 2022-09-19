#include<iostream>
using namespace std;

int sum_d(int n) {
    if (n/10 == 0) {
        return n;
    }

    return n%10 + sum_d(n/10);
}

int main()
{
    cout<<sum_d(10)<<endl;
    return 0;
}