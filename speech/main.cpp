#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <string>
#include <deque>
#include <queue>
#include <ctime>
#include <numeric>
using namespace std;

class Player
{
public:
    string name;
    int age;
    int mScore[3];
};

// 创建选手信息
void CreatePlayer(vector<int> &vec, map<int,Player> &mList)
{
    string setName = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 24; ++i) {
        Player p;
        p.name = "选手";
        p.name += setName[i];
        p.age = 20;
        for (int j = 0; j < 3; ++j) {
            p.mScore[j] = 0;
        }
        int ID = 100+i;
        vec.push_back(ID);
        mList.insert(make_pair(ID,p));
    }
}

// 抽签
void PlayerByRandom(vector<int> &vec)
{
    random_shuffle(vec.begin(),vec.end());
}

// 比赛
void StartMatch(int index, vector<int> &v1, map<int, Player> &mList, vector<int> &v2)
{
    // 保存小组得分情况
    multimap<int, int, greater<int>> mGroups;
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    {
        // 保存分数
        deque<int> dScore;
        // 评委打分
        for (int i = 0; i < 10; ++i) {
            int score = rand()%50 + 50;
            dScore.push_back(score);
        }
        // 排序
        sort(dScore.begin(),dScore.end());
        // 去掉最低分
        dScore.pop_front();
        // 去掉最高分
        dScore.pop_back();
        // 求得分总和
        int toScore = accumulate(dScore.begin(),dScore.end(),0);
        // 求平均分
        int avgScore = toScore/dScore.size();

        // 记录参赛选手得分
        mList[*it].mScore[index-1] = avgScore;

        // 记录小组参赛选手
        mGroups.insert(make_pair(avgScore,*it));

        if(mGroups.size() == 6)
        {
            int cnt = 0;
            for(multimap<int,int,greater<int>>::iterator it = mGroups.begin(); it!=mGroups.end() && cnt<3;++cnt,++it)
            {
                v2.push_back(it->second);
            }
            mGroups.clear();
        }
    }
}

// 打印本轮晋级选手名单
void ShowPlayerScore(int index, vector<int> &v, map<int, Player> &mList)
{
    cout<<"第"<<index << "轮晋级名单:"<<endl;
    for(vector<int>::iterator it = v.begin(); it!=v.end();++it)
    {
        cout<<"姓名："<<mList[*it].name<<"\t年龄："<<mList[*it].age<<"\t分数："<<mList[*it].mScore[index-1]<<endl;
    }
}

void test()
{
    srand((unsigned int)time(NULL));
    // 保存选手编号
    vector<int> v;
    // 保存选手信息
    map<int,Player> mlist;
    // 保存第一轮晋级选手编号
    vector<int> v1;
    // 保存第二轮晋级选手编号
    vector<int> v2;
    // 保存第二轮晋级选手编号
    vector<int> v3;

    // 创建选手
    CreatePlayer(v,mlist);

    // 第一轮抽签
    PlayerByRandom(v);
    // 第一轮比赛
    StartMatch(1,v,mlist,v1);
    // 打印第一轮晋级选手信息
    ShowPlayerScore(1,v1,mlist);

    // 第二轮抽签
    PlayerByRandom(v1);
    // 第二轮比赛
    StartMatch(2,v1,mlist,v2);
    // 打印第二轮晋级选手信息
    ShowPlayerScore(2,v2,mlist);

    // 第三轮抽签
    PlayerByRandom(v2);
    // 第三轮比赛
    StartMatch(3,v2,mlist,v3);
    // 打印第三轮晋级选手信息
    ShowPlayerScore(3,v3,mlist);

}

int main() {
    test();
    return 0;
}