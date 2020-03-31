#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    Animal()
    {

    }
    virtual void speak() = 0;
    virtual ~Animal()
    {

    }
};

// 创建动物
class Dog:public Animal
{
public:
    Dog(string name)
    {
        this->name = name;
    }
    virtual void speak()
    {
        cout << "小狗：" << name << ":汪汪汪" << endl;
    }

private:
    string name;
};

class Dark:public Animal
{
public:
    Dark(string name, string type)
    {
        this->name = name;
        this->type = type;
    }
    virtual void speak()
    {
        cout << type<< "品牌的小鸭"<< name << "嘎嘎嘎" << endl;
    }

private:
    string name;
    string type;
};

class Tiger:public Animal
{
public:
    Tiger(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    virtual void speak()
    {
        cout << age << "岁" << "老虎" << name << "嗷嗷嗷" << endl;
    }

private:
    string name;
    int age;
};


// 创建动物园
class Zoo
{
public:
    Zoo()
    {
        mCapacity = 1024;
        mSize = 0;
        this->p = new Animal*[mCapacity];
    }
    ~Zoo()
    {
        for (int i = 0; i < mSize; ++i) {
            if (p[i] != NULL)
            {
                delete p[i];
                p[i] = NULL;
            }
        }
        if (p != NULL)
            delete[] p;
        p = NULL;
    }

    // 增加动物
    int AddAnimal(Animal *animal)
    {
        if (mCapacity == mSize)
            return -1;
        this->p[mSize] = animal;
        mSize++;

        return 0;
    }

    void startSpeak()
    {
        for (int i = 0; i < mSize; ++i) {
            p[i]->speak();
        }
    }

private:
    Animal **p;
    int mCapacity;
    int mSize;
};

void test()
{
    Zoo *zoo = new Zoo;

    zoo->AddAnimal(new Dog("晋三"));
    zoo->AddAnimal(new Dark("可达鸭","脑子丢了"));
    zoo->AddAnimal(new Tiger("三胖", 18));

    zoo->startSpeak();

    delete zoo;
}

int main()
{
    test();
    return 0;
}