#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintVector(const vector<int> &vec)
{
    for (vector<int >::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << endl;
    }
    cout << endl;
}

void PrintRvector(vector<int> &vec)
{
    for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); ++it)
    {
        cout << *it << ' ' << endl;
    }
    cout << endl;
}

void test1()
{
    int d[] = {0,1,2,3,4,5,6,7,8};

    vector<int> a(d, d+sizeof(d)/ sizeof(int));
    PrintVector(a);
    PrintRvector(a);
}

int main() {
    test1();
    return 0;
}