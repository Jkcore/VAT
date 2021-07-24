#include <fstream> 
#include <iostream> 
#include <string> 
#include <stdlib.h>

int main(int argc, char *argv[]) { 
  int floor, ceiling, iters; 
  
  if(argc < 3) { 
    std::cout << "Invalid usage" << std::endl; 
    return 0; 
  } else { 
     floor = strtol(argv[1], nullptr, 0); 
     ceiling = strtol(argv[2], nullptr, 0); 
  }
  
  iters = ceiling - floor; 

  //Iterate the range of years specified by the user. 
  //Each iteration should send the file to some function to 
  //  handle and parse that file for the vaccine and symptoms.
  //Will also need to parse the file names to verify you have the right
  //  file and year. 
  for(int i = 0; i < iters; i++) {
    //someCoolParsingFunction(); 
  }

  return 0; 
}
