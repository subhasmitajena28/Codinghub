#include<iostream> 
using namespace std; 
class B
{
    public:
    B()
    {
        cout<<"inside class B"<<endl;
    }
    virtual void fun()
    {
        cout<<"Base class"<<endl;
    }
    
}; 
class D: public B 
{
    public:
    D()
    {
        cout<<"inside class D"<<endl;
    }
    void fun()
    {
        cout<<"derive class"<<endl;
    }
    
}; 
  
int main() 
{ 
    B *b = new D; 
    D *d = dynamic_cast<D*>(b); 
    //D *d=&b;
    b->fun();
    if(d != NULL) 
        cout<<"works"; 
    else
        cout<<"cannot cast B* to D*"; 
    getchar(); 
    return 0; 
} 
