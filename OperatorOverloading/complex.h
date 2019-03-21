#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

template <typename num_type>
class complex 
{
	private:

	//Needs somewhere to store the real and imaginary parts of a complex
	//number. Both should be of type num_type
		num_type _re, _im;
	
	public:
	
	//Constructor to create a complex number 0 + 0i
	complex()
	{
		_re = 0;
		_im = 0;
	}
	
	//Constructor to create a complex number a + b*i
	complex(num_type re, num_type im)
	{
		_re = re;
		_im = im;
	}
	
	//Copy constructor.
	//You may want to look up what a copy constructor is. Is it needed here?
	//Depending on how you implement the class, you may actually prefer
	//to remove this.
	//complex(const complex<num_type>& c)
	//{
	//	
	//}
	
	//Get the real part of the number
	num_type re() const
	{
		return _re;
	}
	
	//Get the imaginary part of the number
	num_type im() const
	{
		return _im;
	}

	//Assignment
	//Like the copy constructor, work out whether you need this or not.
	//Removing it may be better!
	complex<num_type>& operator=(const complex<num_type>& c){}
	
	//Unary negation
	complex<num_type> operator-() const
	{
		return complex<num_type> {-_re, -_im};
	}
	
	//Arithmetic
	complex<num_type> operator+(const complex<num_type>& c) const
	{
		// (a + bi) + (c + di) = (a + c) + (b + d)i

		/// (3+2i) + (1+7i) == 4+9i == 3 + 1 + (2+7)i
		///(3+5i) + (4-3i) == 7 + 2i == 3+4 + (5-3)i
		return complex<num_type>(re() + c.re(), im() + c.im());
	}

	complex<num_type> operator-(const complex<num_type>& c) const
	{
		return complex<num_type>(re() - c.re(), im() - c.im());
	}

	complex<num_type> operator*(const complex<num_type>& c) const
	{
		return complex<num_type> { _re * c.re() - _im * c.im() , _re * c.im() + _im * c.re()  };
	}

	complex<num_type> operator/(const complex<num_type>& c) const
	{
		//(_re * c.re() + _im * c.im()) / (c.re() ^ 2 + c.im() ^ 2),
		//(_im * c.re() - _re * c.im()) / (c.re() ^ 2 + c.im() ^ 2)

		complex<num_type> numerator = *this * c.get_conjugate();
		complex<num_type> denominator = c * c.get_conjugate();


		return complex<num_type> {numerator.re() / denominator.re(), numerator.im() / denominator.re()};
	}
	
	complex<num_type> get_conjugate() const
	{
		return complex<num_type> { re(), -im() };
	}

	//Compound assignment
	complex<num_type>& operator+=(const complex<num_type>& c)
	{
		_im += c.im();
		_re += c.re();

		return *this;
	}

	complex<num_type>& operator-=(const complex<num_type>& c)
	{
		_im -= c.im();
		_re -= c.re();

		return *this;
	}

	complex<num_type>& operator*=(const complex<num_type>& c)
	{
		_re = _re * c.re() - _im * c.im();
		_im = _re * c.im() + _im * c.re();
		
		return *this;
	}

	complex<num_type>& operator/=(const complex<num_type>& c)
	{
		complex<num_type> numerator = *this * c.get_conjugate();
		complex<num_type> denominator = c * c.get_conjugate();

		_re = numerator.re() / denominator.re();
		_im = numerator.im() / denominator.re();

		return *this;
	}
	
	//Comparison
	bool operator==(const complex<num_type>& c) const
	{
		return (this -> re() == c.re() && this -> im() == c.im() );
	}

	bool operator!=(const complex<num_type>& c) const
	{
		return (_re != c.re() || _im != c.im());
	}
	
};

//Serialisation (used for cout for example). Output the number in the form "a + bi",
//where a is the real part and b is the imaginary part.
//Side question, why is this outside the class? Why not put the rest out here too?
template <typename num_type>
std::ostream& operator<<(std::ostream& os, complex<num_type> c)
{
	char sign = '+';

	return (os << c.re() << " " << sign << " " << c.im() << "i");
}

#endif
