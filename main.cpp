#include <iostream>
using namespace std;

class Kalkulator
{
public:
    int x, y;

    void pertambahan()
    {

        cout << " X : ";
        cin >> x;
        cout << " Y : ";
        cin >> y;

        cout << x + y << endl;
    };

    void perkurangan()
    {
        cout << "PENGURANGAN" << endl;
        cout << "-----------" << endl;
        cout << " Masukkan x :";
        cin >> x;
        cout << " Masukkan y :";
        cin >> y;

        cout << " Hasilnya " << x - y;
    }
    
   //pembagian pada bahasa c++
    void pembagian()
    {
        cout << "PEMBAGIAN" << endl;
        cout << "==========" << endl;
        cout << " X : ";
        cin >> x;
        cout << " Y : ";
        cin >> y;

        cout << " Hasil : " << x / (float)y;
    };
};

main()
{
    Kalkulator kalk;

    // nanti tinggal running aja methodnya
    // contoh kalk.pertambahan();
    cout << "Kalkulator" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Perkurangan" << endl;
    cout << "3. Pembagian" << endl;
    int pil;
    cout << "Pilihan : ";
    cin >> pil;

    switch (pil)
    {
    case 1:
        kalk.pertambahan();
        break;

    case 2:
        kalk.perkurangan();
        break;

    case 3:
        kalk.pembagian();
        break;

    default:
        cout << "Salah !" << endl;
    }
}
