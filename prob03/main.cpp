// Name: Peter Choi
// Random Rectangle

//libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()

{

  //Assign and declare variables.
  int max_length = 40, //Max length for the rectangle.
      length;
  std::string hashtag;
  
  //Random number generator using epoch time.
  length = time(0) % max_length + 1;
  
  //Assign the length to the hashtag string,.
  hashtag.assign(length, '#');

  //Output statements.
  std::cout << "The size of the rectangle is 3x" << length << " units.\n";
  std::cout << hashtag << std::endl;
  std::cout << hashtag << std::endl;
  std::cout << hashtag << std::endl;
    
return 0;
}

