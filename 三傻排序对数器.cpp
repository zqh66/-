#include<iostream>
using namespace std;
#include <random>

class Sort 
{
public:
	int* choicesort(int arr[],int size) 
	{
		if (arr == nullptr || size < 2)
			return 0;
		for (int i = 0;i < size;i++)//û��ȥ1֮ǰ
		{
			for (int j = i + 1;j < size;j++)
			{
				if (arr[i] > arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	   return arr;
	}

	int* Bububle(int arr[], int size)
	{
		if (arr == nullptr || size < 2)
			return 0;
		for (int i = 0;i < size-1;i++)
		{
			for (int j = 0;j < size - i-1;j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return arr;
	}


	//��������
	int* insertsort(int arr[], int size)
	{
		if (arr == nullptr || size < 2)
			return 0;
		for (int i = 1;i < size;i++)
		{
			for (int j =i - 1;j >= 0 && arr[j]>arr[j+1];j--)
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
		return arr;
	}

	void Myprint(int arr[],int size)
	{
		for (int i = 0;i < size;i++)
		{
			cout << arr[i] << " ";
		}
	}


   //�õ�һ��������飬������n���������
   //�����е�ÿһ����������1~v֮�䣬���ִ�С���
	int* randomArray(int n, int v)
	{  

		int* array = new int[n];
		for (int i = 0;i < n;i++)
		{	double randomNum = (double)(rand() % 101) / 100;
			array[i] = (int)(randomNum * v) + 1;
			//cout << array[i] << endl;
		}
		return array;
	}

	//Ϊ����֤
	int* copyArray(int arr[], int size)
	{
		int n = size;
		int* ans = new int[n];
		for (int i = 0;i < n;i++)
		{
			ans[i] = arr[i];
		}
		return ans;
	}


	bool sameArray(int Array1[], int Array2[],int n)
	{
		for (int i = 0;i < n;i++)
		{
			if(Array1[i] != Array2[i])
			return false;
		}
		return true;
	}

};

int main()
{
	Sort s;

	 //����������ֵ
		int N = 10000;
		//������ķ�Χ
		int V = 100000;
		//���Դ���
		int testtimes = 500;
		cout << "���Կ�ʼ" << endl;
		for (int i = 0;i < testtimes;i++)
		{ // ����һ�����������������
			srand((unsigned int)time(NULL));
			// ����һ�����ȷֲ���������ֲ����󣬲�ָ����Χ
			double randomNum = (double)(rand() % 101) / 100;
			//����һ���������
			int n = (int)(randomNum * N);
			//�õ��������
			int* arr =s. randomArray(n, V);
			int* arr1 = s.copyArray(arr, n);
			int* arr2 = s.copyArray(arr, n);
			int* arr3 = s.copyArray(arr, n);


			s.choicesort(arr1, n);
			s.Bububle(arr2, n);
			s.insertsort(arr3, n);

			if (!s.sameArray(arr1, arr2, n) || !s.sameArray(arr1, arr3, n))
			{
				cout << "������" << endl;
			}

		}
		cout << "���Խ���" << endl;


}


