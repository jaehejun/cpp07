#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>

template <class T>
class Array
{
  private:
    T *array;
    unsigned int length;

  public:
    Array() : array(NULL), length(0) {}
    Array(unsigned int n) : length(n)
    {
        if (n == 0)
            array = NULL;
        else
        {
            array = new T[length];
            for (unsigned int i = 0; i < length; i++)
            {
                array[i] = T();
            }
        }
    }
    Array(const Array &other) : length(other.length)
    {
        array = new T[length];
        for (unsigned int i = 0; i < length; i++)
        {
            array[i] = other.array[i];
        }
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] array;
            length = other.length;
            array = new T[length];
            for (unsigned int i = 0; i < length; i++)
            {
                array[i] = other.array[i];
            }
        }
        return *this;
    }
    ~Array()
    {
        delete[] array;
    }

    T &operator[](unsigned int index)
    {
        if (index >= length)
        {
            throw std::exception();
        }
        return array[index];
    }

    const T &operator[](unsigned int index) const
    {
        if (index >= length)
        {
            throw std::exception();
        }
        return array[index];
    }

    unsigned int size() const
    {
        return length;
    }

    void printArray(void) const
    {
        for (unsigned int i = 0; i < length; i++)
        {
            std::cout << array[i] << std::endl;
        }
    }
};

#endif