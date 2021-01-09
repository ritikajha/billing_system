#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;

class parent_item{
	protected:
	string name;
	float dis;
	float cp;
	float sp;
	public:
		parent_item(string n,float d,float cp,float sp)
		{
			this->name=n;
			this->dis=d;
			this->cp=cp;
			this->sp=sp;
			cout<<"in parent item constructed"<<endl;
		}
};

class item: public parent_item
{	protected:
	int id;
	int size;
	int quantity;
	public:
	
	item(string n, float d, float cp,float sp,int i,int s,int q):	parent_item(n, d, cp, sp)
	{
	
		this->id=i;
		this->size=s;
		this->quantity=q;
		cout<<"item construction done"<<endl;
	}
	display()
	{
		cout<<this->id<<this->name<<this->size<<this->cp<<this->sp<<this->quantity<<this->dis<<endl;
	}
};
int main()
{	int a[10];
	//item array[100];
item planeShirtS("planeShirtS",10.00,200.00,250.00,200,0,100);
item planeShirtM("planeShirtM",10.00,200.00,250.00,201,1,100);
item planeShirtL("planeShirtL",10.00,200.00,250.00,202,2,100);
	//item array[0]("planeShirtS",10.00,200.00,250.00,200,0,100);
	planeShirtS.display();
//	while(1)
//	{	int i;
//		cout<<"enter id";
//		cin>>"i";
//	}
}

