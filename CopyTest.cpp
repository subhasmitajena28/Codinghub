#include<iostream>
#include<cstring>
using namespace std;

class ABC
{
	char *str;
public:
	ABC()
	{
		cout<<"Calling default constructor"<<endl;
	}
	ABC(char *temp)
	{
        str=new char[strlen(str)+1];
		strcpy(str,temp);
	}
	ABC(const ABC &temp)
	{
		this->str=new char[strlen(str)+1];
		strcpy(this->str,temp.str);		
	}
	ABC& operator=(const ABC &temp)
	{
		this->str=new char[strlen(str)+1];
		strcpy(this->str,temp.str);
		return *this;
	}
	void show()
	{
		cout<<"str is :"<<str<<endl;
	}
};
int main()
{
	ABC obj1("sophie");
	obj1.show();
	ABC obj2=obj1;
	obj2.show();
	ABC obj3;
	obj3=obj1;
	obj3.show();

}
