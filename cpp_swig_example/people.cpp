#include <iostream>
#include "people.h"
#include <vector>

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

void People::set_dob(std::vector<int> v)
{
  this->v = v;
}

void People::get_dob()
{
  cout << "Date:" << v[0] << ", Month:" << v[1] << ", Year:" << v[2] << endl;
}
