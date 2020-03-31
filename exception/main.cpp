#include <iostream>
//#include <cstring>
#include <string>
#include <stdexcept>
using namespace std;

class MyOutOf:public exception
{
public:
    const char * mInfo;
public:
    MyOutOf(const char *errorInfo)
    {
        this->mInfo = errorInfo;
    }
    MyOutOf(const string errorInfo)
    {
        this->mInfo = errorInfo.c_str();
    }

    const char *what() const _NOEXCEPT
    {
        //const char * p = NULL;
        //memcpy(p,&this->mInfo)
        return this->mInfo;
    }
};

class Maker
{
public:
    int age;
public:
    Maker(int age)
    {
        if (age<0 || age>150)
        {
            throw MyOutOf("年龄超过限制(0~150)");
            //throw out_of_range("年龄超过限制(0~150)");
        }

        else
            this->age = age;
    }
};

void test()
{
    try {
        Maker m(200);
    }
    catch (MyOutOf &EX)
    {
        cout << EX.what() << endl;
    }
    catch (out_of_range &E)
    {
        cout << E.what() << endl;
    }
}

int main() {
    test();
    return 0;
}