#include<iostream>
#include<math.h>

using namespace std;

class complex{
	private:
		float real;
		float imag;
	public:
		complex()
		{
			real=0.0;
			imag=0.0;
		}
		complex(float r,float i)
		{
			real =r;
			imag=i;
		}
		void add(complex c1, complex c2);
		void mod();
		void print();
		float getreal(){return real;
		}
		float getimag(){return imag;
		}
};

void complex::add(complex c1, complex c2)
{
	real=c1.getreal()+c2.getreal();
	imag=c1.getimag()+c2.getimag();
}

void complex::mod()
{
	cout<<"Mod: "<<sqrt(real*real+imag*imag)<<endl;
}

void complex::print()
{
	cout<<real<<" + i"<<imag<<endl;
}


int main()
{
	complex c1(1,5),c2(4,3),c3;
	c1.mod();
	c2.mod();
	c3.mod();
	c3.add(c1,c2);
	c3.mod();
	c1.print();
	c2.print();
	c3.print();
		
}
