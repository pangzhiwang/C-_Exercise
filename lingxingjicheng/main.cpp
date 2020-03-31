#include <iostream>
#include <string>

using namespace std;

class Drink
{
public:
    // 煮水
    virtual void Boil() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 倒入杯中
    virtual void PourInCup() = 0;
    // 添加辅料
    virtual void addSonm() = 0;

    // 模版方法，把调用的函数顺序确定下来
    void func()
    {
        Boil();
        Brew();
        PourInCup();
        addSonm();
    }
};

class Coffee : public Drink
{
public:
    // 煮水
    virtual void Boil()
    {
        cout << "咖啡：煮水..." << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "冲泡拿铁咖啡..." << endl;
    }
    // 倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入杯中..." << endl;
    }
    // 添加辅料
    virtual void addSonm()
    {
        cout << "加糖/奶..." << endl;
    }
};

class Tea:public Drink
{
public:
    // 煮水
    virtual void Boil()
    {
        cout << "茶：煮水..." << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "冲泡铁观音..." << endl;
    }
    // 倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入杯中..." << endl;
    }
    // 添加辅料
    virtual void addSonm()
    {
        cout << "加...为什么要加辅料？" << endl;
    }
};

void test()
{
    /*Drink *p = NULL;
    p = new Coffee;
    p->func();
    delete (Coffee *)p;

    p = new Tea;
    p->func();
    delete (Tea *)p;
    p = NULL;*/

    Tea a;
    a.func();

    Coffee b;
    b.func();
}

int main()
{
    test();

    return 0;
}