#include <iostream>
using namespace std;

class Kalkulator
{
public:
   void pertambahan(){
       int x, y;
       
       cout<< " X : "; cin >>x;
       cout<< " Y : "; cin >>y;
       
       cout << x + y <<endl;
   };
    void perkurangan();
};

main()
{
    Kalkulator kalk;

    // nanti tinggal running aja methodnya
    // contoh kalk.pertambahan();

}
