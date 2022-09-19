#include<iostream>
using namespace std;

int subs(string input, string output[]) {
    if (input.empty())  {
        output[0] = "";
        return 1;        
    }

    int small_size = subs(input.substr(1), output);
    for (int i = 0; i < small_size; i++)
    {
        output[i + small_size] = input[0] + output[i];
    }
    return 2 * small_size;
}


int main()
{
    string input, output[100];
    cin>>input;
    int size = subs(input, output);
    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<endl;
    }
    

    return 0;
}
