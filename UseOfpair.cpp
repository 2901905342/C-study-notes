/////���ļ�Ϊpair�������÷�

#include <iostream>
#include <utility>      // pair
#include <string>       // string
using namespace std;
int main() {
    // ���ù��캯�� 1��Ҳ����Ĭ�Ϲ��캯��
    pair <string, string> pair1;
    // ���õ� 2 �ֹ��캯��
    pair <string, string> pair2("STL�̳�", "http://c.biancheng.net/stl/");
    // ���ÿ������캯��
    pair <string, string> pair3(pair2);
    //�����ƶ����캯��
    pair <string, string> pair4(make_pair("C++�̳�", "http://c.biancheng.net/cplus/"));
    // ���õ� 5 �ֹ��캯��
    pair <string, string> pair5(string("Python�̳�"), string("http://c.biancheng.net/python/"));

    //���������Ļ����ϣ�C++ 11 �����������ֶ�Ϊ pair1 ����ֵ
    pair1.first = "Java�̳�";
    pair1.second = "http://c.biancheng.net/java/";

    //������ pair4 ����Ĵ������̣�������д��������ʽ����������ȫ�ȼ۵�
    pair <string, string> pair6 = make_pair("C++�̳�", "http://c.biancheng.net/cplus/");

   /* <utility>ͷ�ļ��г����ṩ���� pair ����ķ���֮�⣬��Ϊ pair ���������� <�� <= ��>�� >= �� == �� != �� 6 ���������
        ����������ǣ����ڽ��бȽϵ� 2 �� pair �����ȱȽ� pair.first Ԫ�صĴ�С��������������Ƚ� pair.second Ԫ�صĴ�С��*/
    //ע�⣬���ڽ��бȽϵ� 2 �� pair �������Ӧ�ļ���ֵ�����ͱȽ���ͬ��
    //����û�пɱ��ԣ�ͬʱ��������ʾû����ƥ�������������Ҳ������ʵ������������
    if (pair1 != pair2) {
        cout << "pair != pair2" << endl;
    }

   /* �����Ҫָ�����ǣ�pair��ģ�廹�ṩ��һ�� swap() ��Ա������
        �ܹ����� 2 �� pair ����ļ�ֵ�ԣ�������ɹ���ǰ������ 2 �� pair ����ļ���ֵ������Ҫ��ͬ*/


    pair <string, int> pair1("pair", 10);
    pair <string, int> pair2("pair2", 20);
    //���� pair1 �� pair2 �ļ�ֵ��
    pair1.swap(pair2);
    //������pair1����"pair2", 20 ��  pair2����"pair", 10

    cout << "pair1: " << pair1.first << " " << pair1.second << endl;
    cout << "pair2: " << pair2.first << " " << pair2.second << endl;
    cout << "pair3: " << pair3.first << " " << pair3.second << endl;
    cout << "pair4: " << pair4.first << " " << pair4.second << endl;
    cout << "pair5: " << pair5.first << " " << pair5.second << endl;
    return 0;
}