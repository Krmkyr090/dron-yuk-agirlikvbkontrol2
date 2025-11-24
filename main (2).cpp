#include <iostream>
using namespace std;

string ucusGuvenligiKontrol(int yuk, int hiz, int yukseklik)
{
    int pil = 100 - (hiz / 10) * 5;
    if (pil < 0)
        pil = 0;
    cout << "Pil Seviyesi: " << pil << "%" << endl;
    if (yuk > 80)
        return "Agir yuk, ucamaz!";
    else if (pil < 20)
        return "Pil seviyesi dusuk, ucus guvensiz!";
    else if (yukseklik > 500)
        return "Radar disi, ucus guvensiz!";
    else
        return "Ucus guvenli!";
}

int main()
{
    cout << "\nDrone 1" <<endl;
    cout << ucusGuvenligiKontrol(60, 40, 200) << endl;
    cout << "\nDrone 2" <<endl;
    cout << ucusGuvenligiKontrol(90, 20, 100) << endl;
    cout << "\nDrone 3" <<endl;
    cout << ucusGuvenligiKontrol(40, 50, 600) << endl;

    return 0;
}