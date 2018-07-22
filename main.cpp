#include <fstream>
#include <iterator>
#include <string>
#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> test;
std::string name;
//  example.push_back("this");
//  example.push_back("is");
//  example.push_back("a");
//  example.push_back("test");

  std::ifstream dataFile("./example.txt");
//  std::istream_iterator<std::string> intput_iterator(input_file, "\n");
//  std::copy(example.begin(), example.end(), output_iterator);
  while (!dataFile.fail() && !dataFile.eof())
  {
            dataFile >> name;
                  test.push_back(name);
  }
  dataFile.close();
  for ( auto a : test) {
      std::cout << a << std::endl;
  }
  return 0;
}
