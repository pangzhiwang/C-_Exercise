#include <iostream>
#include <string>
using namespace std;

class Manito
{
public:
    virtual void show() = 0;
};

class Maker:public Manito
{
public:
    Maker(string name, int age, string sex, string Skill)
    {
        this->name = name;
        this->age = age;
        this->sex = sex;
        this->Skill = Skill;
    }

    virtual void show()
    {
        cout << name << "展现" << Skill << endl;
    }

private:
    string name;
    int age;
    string sex;
    string Skill;
};

class Maker2:public Manito
{
public:
    Maker2(string name, int age, string sex, string Skill)
    {
        this->name = name;
        this->age = age;
        this->sex = sex;
        this->Skill = Skill;
    }
    virtual void show()
    {
        cout << name << "展现" << Skill << endl;
    }
private:
    string name;
    int age;
    string sex;
    string Skill;
};

class myClass
{
public:
    myClass()
    {
        mCapacity = 50;
        mSize = 0;
        p = new Manito*[mCapacity];
    }
    void addManito(Manito *ma)
    {
        if (mCapacity == mSize)
            return ;
        p[mSize] = ma;
        mSize++;
    }
    void startShow()
    {
        for (int i = 0; i < mSize; ++i) {
            p[i]->show();
        }
    }
    ~myClass()
    {
        for (int i = 0; i < mSize; ++i) {
            if(p[i] != NULL)
            {
                delete p[i];
                p[i] = NULL;
            }
            delete[] p;
            p=NULL;
        }
    }

private:
    Manito* *p;
    int mCapacity;
    int mSize;
};

void test()
{
    myClass *my = new myClass;
    my->addManito(new Maker("Maker", 18, "男", "跳舞"));
    my->addManito(new Maker2("Maker2", 16, "女", "唱歌"));
    my->startShow();

    delete my;
}

int main() {
    test();
    return 0;
}