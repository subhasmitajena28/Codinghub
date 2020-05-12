#include<iostream>

#include <vector>

using namespace std;

int main()
{
    
//creating a vector
   
 std::vector <int> v;
    
//cretaing iterator for accessing the vector
   
 std::vector <int>::const_iterator itr;
  
  //inserting element to vector
  
  for(int i=0;i<10;i++)
   
 {
        v.push_back(i);// 0,1,2,3,4,5,6,7,8,9
  

  }
for(itr=v.begin();itr!=v.end();itr++)
{

	cout<<*itr<<endl;
}  
 for(int i=0;i<10;i++)//0,1,2,3,4,5,6,7,8

   {
        v.pop_back();//   

 	}
 
for(itr=v.begin();itr!=v.end();itr++)
{

	cout<<*itr<<endl;
}  
/* cout<<"back element : "<<v.back()<<endl; // 8  

for(itr=v.begin();itr!=v.end();itr++)
{

	cout<<*itr<<endl;
}  
 cout<<"front element : "<<v.front()<<endl;// 0  
   
for(itr=v.begin();itr!=v.end();itr++)
{

	cout<<*itr<<endl;
}  
 
 //   v.clear(); //?
  
   //  v.empty(); //?
   
    // v.erase(); //?
    
    // v.emplace_back();
    


//assign : 

    

  
     //printing the elements in vector
   
 for(itr=v.cbegin();itr!=v.cend();itr++)
  

  {
        
   

     cout<<*itr<<endl;

    }
  */
  
}
