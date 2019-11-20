#include <iostream>
#include <string>

int main ()
{
  std::string str="nnnnliala";
                                           // (quoting Alfred N. Whitehead)

  //std::string str2 = str.substr (3,5);     // "think"
    size_t pos1=str.find("lios");

   if(pos1!=string::npos && pos1==l-1-4) {}    // position of "live" in str

  //std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << pos << '\n';

  return 0;
}
