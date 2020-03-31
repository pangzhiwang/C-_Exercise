//#define PROTOBUF_USE_DLLS
#include <iostream>
#include <fstream>
#include "persion.pb.h"

using namespace std;

int main()
{
    // 创建persion对象，并初始化
    Persion p;
    p.set_id(1001);
    p.set_name("测试001");
    p.set_sex("男");
    p.set_age(26);
    // 将persion对象序列化
    string output;
    p.SerializeToString(&output);
    cout << "序列化后的结果: "<< output << endl;
    // 数据传输
    // 接收数据， 解析 -> 解码 -> 原始数据
    Persion pp;
    pp.ParseFromString(output);
    // 处理原始数据 -> 打印数据信息
    cout << "id: " << pp.id() <<"\tname: "<< pp.name()
        << "\tsex: "<< pp.sex() << "\tage" << pp.age() << endl;

    return 0;
}
