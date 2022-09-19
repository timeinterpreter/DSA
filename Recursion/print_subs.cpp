#include<iostream>
using namespace std;

 void print(string input, string output) {
    if (input.length() == 0) {
        cout<<output<<endl;
        return;
    }

    print(input.substr(1) , output);
    print(input.substr(1) , output + input[0]);
}
 
int main()
{
    string input, output = "";
    cin>>input;
     
    print(input, output);

    return 0;
}