
#include <iostream>
using namespace std;
#include <string>

/*
    数据类型：
    语法：数据类型 变量名 = 变量初始值； int a = 1;
    1.整型：
        short(短整型)：2字节
        int(整型)：4字节
        long(长整型)：4字节，linux为4字节（32位），8字节（64位）
        long long(长长整型)：8字节
        sizeof(数据类型/变量):可以得出数据类型或者变量所占用的空间大小
    2.实型（浮点型）
        1.float单精度，4字节
        2.double双精度，8字节
    3.字符型
        作用：字符型变量用于显示单个字符
        语法：char ch = 'a';
        C和C++中字符型变量占用1个字节
    4.字符串型
        作用：用于表示一串字符
        两种风格：（都可以用）
            1.C风格字符串：char a[] = "字符串值"
            2.C++：string str2 = "hello world";
    5.布尔类型bool
        作用：布尔数据类型代表真或假的值
        bool类型:仅占用一个字节；
        true为1
        false为0
    键盘录入
    cin

*/
int main()
{
    // int 最常用
    int value = 10;
    cout << "value = " << value << endl;
    // sizeof()两种用法
    cout << "int占用内存空间为：" << sizeof(int)<<endl;
    cout << "int占用内存空间为：" << sizeof(value)<<endl;

    // 实型,通常在单精度后带上一个f，默认情况输出一个
    float f1 = 3.14f;
    double f2 = 3.1415926d;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    // 字符型变量
    char ch = 'a';
    cout <<"ch = "<< ch << endl;
    cout <<"ch的sizeof是"<< sizeof(ch)<< endl;
    cout <<"ch的强转成int = "<< (int)ch<<endl;

    //需要加入头文件#include<string>
    string str2 = "hello world!";
    cout << "str2 = "<< str2<<endl;
    cout << "sizeof(string) = "<< sizeof(string)<<endl;

    // 键盘录入 cin
    int a = 0;
    // cout << "请给整型变量a赋值：" << endl;
    // cin >> a;
    // cout << "整型变量a = "<< a << endl;


    return 0;
}
