#include <iostream>
using namespace std;

class rule
{
public:
    virtual double getNum(double a, double b) = 0;
};

class rule_jia:public rule
{
public:
    virtual double getNum(double a, double b)
    {
        return a+b;
    }
};

class rule_jian:public rule
{
public:
    virtual double getNum(double a, double b)
    {
        return a-b;
    }
};

class rule_cheng:public rule
{
public:
    virtual double getNum(double a, double b)
    {
        return a*b;
    }
};

class rule_chu:public rule
{
public:
    virtual double getNum(double a, double b)
    {
        return a/b;
    }
};

void test()
{
    rule *p = NULL;
    p = new rule_jia;
    cout <<"加：" << p->getNum(10,30) << endl;
    delete (rule_jia *)p;

    p = new rule_jian;
    cout <<"减：" << p->getNum(10,30) << endl;
    delete (rule_jian *)p;

    p = new rule_cheng;
    cout <<"乘：" << p->getNum(10,30) << endl;
    delete (rule_cheng*)p;

    p = new rule_chu;
    cout <<"除：" << p->getNum(10,30) << endl;
    delete (rule_chu *)p;

    p = NULL;
}

int main() {
    test();
    return 0;
}