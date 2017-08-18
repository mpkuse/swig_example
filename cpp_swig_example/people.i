%module people

%{
#define SWIG_FILE_WITH_INIT
#include "people.h"
%}
%include <std_string.i>
%include <stl.i>
%include "people.h"
