#include<iostream>
#include<math.h>
using namespace std;
void add();
void subtract();
void mul();
void sqrt();
void sinValue();
void power();
void add()
    {
    	int a;
    	int b;
    	cout<<"Please enter first value ";
    	cin>>a;
    	cout<<"Please enter second value ";
    	cin>>b;
    	cout<<"The sum is "<<a+b;
    	
	}
void subtract()
    {
    	int a;
    	int b;
    	cout<<"Please enter first value ";
    	cin>>a;
    	cout<<"Please enter second value ";
    	cin>>b;
    	cout<<"The sum is "<<a-b;
    	
	}
void mul()
    {
    	int a;
    	int b;
    	cout<<"Please enter first value ";
    	cin>>a;
    	cout<<"Please enter second value ";
    	cin>>b;
    	cout<<"The sum is "<<a*b;
    	
	}
void sqrt()
    {
    	int a;
    	cout<<"Please enter value to calculate square root ";
    	cin>>a;
    	cout<<"The square root is "<<sqrt(a);	
	}
void sinValue()
    {
    	int a;
    	cout<<"Please enter value to calculate sin ";
    	cin>>a;
    	cout<<"The sin of value is "<<sin(a);	
	}
void power()
    {
    	int a;
    	int b;
    	cout<<"Please enter base value to calculate its power ";
    	cin>>a;
    	cout<<"Please enter power  value to calculate its power ";
    	cin>>b;
    	cout<<"The result is "<<pow(a, b);	
	}

int main()
{
	char ch='y';
	while(ch=='y' ||ch=='Y')
	{
     cout<<"Please Enter your choice:\nFor Addition\t\t1\n"<<"For Substraction\t2\n"<<"For Multiplication\t3\n"
    	<<"For Checking Sqrt\t4\n"<<"For Checking SinValue\t5\n"<<"For Power\t\t6\n"<<endl;
	 int choice;
	 cin>>choice;
    switch(choice)
  	{
	case 1:
			add();
			break;
	    case 2:
	    	subtract();
	    	break;
	    case 3 :
	    	mul();
	    	break;
	    case 4 :
	    	sqrt();
	    	break;
	    case 5 :
	    	sinValue();
	    	break;
	    case 6 :
	    	power();
	    	break;
	    default :
	    cout<<"\nYou have enterd wrong number please enter 1-6";
	    cout<<"do you want to continue";
        cin>>ch;        
    }
    cout<<"\nDo you want to continue Yes or No ?";
    cin>>ch;
  }
}
