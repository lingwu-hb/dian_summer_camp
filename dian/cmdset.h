#pragma once
#include<iostream>
#include<string>
using namespace std;
class GitCmd{
private:
public:
    string FigName = "git";//命令默认以“git”开头
    string name;//“git”后接的命令（根据name的不同进行调用不同的成员函数）

    GitCmd(string A):name(A){};//构造函数
    ~GitCmd(){ cout << "命令执行完毕" << endl;};
    void Show();//打印命令的内容
};

