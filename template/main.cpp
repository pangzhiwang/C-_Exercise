#include <iostream>
#include <string>

using namespace std;

template <class T>  // 创建模板函数
void testTemp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// 排序
template <class T>
void testSort(T a[], int len)
{
    for (int i = 0; i < len-1; ++i) {
        int max = i;
        for (int j = i+1; j < len; ++j) {
            if (a[max] > a[j])
                max = j;
        }

        if(max != i)
            testTemp(a[max], a[i]);
    }
}

template <class T>
void testPrint(T a[], int len)
{
    for (int i = 0; i < len; ++i) {
        cout << a[i] << endl;
    }
}

void test()
{
    int a[5] = {3,6,2,8,5};
    testSort(a, 5);
    testPrint(a, 5);
}

int main() {
    test();
    return 0;
}
