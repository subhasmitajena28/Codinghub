#include<iostream>
using namespace std;

class Myntra_PaymentSystem

{
 public:
       
 	virtual void payment()=0;
       
};
class Debitcard:public Myntra_PaymentSystem
{
public:
	Debitcard::payment()
	{
		cout<<"select Debit card"<<endl;
	}
};
class Creditcard:public Myntra_PaymentSystem
{
public:
	Creditcard::payment()
	{
		cout<<"select Credit card"<<endl;
	}
};
class NetBanking:public Myntra_PaymentSystem
{
public:
	
	Debitcard::payment()
	{
		cout<<"select NetBanking"<<endl;
	}

};
int main()

{
    
	cout<<"select the Payment option you want to use:"<<endl;
    
	cout<<"press 1 for Credit card, press2 for Debit card, press3 for Netbanking"<<endl;
    
	int option;
 
	cin>>option;
       
	cout<<"You pressed : "<<option<<endl;
   
	 if(option==1)
    
		{
       
			 Myntra_PaymentSystem *obj=new CreditCard();
     
  			obj->payment();
   
 		}
    
		else if(option==2)
   
		 {
       
	 		Myntra_PaymentSystem *obj1=new DebitCard();
       
	 		obj1->payment();
   
		 }
    
		else if(option==3)
  
  		{
        
			Myntra_PaymentSystem *obj2=new NetBanking();
        
			obj2->payment();
   
 		}
   
		 else
   
		 {
        
			cout<<"invalid input"<<endl;
    
		}
    
   
 return 0; 
// ?

}
