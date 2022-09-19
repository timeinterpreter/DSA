#include<iostream>
using namespace std;

int mul(int m, int n) {
    if (n == 0) {
        return 0;
    }
    /*
    if (n == 1) {
        return m;
    }
    */
    return m + mul(m,n-1);
} 

int main()
{

    cout<<mul(4,0)<<endl;
    return 0;
}