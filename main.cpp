#include <iostream>
using namespace std;

class Kalkulator
{
public:
      int x, y;
   
   void pertambahan(){
       
       cout<< " X : "; cin >>x;
       cout<< " Y : "; cin >>y;
       
       cout << x + y <<endl;
   };
   
    void perkurangan();
      cout<<"PENGURANGAN"<<endl;
      cout<<"-----------"<<endl;
      cout<<" Masukkan x :";cin>>x;
      cout<<" Masukkan y :";cin>>y;
      
      cout<<" Hasilnya "<<x-y;
   void pembagian(){
   		cout<<"PEMBAGIAN"<<endl;
   		cout<<"=========="<<endl;
   		cout<<" X : "; cin>>x;
   		cout<<" Y : "; cin>>y;
   		
   		cout<<" Hasil : "<<x/y;
   };
      
};

main()
{
    Kalkulator kalk;

    // nanti tinggal running aja methodnya
    // contoh kalk.pertambahan();

}
