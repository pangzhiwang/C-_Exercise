#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void MyPrint(int x)
{
    cout << x << endl;
}

void test()
{
    vector<int> arr;
    for (int i = 0; i < 10; ++i) {
        arr.push_back(i+1);
    }

    vector<int >::iterator begin = arr.begin();
    vector<int >::iterator end = arr.end();

    for_each(begin, end, MyPrint);
}

class Maker
{
public:
    string name;
    int age;
public:
    Maker(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

ostream &operator<<(ostream &out, Maker &m)
{
    cout << "姓名：" << m.name << "\t年龄：" << m.age << endl;
    return out;
}

void MyPrint01(Maker &m)
{
    cout << m;
}

void test01()
{
    vector<Maker> v;

    v.push_back(Maker("悟空", 18));
    v.push_back(Maker("小林", 19));
    v.push_back(Maker("贝吉塔", 25));
    v.push_back(Maker("龟仙人", 200));
    v.push_back(Maker("短笛", 180));

    vector<Maker>::iterator begin = v.begin();
    vector<Maker>::iterator end = v.end();

    /*while(begin != end)
    {
        cout<< (*begin);
        begin++;
    }*/

    for_each(begin, end, MyPrint01);
}

void test02()
{
    vector<Maker *> v;

    Maker *m1 = new Maker("关羽",12);
    Maker *m2 = new Maker("赵云",13);
    Maker *m3 = new Maker("马超",14);
    Maker *m4 = new Maker("黄忠",15);
    Maker *m5 = new Maker("张飞",16);

    v.push_back(m1);
    v.push_back(m2);
    v.push_back(m3);
    v.push_back(m4);
    v.push_back(m5);

    vector<Maker *>::iterator begin = v.begin();
    vector<Maker *>::iterator end = v.end();

    while(begin != end)
    {
        cout << "姓名：" << (*begin)->name << "\t年龄：" << (*begin)->age << endl;
        begin++;
    }
    delete m1;
    delete m2;
    delete m3;
    delete m4;
    delete m5;
}

void test03()
{
    vector<vector<int>> vs;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;

    for (int i = 0; i < 5; ++i) {
        v1.push_back(i + 10);
        v2.push_back(i + 10);
        v3.push_back(i + 10);
        v4.push_back(i + 10);
        v5.push_back(i + 10);
    }

    vs.push_back(v1);
    vs.push_back(v2);
    vs.push_back(v3);
    vs.push_back(v4);
    vs.push_back(v5);

    vector<vector<int>>::iterator begin = vs.begin();
    vector<vector<int>>::iterator end = vs.end();

    while(begin != end)
    {
        vector<int>::iterator sbegin = (*begin).begin();
        vector<int>::iterator send = (*begin).end();

        while(sbegin != send)
        {
            cout << *sbegin << " ";
            ++sbegin;
        }
        cout << endl;
        ++begin;
    }
}

int main() {
    //test();
    //test01();
    //test02();
    test03();
    return 0;
}