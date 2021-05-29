#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		void getdata()
		{
			cout<<"enter the value of x"<<endl;
			cin>>x;
		}
	
};
class B
{
	public:
		int y;
		void gety()
		{
			cout<<"enter the value of y"<<endl;
			cin>>y;	
		}
		
};
class C:public A,public B
{
	public:
	void sum()
	{
		cout<<"the value of sum ="<<x+y<<endl;
	}
	void product()
	{
		cout<<"the value of product = "<<x*y<<endl;
	}
	void subtraction()
	{
		cout<<"the value of subtraction = "<<x-y<<endl;
	}
	void division()
	{
		cout<<"the value of division = "<<x/y<<endl;
	}
	void modulo()
	{
		cout<<"the value of modulo = "<<x%y<<endl;
	}
	void square()
	{
		cout<<"the value of square = "<<x*x<<endl;
	}
	void areaofrectangle()
	{
		cout<<"the area of rectangle = "<<x*y<<endl;
	}
	
};
int main()
{
	C obj1;
	obj1.getdata();
	obj1.gety();
	obj1.sum();
	obj1.product();
	obj1.subtraction();
	obj1.division();
	obj1.modulo();
	obj1.square();
	obj1.areaofrectangle();
	return 0;
}