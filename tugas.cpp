#include <iostream>
using namespace std;

class RekeningBank {
  public:
    virtual void potongAdmin() = 0;
    virtual ~RekeningBank() {}
};