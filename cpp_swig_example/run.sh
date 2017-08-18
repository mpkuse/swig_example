swig -c++ -python people.i
g++ -fPIC -c people.cpp
g++ -fPIC -c people_wrap.cxx -I /usr/include/python2.7 
g++ -shared people.o people_wrap.o -o _people.so

