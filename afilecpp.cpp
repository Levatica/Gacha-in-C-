#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    int kontent = 0;
    char watashi_no_suki_desu;
    int jumlah_gacha;

    cout << "Masukkan seberapa banyak ingin gacha : ";
    cin >> jumlah_gacha;

    for (int i = 0; i < jumlah_gacha; i++)
    {
        cout << "Ingin Bermain ? : ";
        cin >> watashi_no_suki_desu;

        int random = 1 + (rand() % 3);

        if (watashi_no_suki_desu == 'y')
        {
            if (random == 1){
                
                cout << "Kamu dapat Mitsuba Sousuke (Point = 2)" << endl;
                int point = 2;
                kontent += point;

            }else if (random == 2)
            {

                cout << "Kamu dapat Yashiro Nene (Point = 4)" << endl;
                int point = 4;
                kontent += point;

            }else if (random == 3)
            {
                 
                cout << "Kamu dapat Shijima Mei (Point = 6)" << endl;
                int point = 6;
                kontent += point;

            }
            
            
        }else if (watashi_no_suki_desu == 'n')
        {
            cout << "Goodbye~" << endl;
            break;
        }
        else{

            cout << "Kamu salah ngetik :(" << endl;

        }
        
        
        
    }
    cout << "Total Point Kamu sekarang adalah : " << kontent << endl;
    

    return 0;
}