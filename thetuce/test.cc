#include <fstream>
#include <iostream>

#include <unistd.h>

#include "constants.h"

int main()
{
  //chdir(thetuce::kDefaultsFilePath);
  std::ifstream inf (thetuce::kDefaultsFile);
  char buf [10000];
  if (inf.is_open())

    std::cout << "Success";
  if(!inf) std::cout << "Smth";
  getcwd(buf, 10000);
  std::cout << buf;
}