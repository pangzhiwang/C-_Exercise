/*
 * 单例模式
 * 1.无参构造函数和拷贝构造函数私有化
 * 2.定义一个类内私有的静态成员指针变量
 * 3.在类外初始化时 new 一个对象
 * 4.提供一个静态成员函数，以便类外获取静态成员指针变量
 */
#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
    // 获取静态成员指针变量
    static Printer *getPrinter()
    {
        return pPrinter;
    }
    // 打印并记录打印次数
    void printPrinter(string name)
    {
        cout << name << ":打印..." << endl;
        count++;
    }
    // 获取打印次数
    int getCount()
    {
        return count;
    }
// 构造函数私有化
private:
    Printer()
    {
        count = 0;
    }
    Printer(const Printer &p)
    {

    }

private:
    // 记录打印次数
    int count;
    // 静态成员指针变量

    static Printer *pPrinter;
};

int main() {
    // 销售
    Printer *p1 = Printer::getPrinter()

    // 技术

    // 公关

    // 打印次数

    return 0;
}