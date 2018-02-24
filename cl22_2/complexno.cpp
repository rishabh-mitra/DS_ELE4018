#include <iostream>
#include <cmath>
using namespace std;

typedef struct complex{
	int real;
	int imag;
}COMPLEX;

int main (void)
{
	COMPLEX c1,c2,c_sum,c_diff, c_mul;
	int ch;
	do{
		cout << "Enter choice 1 to display 2 to add 3 to subtract 4 to multiply 5 to quit"<<endl;
		cin >> ch;
		switch(ch)
		{
			case 1: cout<<"Enter the real part"<<endl;
					cin >> c1.real;
					cout<<"Enter the imaginary part"<<endl;
					cin >> c1.imag;
					if (c1.imag >= 0)
						cout<<"The number entered is "<<c1.real<<"+"<<c1.imag<<"i"<<endl;
					else
						cout<<"The number entered is "<<c1.real<<"-"<<abs(c1.imag)<<"i"<<endl;
					break;

			case 2: cout<<"Enter the real part of 1st number"<<endl;
					cin >> c1.real;
					cout<<"Enter the imaginary part of 1st number"<<endl;
					cin >> c1.imag;
					cout<<"Enter the real part of 2nd number"<<endl;
					cin >> c2.real;
					cout<<"Enter the imaginary part of 2nd number"<<endl;
					cin >> c2.imag;
					c_sum.real = c1.real + c2.real;
					c_sum.imag = c1.imag + c2.imag; 
					if (c_sum.imag >= 0)
						cout<<"The sum is "<<c_sum.real<<"+"<<c_sum.imag<<"i"<<endl;
					else
						cout<<"The sum is "<<c_sum.real<<"-"<<abs(c_sum.imag)<<"i"<<endl;
					break;

			case 3: cout<<"Enter the real part of 1st number"<<endl;
					cin >> c1.real;
					cout<<"Enter the imaginary part of 1st number"<<endl;
					cin >> c1.imag;
					cout<<"Enter the real part of 2nd number"<<endl;
					cin >> c2.real;
					cout<<"Enter the imaginary part of 2nd number"<<endl;
					cin >> c2.imag;
					c_diff.real = c1.real - c2.real;
					c_diff.imag = c1.imag - c2.imag; 
					if (c_diff.imag >= 0)
						cout<<"The difference is "<<c_diff.real<<"+"<<c_diff.imag<<"i"<<endl;
					else
						cout<<"The difference is "<<c_diff.real<<"-"<<abs(c_diff.imag)<<"i"<<endl;
					break;

			case 4: cout<<"Enter the real part of 1st number"<<endl;
					cin >> c1.real;
					cout<<"Enter the imaginary part of 1st number"<<endl;
					cin >> c1.imag;
					cout<<"Enter the real part of 2nd number"<<endl;
					cin >> c2.real;
					cout<<"Enter the imaginary part of 2nd number"<<endl;
					cin >> c2.imag;
					c_mul.real = (c1.real * c2.real) - (c1.imag * c2.imag);
					c_mul.imag = (c1.real * c2.imag) - (c2.real * c1.imag); 
					if (c_mul.imag >= 0)
						cout<<"The product is "<<c_mul.real<<"+"<<c_mul.imag<<"i"<<endl;
					else
						cout<<"The product is "<<c_mul.real<<"-"<<abs(c_mul.imag)<<"i"<<endl;
					break;
		}
		}
		while (ch !=5 );
		return 0;
}
