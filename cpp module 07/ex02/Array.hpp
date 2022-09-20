#ifndef _Array
#define _Array


#include <iostream>

template <typename T>
    class Array{
        
        T* array;
        unsigned int _size;
        public : 

        Array()
        {
            array = new T[0];
            _size = 0;
        };

        Array(unsigned int n)
        {   
            _size = n;
            array = new T[n];
            for(unsigned int i = 0; i < _size)
                array[i] = 0;
        };

        Array(const Array<T> &other)
        {
            this->_size = other._size;
            this -> array = new T[other._size];
            for(int i = 0; i < _size; i++)
            {
                this->array[i] = array[i];
            }
        };

        Array<T>& operator= (const Array<T> &other)
        {
            delete[] array;
            this->_size = other._size;
            this -> array = new T[other._size];
            for(unsigned int i = 0; i < _size; i++)
            {
                this->array[i] = array[i];
            }
            return *this;
        };

        ~Array()
        {
            delete[] array;
        };



        T &operator[](unsigned int i)
        {
            if(i >= _size)
            {
                throw Array<T>::outofbound();
                return array[0];
            }
            return array[i];
        };

        class outofbound : public std::exception{

            public:
            const char *what() const _NOEXCEPT
            {
                return "index out of bound";
            };
        };

        unsigned int size() const
        {
            return _size;
        };

    };

#endif