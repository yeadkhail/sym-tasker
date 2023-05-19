#include <cstdlib>
#include <string>
using namespace std;

string dotsymfilestring()
{
    string homeDir = getenv("HOME");
    string Sym = "/.sym/.sym";
    string path = homeDir+Sym;
    return path;
}