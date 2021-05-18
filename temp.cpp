#include<iostream>
using namespace std;

class temp
{
	public:
		int a=10;
		int b=20;
};
class temp1:public temp
{	public:
	void modify()
	{
		a+=10;
		b-=10;
		cout<<a<<"   "<<b;
	}
};

class temp2:public temp1
{	public:
	void display()
	{
		cout<<a<<"   "<<b;
		
	}
};

int main()
{
	temp1 t;
		t.modify();
	temp2 t1;
		t1.modify();
	    t1.display();
}
