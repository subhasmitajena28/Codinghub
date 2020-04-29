#include <iostream>
#include <string.h>

using namespace std;

class Sample
{
private:
	int len;
	char *name;
public:
	Sample()
	{
		cout<<"Calling Default Constructor"<<endl;
	}
	Sample(char *n)
	{
		cout<<"Calling Parameterized Constructor"<<endl;
		len=strlen(n);
		name=new char (len+1);
		strcpy(name,n);
	}
	Sample(const Sample &str)
	{
		cout<<"Calling Copy Constructor"<<endl;
		len=str.len;
		name=new char(len+1);
		strcpy(name,str.name);
	}
	Sample& operator=(const Sample &str)
	{
		cout<<"Calling Overloaded Assignment Operator"<<endl;
		Sample localobj;
		localobj.len=str.len;
		localobj.name=new char(len+1);
		strcpy(localobj.name,str.name);
		return localobj;		
	}
	void show()
	{
		cout<<"Name is :"<<name<<endl;
	}
};
int main()
{
	Sample obj("Subhasmita");
	Sample obj1=obj;	
	obj1.show();
	Sample obj2;
	obj2=obj;
	obj2.show();
	return 0;
}


