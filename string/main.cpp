#include <iostream>
#include <string>
using namespace std;

void test1()
{
    string s;
    string s1(10,'a');
    string s2("hello world");

    cout << s1 << endl;
}

int main() {
    test1();
    return 0;
}