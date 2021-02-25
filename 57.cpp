#include<iostream>

using namespace std;

class Complex {
public:
	Complex(double real_ = 0, double imag_ = 0) : real(real_), imag(imag_) {}
	 : 뒤의 real 자리에는 무조건 멤버 변수만 와야함
	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}
private:
	double real;
	double imag;
};

int main()
{
	Complex c1;
	Complex c2 = Complex(2);
	Complex c3(2, 3);
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;

	return 0;
}