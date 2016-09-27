#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "yaml-cpp/yaml.h"

int main()
{
  YAML::Node config = YAML::LoadFile("../config/config.yaml");
  std::cout << "Your slack token is: " << config["slack_token"].as<std::string>() << std::endl;

  // smartassery
  printf("I'm a C function! \n");
  std::printf("I'm a C function wearing a C++ std namespace wrapper!\n");

  return 0;
}
