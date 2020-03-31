#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
using namespace std;

class Student
{
public:
    string name;
    int mScore;
};

// 创建学生
void CreateStudent(vector<Student> &vstu)
{
    string str = "ABCDE";
    for (int i = 0; i < 5; ++i) {
        // 创建学生信息
        Student stu;
        stu.name = "学生";
        stu.name += str.at(i);
        stu.mScore = 0;

        vstu.push_back(stu);
    }
}

// 打分
void SetScore(vector<Student> &vstu)
{
    srand((unsigned int)time(NULL));

    for(vector<Student>::iterator it = vstu.begin(); it != vstu.end(); ++it)
    {
        deque<int> dScore;
        for (int i = 0; i < 10; ++i) {
            int score = rand()%70 +30;
            dScore.push_back(score);
        }
        sort(dScore.begin(),dScore.end());
        dScore.pop_front();
        dScore.pop_back();

        int total = 0;
        for (deque<int>::const_iterator dit = dScore.begin(); dit != dScore.end(); ++dit)
        {
            total += *dit;
        }

        int ageScore = total/dScore.size();

        it->mScore = ageScore;
    }
}

bool myComapre(Student &s1, Student &s2)
{
    return s1.mScore > s2.mScore;
}

// 打印排名
void ShowStudentScore(vector<Student> &vstu)
{
    sort(vstu.begin(), vstu.end(), myComapre);
    for (vector<Student>::const_iterator it = vstu.begin(); it != vstu.end(); ++it)
    {
        cout << "姓名：" << it->name << "\t分数：" << it->mScore << endl;
    }
}

int main() {
    vector<Student> vstu;

    CreateStudent(vstu);
    SetScore(vstu);
    ShowStudentScore(vstu);

    return 0;
}