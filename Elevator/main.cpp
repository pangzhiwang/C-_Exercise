#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <list>
using namespace std;

class Student
{
public:
    string name;
};

// 创建人员
void CreateStudent(queue<Student> &que, int num)
{
    string setName = "ABCDEFGHIJKLMN";
    int sum = rand()%10;

    for (int i = 0; i < sum; ++i) {
        Student stu;
        char buf[64] = {0};
        sprintf(buf,"%d", num);
        string s(buf);

        stu.name = "第";
        stu.name += s;
        stu.name += "层";
        stu.name += setName[i];

        // 将每层人员放入到队列中
        que.push(stu);
    }
}

// 进电梯操作
void PushList(list<Student> &myList, queue<Student> &que, vector<Student> &pushV)
{
    int tmpPush = 0; // 临时变量， 记录进电梯人数
    while(!que.empty())
    {
        if(myList.size()>=15)  // 电梯满了
            break;

        Student s = que.front();
    }
}

int main() {

    return 0;
}