#include <iostream>
using namespace std;

class RekeningBank {
  public:
    virtual void potongAdmin() = 0;
    virtual ~RekeningBank() {}
};


class RekeningSyariah : public RekeningBank {
  private:
    string nama;
    double saldo;

  public:
    void setRekening(string n, double s){
      nama = n;
      saldo = s;
    }
    void potongAdmin() override {
      cout << "Nama     : " << nama << endl;
      cout << "Tipe     : Syariah" << endl;
      cout << "Admin    : Bebas biaya admin" << endl;
      cout << "Saldo    : Rp " << saldo << endl;
      cout << "----------------------------" << endl;
    }
};