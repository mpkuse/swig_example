%module people
%include "std_vector.i"
namespace std
{
%template(IntVector) vector<int>;
%template(FloatVector) vector<float>;
}

%{
#define SWIG_FILE_WITH_INIT
#include "people.h"
%}
%include "typemaps.i"




%include <std_string.i>
%include <stl.i>
%include "people.h"
