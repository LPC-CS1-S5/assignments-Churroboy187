#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int no_of_numbers = 100;
    int first_number  = 1;

    std::srand(std::time(0));

    int random = std::rand() % no_of_numbers + first_number;

    for (int i = 0; i < 3; ++i) 
  {
    random = std::rand() % no_of_numbers + first_number;
    std::cout << random << std::endl;
  }

    return 0;
}