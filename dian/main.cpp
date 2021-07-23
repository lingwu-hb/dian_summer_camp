#include"cmdset.h"

int main(int argc, char** argv){
    GitCmd tmpCmd(argv[1]);//创建一个对应的命令类
    tmpCmd.Show();    
    return 0;
}
