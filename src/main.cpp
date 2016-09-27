#include <iostream>
#include "yaml-cpp/yaml.h"

int main()
{
  YAML::Node config = YAML::LoadFile("../config/config.yaml");
  std::cout << "Your slack token is: " << config["slack_token"].as<std::string>() << std::endl;

  return 0;
}
