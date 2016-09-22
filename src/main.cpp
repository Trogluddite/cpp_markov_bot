#include <iostream>
#include "yaml-cpp/yaml.h"

int main()
{
  YAML::Node config = YAML::LoadFile("config.yaml");
  return 0;
}
