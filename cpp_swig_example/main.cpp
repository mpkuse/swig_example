#include <iostream>
#include "people.h"

int main()
{
  People p = People();
  p.set_name("Will Gardner");
  cout << "Hello People!\n";
  cout << "Hello "<< p.get_name() << endl;
}
