#include <iomanip>
#include <ctime>
#include "Iterator.cpp"
#include "Stack.cpp" // include member-function definition for class template Stack

void spans( Vector< int > A, Vector< int > &S, Stack< int > stack, const int n );

int main()
{
//   srand( static_cast< unsigned int >( time(0) ) );
   unsigned int seed;
   cout << "Enter seed: ";
   cin >> seed;
   cout << endl;
   srand( seed );

   const int maxNum = 20;
   const int n = 20;
   Vector< int > A;

   for( int i = 0; i < n; i++ )
      A.push_back( rand() % maxNum );

   cout << "The input sequence: ";
   for( Vector< int >::iterator itA = A.begin(); itA < A.end(); itA++ )
      cout << setw(3) << *itA;
   cout << endl << endl;

   Vector< int > S( n );
   Stack< int > stack;

   spans( A, S, stack, n );

   cout << "The output sequence:";
   for( Vector< int >::iterator itS = S.begin(); itS < S.end(); itS++ )
      cout << setw(3) << *itS;
   cout << endl << endl;

   system( "pause" );
} // end main