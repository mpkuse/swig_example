double My_variable = 3.0;

int fact( int n )
{
  if( n <=1 )
    return 1;
  else
    return n*fact(n-1);
}

int my_mod( int n, int m )
{
  return (n%m);
}
