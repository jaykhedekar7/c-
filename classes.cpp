#include <iostream>
#include <stdio.h>

using namespace std;

class Progression
{
protected:
	long first;
	long cur;

virtual long firstValue()
{
	cur=first;
	return cur; 
}

virtual long nextValue()
{
	return ++cur;
}
public:			
	Progression(long f=0)
	{
		cur=first=f;

	}
void printProgression(int n);
virtual ~Progression(){}
		
};
void Progression::printProgression(int n)
{
 	cout<<firstValue();
 	for (int i=2;i<=n;i++)
 	{
 		cout<<'\t'<<nextValue();
 	}
 	cout<<'\n';
}

class ArithProgression : public Progression
{
protected:
	long inc;
	virtual long nextValue()
	{
		cur += inc;
		return cur;
	}
public:
	ArithProgression(long i=1)
	 : Progression(){inc=1;}
};
 
int main()
{
	Progression* prog;
	cout<<"Arithmetic Progression with default increment"<<endl;
	prog = new ArithProgression();
	prog -> printProgression(10);
	return 0;
}



