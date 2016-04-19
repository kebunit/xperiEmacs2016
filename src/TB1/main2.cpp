//#include "Herbivor.h"
//#include "Karnivor.h"
//#include "Tumbuhan.h"
#include "Singa.cpp"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>

//using namespace std;



auto main() -> int {
    std::vector<std::unique_ptr<Makhluk>> v;
    cout << "vector size = " << v.size() << endl;
    v.push_back(std::move(std::unique_ptr<Singa>(new Singa)));
       cout << "extended vector size = " << v.size() << endl;
   // v.push_back(std::move(std::unique_ptr<moo>(new moo)));
   // for(auto it(v.begin()), ite(v.end()); it != ite; ++it) {
     //   (it)->print();
       // std::cout << std::endl;
    //}
       for(int i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << v[i].GetId() << endl;
   }
    return 0;
}
