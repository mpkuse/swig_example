#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PEOPLE_CLASS_CXX__
#define PEOPLE_CLASS_CXX__

class People{
  public:
    People();

    string get_name();
    void set_name(string name);

    void set_dob( std::vector<int> );
    void get_dob();

    void set_image( std::vector<float> v, std::vector<int> dim);

  private:
    string name;

    std::vector<int> v;

};

#endif
