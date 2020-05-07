#include<iostream>

using namespace std;

class Smartptr
{
private:
	int *ptr;
public:
	Smartptr(int *p=nullptr)
	{	
		ptr=p;
	}
	int& operator* ()
	{
		return *ptr;
	}
	Smartptr()
	{
		delete ptr;
	}	
};
int main()
{
Smartptr ptr(new (int));
*ptr=20;
cout<<*ptr<<endl;
return 0;
}
