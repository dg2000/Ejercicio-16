#include <iostream>

#include <cstdlib>

using std::cout;

using std::endl;

int suma(int n)
{
  return n*(n+1)/2;
}

int main()
{
  int n = 50;

  cout << suma(50) << " Para n igual a 50" <<  endl;

  cout << suma(100) << " Para n igual a 100" <<  endl;

  return 0;
}

