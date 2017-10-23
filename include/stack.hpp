#include <iostream>
template <class T> class stack
{
public:
	stack();
	~stack();
	stack(const stack<T>&);
	stack<T>& operator=(const stack<T>& other);
	size_t count() const;
	void push(T const &);
	T pop();
	void print();
	T printlast();
	
private:
	T * array_;
	size_t array_size_;
	size_t count_;
};


template<class T>
stack<T>::stack() 
{
	count_ = 0;
	array_size_ = 0;
	array_ = nullptr;
}

template<class T>
stack<T>::~stack()
{
	count_ = 0;
	array_size_ = 0;
	delete[] array_;
}
template<class T>
stack<T>::stack(const stack<T>& other)
{
	count_ = other.count_;
	array_size_ = other.array_size_;
	ptr_ = new int[array_size_];
	for (unsigned int i = 0; i < count_; i++)
		array_[i] = other.array_[i];
}

template<class T>
stack<T>& stack<T>::operator=(const stack<T>& other)
{
	if (&other != this) 
	{
		delete[] array_;
		count_ = other.count_;
		array_size_ = other.array_size_;
		array_ = new int[array_size_];
		for (unsigned int i = 0; i < count_; i++)
			array_[i] = other.array_[i];
	}
	return *this;
}
template<class T>
void stack<T>::print()
{
	for(int i=0, i<count_, i++ )
	std::cout<< array_[i]<<" ";
}

template<class T>
T stack<T>::printlast()
{
	return array_[count_-1];
}

template<class T>
size_t stack<T>::count() const
{
	return count_;
}

template<class T>
void stack<T>::push(T const & value)
{
	if (array_size_ == 0)
	{
		array_size_ = 1;
		array_ = new T[array_size_];
	}
	if (array_size_ == count_)
	{
		array_size_ = array_size_ * 2;
		T *ptr1 = new T[array_size_];
		for (unsigned int i = 0; i < count_; i++)
			ptr1[i] = array_[i];
		delete[] array_;
		array_ = ptr1;
	}
	array_[count_] = value;
	count_++;
}
template<class T>
T stack<T>::pop()
{	
	
	
		if (count_ == 0)
			throw "Stack is empty";
		T n = array_[count_ - 1];
		count_--;
		return n;
	
	
	
}
