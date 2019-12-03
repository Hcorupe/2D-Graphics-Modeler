#ifndef VECTOR_H_
#define VECTOR_H_

#include<cassert>
#include <algorithm> // std::copy
using std::copy;

namespace myStd
{

//! Templated Vector class
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
   
    //! Vector's size
    int size_v;
    //! Pointer to elements
    T *elem;
    //! Number of elements plus number of free slots
    int space;
    int shape_ID;    // from input file 

public:
    //! Default constructor
    vector() : size_v{0}, elem{nullptr}, space{0} {} // default constructor

    //! Alternate constructor
    explicit vector(int s) : size_v{s}, elem{new T[s]}, space{s} // alternate constructor
    {
        for (int i = 0; i < size_v; ++i)
            elem[i] = T(); // elements are initialized
    }

    //! Copy constructor
    vector(const vector &src) : size_v{src.size_v}, elem{new T[src.size_v]}, space{src.space} // copy constructor
    {
        copy(src.elem, src.elem + size_v, elem); // copy elements - std::copy() algorithm
    }

    //! Copy assignment
    vector &operator=(const vector &src) // copy assignment
    {
        T *p = new T[src.size_v];       // allocate new space
        copy(src.elem, src.elem + src.size_v, p); // copy elements - std::copy() algorithm
        delete[] elem;                            // deallocate old space
        elem = p;                                 // now we can reset elem
        size_v = src.size_v;
        return *this;  // return a self-reference
    }

    //! Destructor
    ~vector() {
        delete[] elem; // destructor
    }

    /*!
     * \brief operator [] returns element and index n
     * \param n
     * \return T element at index n
     */
    T &operator[](int n)
    {
    	assert(n >= 0 && n < size_v);
        return elem[n]; // access: return reference
    }

    /*!
     * \brief operator [] returns constant element at index n
     * \param n
     * \return const T element at index n
     */
    const T &operator[](int n) const
    {
    	assert(n >= 0 && n < size_v);
        return elem[n];
    }

    /*!
     * \brief size returns vector's size
     * \return int vector size
     */
    int size() const {
        return size_v;
    }

    /*!
     * \brief capacity returns vector's capacity
     * \return int vector capacity
     */
    int capacity() const {
        return space;
    }

    /*!
     * \brief resize grows vector to have newsize elements
     * Initializes each element with default value
     * \param newsize
     */
    void resize(int newsize) // growth
    // make the vector have newsize elements
    // initialize each new element with the default value
    {
        reserve(newsize);
        for (int i = size_v; i < newsize; ++i)
            elem[i] = T(); // initialize new elements
        size_v = newsize;
    }

    /*!
     * \brief push_back adds newItem to vector
     * \param newItem
     */
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

    /*!
     * \brief reserve allocates new space in vector
     * \param newAlloc
     */
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

    /*!
     * \brief begin points to first element
     * \return iterator to first element
     */
    iterator begin() // points to first element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    /*!
     * \brief begin points to first element
     * \return constant iterator to first element
     */
    const_iterator begin() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    /*!
     * \brief end points to one beyond last element
     * \return iterator to one beyond last element
     */
    iterator end() // points to one beyond the last element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    /*!
     * \brief end points to one beyond last element
     * \return constant iterator to one beyond last element
     */
    const_iterator end() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    /*!
     * \brief insert a new element before p
     * \param p
     * \param val
     * \return iterator to p
     */
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

    /*!
     * \brief erase removes element pointed to by p
     * \param p
     * \return iterator to p
     */
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

    bool search(T item)
    {
        bool found = false;

        for(iterator curr = begin(); curr != end(); ++curr)
        {
            if (*curr == item)
            {
                found = true;
            }
        }

        return found;
    }

};
}


#endif /* VECTOR_H_ */
