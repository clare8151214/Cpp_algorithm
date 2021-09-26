#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>

using namespace std;

template<typename T>
class Complex{
    template<typename T2> friend ostream& operator<<(ostream&, Complex<T2>&);
    template<typename T2> friend istream& operator>>(istream&, Complex<T2>&);
    private:
        T real;
        T imaginary;
    public:
        Complex(T=0,T=0);
        ~Complex();
        T operator+(Complex&);
        T operator-(Complex&);
        T operator*(Complex&);
        T operator/(Complex&);
//        bool operator==(Complex&,Complex &);
//        bool operator!=(Complex&,Complex &);


};


template<typename T>
Complex<T>::Complex(T r, T i){
    real = r;
    imaginary = i;
}
template<typename T>
Complex<T>::~Complex(){
    cout << "Object was destructed!" << endl;
}
template<typename T>
T Complex<T>::operator+(Complex<T>& c){
    return Complex(this->real + c.real,this->imaginary + c.imaginary);
}
template<typename T>
T Complex<T>::operator-(Complex<T>& c){
    return Complex(this->real - c.real,this->imaginary - c.imaginary);
}
template<typename T>
T Complex<T>::operator*(Complex<T>& c){
    return Complex((this->real * c.real - this->imaginary * c.imaginary)
                  ,(this->imaginary * c.real + this->real * c.imaginary));
}
template<typename T>
T Complex<T>::operator/(Complex<T>& c){
    return Complex((this->real * c.real + this->imaginary * c.imaginary)/(c.real * c.real + c.imaginary * c.imaginary),
                   (this->imaginary * c.real - this->real * c.imaginary)/(c.real * c.real + c.imaginary * c.imaginary));
}
/*
bool operator==(Complex<T>& c1,Complex<T>& c2){
    if(c1.real == c2.real && c1.imaginary == c2.imaginary)
        return true;
    else
        return false;
}

bool operator!=(Complex<T>& c1,Complex<T>& c2){
    if(c1.real == c2.real && c1.imaginary == c2.imaginary)
        return false;
    else
        return true;
}
*/
template<typename T>
ostream& operator<<(ostream& os, Complex<T>& c){
    os << "Real: " << c.real << endl;
    os << "Imaginary: " << c.imaginary << endl;
    return os;
}

template<typename T>
istream& operator>>(istream& is, Complex<T>& c){
    is >> c.real >> c.imaginary;
    return is;
}

#endif // COMPLEX_INCLUDED
