#include <iostream>
#include "people.h"

using namespace std;

People::People()
{

}

string People::get_name()
{
  return this->name;
}

void People::set_name(string name)
{
  this->name = name;
}
