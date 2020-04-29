#include<iostream>

using namespace std;

class Samplecopyconstructor
{
    private:
    int x, y;   
    
    public:
    Samplecopyconstructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    
    /* Copy constructor */
    Samplecopyconstructor (const Samplecopyconstructor &sam)
    {
        x = sam.x;
        y = sam.y;
    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
/* main function */
int main()
{
    Samplecopyconstructor obj1(10, 15);     // Normal constructor
    Samplecopyconstructor obj2 = obj1;      // Copy constructor
	Samplecopyconstructor obj3(20,25);
	obj2=obj3;//calling assignment overloaded operator
	//Samplecopyconstructor obj3(20,25);

    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
	cout<<"Overloaded Assignment Operator : "<<endl;
	obj2.display();
    return 0;
}
