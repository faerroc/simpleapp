//=====================================================================================
// main.cpp
//
// This is a simple C++ project using cmake
//
// Date       Autor             Obs
// 20-06-2020 Fabricio Correa   Initial version
//
//=====================================================================================
// References
//=====================================================================================
// http://derekmolloy.ie/hello-world-introductions-to-cmake/
// https://mirkokiefer.com/cmake-by-example-f95eb47d45b1
// https://refactoring.guru/pt-br/design-patterns/singleton/cpp/example#example-1
//=====================================================================================

#include <iostream>
#include <memory>
#include "singleton.h"

using namespace std;

//=====================================================================================
//= std::unique_ptr<abc> ABC;
//= ABC = std::make_unique<abc>();
//=====================================================================================

int main(int argc, char *argv[])
{
   cout << "Hello World !" << endl;

   cout << __DATE__ << " " << __TIME__ << endl;

   cout << __TIMESTAMP__ "" << endl;
   
   cout << argc << endl;

   for(int i=0; i< argc; i++)
   {
      cout << i << " -> " << argv[i] << endl;
   }

   singleton *ptr1 = singleton::GetInstance();
   ptr1->Debug();

   singleton::GetInstance()->Debug();

   singleton *ptr2 = singleton::GetInstance();
   ptr2->Debug();

   return EXIT_SUCCESS;
}
