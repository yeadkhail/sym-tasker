#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

string dotsymfilestring()
{
    string homeDir = getenv("HOME");
    string Sym = "/.sym/.sym";
    string path = homeDir+Sym;
    cout<<path<<endl;
    return path;
}