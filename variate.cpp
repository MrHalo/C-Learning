
#include <iostream>
using namespace std;
/*
    变量
*/

/*
    常量的定义方式
    1.#define 宏常量
    2.const修饰的变量
*/

//1.#define 宏常量
#define Day 7
int main()
{
    // 变量创建的语法：数据类型 变量名 = 变量初始值；
    int a = 10;

    cout <<"a = " << a << endl;

    cout << "一周总共有" << Day << "天"<< endl;
    // 2.const修饰的变量
    const int b = 12;
    cout << "一年总共有" << b << "个月"<< endl;

    return 0;
}
