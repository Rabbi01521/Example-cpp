#include <iostream>
using namespace std;

int main ()
{
  int n;
  cin>>n;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0)
    goto mylabel;
  cout << "liftoff!\n";
  return 0;
}
