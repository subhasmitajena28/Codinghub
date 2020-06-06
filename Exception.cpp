#include<iostream>

using namespace std;
class student
{
public:
	void fun()
	{
		throw 10;
	}
};
int main()
{
	student obj;
	int i=3;	
   cout<<"Welcome"<<endl;
try{
			if(i==3)
			obj.fun();
			//throw ;
			/*if(i==2)
			throw 4.5;
			if(i==3)
			throw "nil";*/
			cout<<"Inside try block "<<endl;
	 }
	catch( int e ){
					cout<<"Exception no is :"<<e<<endl;
				}
	
	/*catch(int e){
	
					cout<<"Exception no is :"<<e<<endl;
				}
	
	catch(float e){
	
					cout<<"Exception no is :"<<e<<endl;
				}*/
	cout<<"Last line"<<endl;
}
