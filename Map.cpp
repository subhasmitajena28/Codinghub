#include<iostream>

#include <map>

using namespace std;

int main()

{
    
std::map <int,int>my_map;
    
    
my_map[5] = 10;
    
my_map[8] = 20;
    
my_map[4] = 30;
    
my_map[5] = 40;
    
my_map[2] = 50;
    
my_map[21] = 80;
    
    
std::map<int,int>::iterator itr;
    
for(itr=my_map.begin();itr!=my_map.end();itr++)
    
{
        
cout<<"key is : "<<itr->first <<" & value is : "<<itr->second<<endl;
    
}
    
    
cout<<"sophie new map value at is "<<my_map.find(8)->second<<endl;

}

