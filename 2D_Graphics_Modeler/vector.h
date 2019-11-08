#ifndef VECTOR_H_
#define VECTOR_H_

#include<cassert>
#include <algorithm> // std::copy
using std::copy;

namespace myStd
{


template<typename T>
class vector
{
    /*
    Templated vector much like stl vector container

    NOTE: elem[n] is vector component n for all n >= 0 AND n < size_v
          size_v = the number of items stored in the vector
          space = the available storage capacity of the vector where size_v <= space
          if size_v < space there is space for (space - size_v) Ts after elem[size_v-1]
    */
   
    int size_v;     // the size
    T *elem; 		// pointer to the elements (or 0)
    int space;      // number of elements plus number of free slots
    int shape_ID;    // from input file 

public:
    vector() : size_v{0}, elem{nullptr}, space{0} {} // default constructor

    explicit vector(int s) : size_v{s}, elem{new T[s]}, space{s} // alternate constructor
    {
        for (int i = 0; i < size_v; ++i)
            elem[i] = T(); // elements are initialized
    }

    vector(const vector &src) : size_v{src.size_v}, elem{new T[src.size_v]}, space{src.space} // copy constructor
    {
        copy(src.elem, src.elem + size_v, elem); // copy elements - std::copy() algorithm
    }

    vector &operator=(const vector &src) // copy assignment
    {
        T *p = new T[src.size_v];       // allocate new space
        copy(src.elem, src.elem + src.size_v, p); // copy elements - std::copy() algorithm
        delete[] elem;                            // deallocate old space
        elem = p;                                 // now we can reset elem
        size_v = src.size_v;
        return *this;  // return a self-reference
    }

    ~vector() {
        delete[] elem; // destructor
    }

    T &operator[](int n)
    {
    	assert(n >= 0 && n < size_v);
        return elem[n]; // access: return reference
    }

    const T &operator[](int n) const
    {
    	assert(n >= 0 && n < size_v);
        return elem[n];
    }

    int size() const {
        return size_v;
    }

    int capacity() const {
        return space;
    }

    void resize(int newsize) // growth
    // make the vector have newsize elements
    // initialize each new element with the default value
    {
        reserve(newsize);
        for (int i = size_v; i < newsize; ++i)
            elem[i] = T(); // initialize new elements
        size_v = newsize;
    }

    void push_back(T newItem)
    // increase vector size by one; initialize the new element with d
    {
        if (space == 0)
            reserve(8);         // start with space for 8 elements
        else if (size_v == space)
            reserve(2 * space); // get more space
        elem[size_v] = newItem; // add newItem at end
        ++size_v;               // increase the size (size_v is the number of elements)
    }

    void reserve(int newAlloc)
    {
        if(newAlloc > space)	// never decrease allocation
        {
        	T *p = new T[newAlloc]; // allocate new space
        	copy(elem, elem + size_v, p);	// copy old elements
        	delete [] elem;	// deallocate old space
        	elem = p;
        	space = newAlloc;
        }
    }

    using iterator = T *;
    using const_iterator = const T *;

    iterator begin() // points to first element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    const_iterator begin() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    iterator end() // points to one beyond the last element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    const_iterator end() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    iterator insert(iterator p, const T &val) // insert a new element val before p
    {
    	// first ensure that the vector is not full and second make sure it
    	// only inserts between existing elements
        if(size_v >= space || p <= begin() || p > end())
        return p;

        for(iterator pos = end() - 1; pos != (p - 2); --pos)//it stops at (p - 2) meaning it will shift the elements
        	*(pos + 1) = *pos;								// to right and free ups a space in (p - 1)

        *(p - 1) = val;	        // insert value

        size_v++;
        return p;
    }

    iterator erase(iterator p) // remove element pointed to by p
    {
        if (p < begin() || p >= end())	// makes sure that the element is within bound
            return p;
        for (iterator pos = (p + 1); pos != end(); ++pos)
            *(pos - 1) = *pos; // copy element one position to the left
        //delete (end() - 1);  We are going to write over the erased item so we don't need this statment
        --size_v;
        return p;
    }
};
}


#endif /* VECTOR_H_ */
