class ComplexNumber
{
	float re_;
	float im_;
public:
	//ComplexNumber() : re_(0), im_(0) {}
	ComplexNumber(float re = 0, float im = 0) : re_(re), im_(im) {}
	ComplexNumber(const ComplexNumber & c) : re_(c.re_), im_(c.im_) {}
	~ComplexNumber() {}

	void show(void);
	ComplexNumber operator = (ComplexNumber & c)
	{
		this -> re_ = c.re_;
		this -> im_ = c.im_;
	}

	void operator += (ComplexNumber & c)
	{
		this -> re_ += c.re_;
		this -> im_ += c.im_;
	}

	// ComplexNumber & operator + (const ComplexNumber & l, const ComplexNumber & r)
	// {
	// 	ComplexNumber result;
	// 	result.re_ = l.re_ + r.re_;
	// 	result.im_ = l.im_ + r.im_;
	// 	return result;
	// }
};