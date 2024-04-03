#include<iostream>
using namespace std;
  
int main()
{ 

  int array[ 3 ][ 3 ]; // Declares an array that looks like a chessboard
for ( int i = 0; i < 3; i++ )
{
  for ( int j = 0; j < 3; j++ )
{
array[ i ][ j ] = i * j; // Set each element to a value
}
}
cout << "Multiplication table:\n";
for ( int i = 0; i < 3; i++ )
{
for ( int j = 0; j < 3; j++ )
{
cout << "[ "<< i <<" ][ "<< j <<" ] = ";
cout << array[ i ][ j ] <<" ";
cout << "\n";
}
}
return 0;
}
