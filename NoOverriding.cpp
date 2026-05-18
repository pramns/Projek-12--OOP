#include <iostream>
using namespace std;

class baseclass{
  public:
    virtual void perkenalan() final{
      cout << "Haloo saya Function dari base class";
    }
};