#include <iostream>
#include <string>

using namespace std;

#ifndef PEOPLE_CLASS_CXX__
#define PEOPLE_CLASS_CXX__

class People{
  public:
    People();

    string get_name();
    void set_name(string name);

  private:
    string name;

};

#endif 
