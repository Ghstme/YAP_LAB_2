#include "complex.h"

using namespace std;

Complex::Complex() : re(0), im(0) {}


Complex::Complex(double x, double y) : re(x), im(y) {}


void Complex::SetRe(double x) {
    re = x;
}

void Complex::SetIm(double y) {
    im = y;
}

double Complex::GetRe() const {
    return re;
}

double Complex::GetIm() const {
    return im;
}


double Complex::Abs() const {
    return sqrt(re * re + im * im);
}


double Complex::Arg() const {
    return atan2(im, re);
}


void Complex::Print() const {
    cout << re << " + i * " << im << endl;
}


void Complex::TrigPrint() const {
    double rho = Abs();
    double phi = Arg();
    cout << rho << " * (cos(" << phi << ") + i * sin(" << phi << "))" << endl;
}


void Complex::ExpPrint() const {
    double rho = Abs();
    double phi = Arg();
    cout << rho << " * e^(i * " << phi << ")" << endl;
}


Complex Complex::Add(const Complex& z) const {
    return Complex(re + z.re, im + z.im);
}


Complex Complex::Sub(const Complex& z) const {
    return Complex(re - z.re, im - z.im);
}


Complex Complex::Mult(const Complex& z) const {
    return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}


Complex Complex::Div(const Complex& z) const {
    if (z.re == 0 && z.im == 0) {
        throw runtime_error("Деление на ноль!");
    }

    double denominator = z.re * z.re + z.im * z.im;
    return Complex((re * z.re + im * z.im) / denominator, (im * z.re - re * z.im) / denominator);
}
