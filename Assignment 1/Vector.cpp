#include "Vector.h" // include definition of class Vector 

// Member-function definitions for class Vector.
#ifndef VECTOR_CPP
#define VECTOR_CPP

template< typename T >
Vector< T >::~Vector()
{
   delete [] ptr;
}

template< typename T >
Iterator< T > Vector< T >::begin()
{
   return Iterator< T >( ptr );
}

template< typename T >
Iterator< T > Vector< T >::end()
{
   return Iterator< T >( ptr + size );
}

template< typename T >
unsigned int Vector< T >::getSize() const
{
   return size;
}

template< typename T >
bool Vector< T >::empty() const
{
   return ( size == 0 );
}

template< typename T >
T& Vector< T >::back()
{
   return ptr[ size - 1 ];
}

template< typename T >
void Vector< T >::pop_back()
{
   size--;
}

#endif