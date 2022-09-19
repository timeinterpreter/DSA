#include<iostream>
using namespace std;

int z = 0;

int zeroes(int n) {

    if (n/10 == 0) {
        return -1;
    }

    if (n%10 == 0) {
       z++;
    }

    zeroes(n/10);
    return z;

}

int main()
{
    cout<<zeroes(10094)<<endl;

    return 0;
}