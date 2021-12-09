#include <string>
#include <iostream>

#define START_ALPHABETICAL 97
#define END_ALPHABETICAL 123

std::string grid(int n) {
  int alaphabeticalCount = START_ALPHABETICAL;
  // your code
  if(n <= 0) return "null";

  for (size_t i = 0; i < n; i++)
  {
      alaphabeticalCount = START_ALPHABETICAL;
      if(i != 0) alaphabeticalCount += i;

      for (size_t j = 0; j < n; j++)
      {
          if(alaphabeticalCount == END_ALPHABETICAL) alaphabeticalCount = START_ALPHABETICAL;
          std::cout << (char)alaphabeticalCount << " ";
          alaphabeticalCount += 1;
      }
      std::cout << "\n";
  }
  
}

int main(int argc, char *argv[])
{
    grid(27);
}