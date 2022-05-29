/////此文件为pair容器的用法

#include <iostream>
#include <utility>      // pair
#include <string>       // string
using namespace std;
int main() {
    // 调用构造函数 1，也就是默认构造函数
    pair <string, string> pair1;
    // 调用第 2 种构造函数
    pair <string, string> pair2("STL教程", "http://c.biancheng.net/stl/");
    // 调用拷贝构造函数
    pair <string, string> pair3(pair2);
    //调用移动构造函数
    pair <string, string> pair4(make_pair("C++教程", "http://c.biancheng.net/cplus/"));
    // 调用第 5 种构造函数
    pair <string, string> pair5(string("Python教程"), string("http://c.biancheng.net/python/"));

    //在上面程序的基础上，C++ 11 还允许我们手动为 pair1 对象赋值
    pair1.first = "Java教程";
    pair1.second = "http://c.biancheng.net/java/";

    //程序中 pair4 对象的创建过程，还可以写入如下形式，它们是完全等价的
    pair <string, string> pair6 = make_pair("C++教程", "http://c.biancheng.net/cplus/");

   /* <utility>头文件中除了提供创建 pair 对象的方法之外，还为 pair 对象重载了 <、 <= 、>、 >= 、 == 、 != 这 6 的运算符，
        其运算规则是：对于进行比较的 2 个 pair 对象，先比较 pair.first 元素的大小，如果相等则继续比较 pair.second 元素的大小。*/
    //注意，对于进行比较的 2 个 pair 对象，其对应的键和值的类型比较相同，
    //否则将没有可比性，同时编译器提示没有相匹配的运算符，即找不到合适的重载运算符。
    if (pair1 != pair2) {
        cout << "pair != pair2" << endl;
    }

   /* 最后需要指出的是，pair类模板还提供有一个 swap() 成员函数，
        能够互换 2 个 pair 对象的键值对，其操作成功的前提是这 2 个 pair 对象的键和值的类型要相同*/


    pair <string, int> pair1("pair", 10);
    pair <string, int> pair2("pair2", 20);
    //交换 pair1 和 pair2 的键值对
    pair1.swap(pair2);
    //交换后pair1里存的"pair2", 20 ；  pair2里存的"pair", 10

    cout << "pair1: " << pair1.first << " " << pair1.second << endl;
    cout << "pair2: " << pair2.first << " " << pair2.second << endl;
    cout << "pair3: " << pair3.first << " " << pair3.second << endl;
    cout << "pair4: " << pair4.first << " " << pair4.second << endl;
    cout << "pair5: " << pair5.first << " " << pair5.second << endl;
    return 0;
}