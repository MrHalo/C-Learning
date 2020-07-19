
#include <iostream>
using namespace std;
/*
    程序流程结构
        C/C++支持最基本的三种程序运行结构：顺序结构、选择结构、循环结构
        顺序结果：程序按顺序
*/
int main()
{
   int score = 560;
   cout << "请输入一个分数："<< endl;
//    cin >> score;

//    cout << "您输入的分数为： " << score << endl;

   if(score >= 600){
       cout << "恭喜你考上重点大学"<< endl;

   } else if(score > 550 && score < 600){
       cout << "恭喜你考上一本"<< endl;
   }
    return 0;
}
