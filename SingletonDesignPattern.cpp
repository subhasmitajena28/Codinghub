#include<iostream>

using namespace std;

class singleton
{
 private:
	//static singleton *ptr;
	singleton()
	{
		cout<<"Calling the default constructor"<<endl;
	}
 public:
	
	static singleton *ptr;
    static singleton* getInstance()
	{
		if (ptr==nullptr)
		{
			ptr=new singleton();
		}	
		return ptr;
	}
};
singleton* singleton::ptr=nullptr;
int main()
{
	singleton* obj1=singleton::getInstance();
	singleton* obj2=singleton::getInstance();
	if(obj1==obj2)
	{
		cout<<"1 object Created"<<endl;
    }
	else
	{
		cout<<"2 object created"<<endl;
	}
	return 0;
}
