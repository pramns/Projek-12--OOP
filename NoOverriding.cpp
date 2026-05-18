#include <iostream>
using namespace std;

class baseclass{
  public:
    virtual void perkenalan() final{
      cout << "Haloo saya Function dari base class";
    }
};

class derivedclass : public baseclass{
  public: 
    void perkenalan1(){
      cout << "Hallo saya function dari devired class";
    }
};

