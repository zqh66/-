#include<iostream>
using namespace std;

class Data {
public:
	typedef unsigned int index;
	char get() const;
	char get(index st, index eb);
	string content="sss";
	index cursor, top, bottom;
};
string Data::* ps = &Data::content;

int main()
{
	cout <<ps<< endl;//1
	//cout << *ps << endl;//错误
    char(Data:: * pmf)()const = &Data::get;
	
	Data dd;
	string*ps2 = &(dd.content);
	cout << (*ps2) << endl;//sss
	//char (*f)(int st, int eb) = &Data::get;
	


}

