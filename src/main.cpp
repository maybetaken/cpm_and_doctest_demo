#include <iostream>
#include <spdlog/spdlog.h>
#include "../include/add.h"

int main(){
   std::cout << "Hello world!" << std::endl;
   spdlog::info("hello spdlog");
   Add add(1,2);
   spdlog::info(add.description());
   return 0;
}
