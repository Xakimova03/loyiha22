#include <iostream>
#include <string>
#include <vector>
using namespace std;

class OquvHona {
private:
    string nomi;
    int sinfi;
    int stullarSoni;
    int kompyuterlarSoni;
    float eni;
    float boyi;
    float uzunligi;

public:
    
    OquvHona(string nom, int sinf, int stullar, int kompyuter, float en, float bo, float uz) 
        : nomi(nom), sinfi(sinf), stullarSoni(stullar), kompyuterlarSoni(kompyuter), eni(en), boyi(bo), uzunligi(uz) {}

    
    void malumotlarniChiqarish() {
        cout << "O'quv honasi: " << nomi << endl;
        cout << "Sinf: " << sinfi << endl;
        cout << "Stullar soni: " << stullarSoni << endl;
        cout << "Kompuyuterlar soni: " << kompyuterlarSoni << endl;
        cout << "Eni: " << eni << " metr" << endl;
        cout << "Bo'yi: " << boyi << " metr" << endl;
        cout << "Uzunligi: " << uzunligi << " metr" << endl;
    }

    
    void konsolgaChiqarish() {
        cout << "O'quv honasi: " << nomi << " | Sinf: " << sinfi << " | Stullar soni: " << stullarSoni << " | Kompuyuterlar soni: " << kompyuterlarSoni << " | Eni: " << eni << " | Bo'yi: " << boyi << " | Uzunligi: " << uzunligi << endl;
    }

    
    void qidirish(string soralganNomi) {
        if (nomi == soralganNomi) {
            cout << "So'ralgan nom bilan o'quv hona topildi:" << endl;
            malumotlarniChiqarish();
        } else {
            cout << "So'ralgan nomga teng o'quv hona topilmadi." << endl;
        }
    }
};

int main() {
    
    OquvHona oquvHona1("Informatika", 10, 25, 10, 7.5, 6.2, 8.4);
    OquvHona oquvHona2("Matematika", 11, 30, 12, 8.0, 7.5, 9.2);
    
   
    string soralganNomi;
    cout << "Qidirish uchun o'quv honaning nomini kiriting: ";
    cin >> soralganNomi;

    
    oquvHona1.qidirish(soralganNomi);
    oquvHona2.qidirish(soralganNomi);

    return 0;
}









