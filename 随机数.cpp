#include<iostream>
using namespace std;
#include<ctime>
//�������С����0��RAND_MAX��ֵΪ2147483647��������stdlib�ж���ģ��������ϣ����ĳ����Χ�ڣ�����ʹ�� % ��� / ��ʵ�֡�
void test01()
{
	for (int i = 0; i < 10; i++)
		cout << rand() << endl;//ֵ�ǹ̶���
}

void test02()
{
	srand(time(0));

	for (int i = 0; i < 10; i++)
		cout << rand() << endl;//�������ȡ��ֵ�ǲ�ȷ����
}

void test03()
{
	srand(time(0));
	for (int i = 0; i < 1000; i++)
		cout << rand() % 100+1 << endl;//��0��100��֮������������
}

void test04()
{
	srand(time(0));
	for (int i = 0; i < 100; i++)
		cout << (rand() % 10) * 0.1 << endl;//��0��1�� rand������ֻ����������
}

#include <iostream>
#include <random>
//��������У�����ʹ��std::random_device����һ�����ӣ�Ȼ�󽫸����Ӵ��ݸ�std::mt19937�������������������
// ͨ������std::uniform_real_distribution���󣬿���ָ����������������ķ�Χ�����ͨ������dis(gen)�����������������

                       
int main() {
    // ����һ�����������������
    std::random_device rd;
    std::mt19937 gen(rd());

    // ����һ�����ȷֲ���������ֲ����󣬲�ָ����Χ
    std::uniform_real_distribution<> dis(0.0, 1.0);

   
    
	for (int i = 0;i < 10;i++)
	{ // �������������
		double randomNum = dis(gen);
   // ������
    std::cout <<randomNum << std::endl;

	}
   
    return 0;
}
