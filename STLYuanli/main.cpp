#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyArray
{
public:
    T* p;
    int mCapacity;
    int mSize;

public:
    typedef T* iterator;
    MyArray()
    {
        mCapacity = 10;
        mSize = 10;
        p = new T[mCapacity];
        for (int i = 0; i < mCapacity; ++i) {
            p[i] = i+1;
        }
    }

    T* Begin()
    {
        return p;
    }

    T* End()
    {
        return p+mSize;
    }
};

template <class T>
void MyPrint(T begin, T end)
{
    for (; begin != end ; ++begin) {
        cout << *begin << endl;
    }
}

void test()
{
    MyArray<int> arr;
    MyArray<int >::iterator begin = arr.Begin();
    MyArray<int >::iterator end = arr.End();

    MyPrint(begin, end);
}

int main() {
    test();
    return 0;
}