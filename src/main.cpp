#include <iostream>
#include "yaml-cpp/yaml.h"

int main()
{
  YAML::Node node = YAML::Load("token: value");
  switch (node.Type()){
    case YAML::NodeType::Null: 
      std::cout << "Type is Null\n"; 
    case YAML::NodeType::Scalar: 
      std::cout << "Type is Scalar\n"; 
    case YAML::NodeType::Sequence:
      std::cout << "Type is Sequence\n"; 
    case YAML::NodeType::Map:
      std::cout << "Type is Map\n";
    case YAML::NodeType::Undefined:
      std::cout << "Type is Undefined\n";
    default: 
      std::cout << "ohnoes\n";  //node.Type() hits default case; expect Map
  } 
  std::cout << node << std::endl;
  std::cout << node["token"].as<std::string>() << std::endl; //segfault

  return 0;
}
