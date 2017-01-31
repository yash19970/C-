
#include <iostream>
#include <fstream>
using namespace std;
#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM std::cin
#endif

int main() 
{
    int a=0, b=0, c=0;
    std::cout << "Enter: "<<endl;
    #if defined (SUBLIME)
      std::ifstream ifile("stdin.input");
    #endif
    ISTREAM >> a >> b;
    c = a + b;
    std::cout << a << '+' << b << '=' << c << std::endl;
    return 0;
}