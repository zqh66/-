#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//int main() {
//    // ��ʼ���������
//    std::srand(std::time(0));
//
//    // ���ɲ���ӡ�����
//    double random_number = static_cast<double>(std::rand()) / RAND_MAX;
//    std::cout << "Random number: " << random_number << std::endl;
//
//    return 0;
//}


#include "iostream"
#include "ctime"
#include "cstdlib"
using namespace std;
#define N  999 //����ΪС�������3λ
/*˼·������һ��0 - N���������Ȼ����䴦��N + 1������Եõ��������������
N����ȷ�������ľ��ȡ�������Ҫ2λС������N = 99, ��Ҫ3λС������N = 999.��������*/
int main()
{
	double num;
	int i;
double random[10];
	srand(time(NULL));//������������ӣ�ʹÿ�β�����������в�ͬ
	for (int i = 0; i < 10; i++)
	{
		random[i] = rand() % (N + 1) / (double)(N + 1);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << random[i] << endl; //���������10�������
	}
	return 0;
}