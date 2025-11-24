#include <iostream>
using namespace std;

string ucusGuvenligiKontrol(int yuk, int hiz, int yukseklik)
{
    int pil = 100 - (hiz / 10) * 5;

    if (pil < 0)
        pil = 0;

    cout << "Pil Seviyesi: " << pil << "%" << endl;

    if (yuk > 500)
        return "Agir yuk, ucamaz!";
    else if (pil < 30)
        return "Pil seviyesi dusuk, ucus guvensiz!";
    else if (yukseklik > 200 || yukseklik < 20)
        return "Radar disi, ucus guvensiz!";
    else
        return "Ucus guvenli!";
}

int main()
{
    cout << "\nDrone 1 --> " ;
       cout  << ucusGuvenligiKontrol(350, 40, 50) << endl;
    cout << "\nDrone 2 --> " ;
      cout   << ucusGuvenligiKontrol(600, 30, 70) << endl ;
    cout << "\nDrone 3 --> " ;
       cout  << ucusGuvenligiKontrol(200, 80, 150) << endl;
    cout << "\nDrone 4 --> " ;
     cout    << ucusGuvenligiKontrol(450, 20, 10) << endl;
    cout << "\nDrone 5 --> " ;
       cout  << ucusGuvenligiKontrol(500, 50, 210) << endl;
    cout << "\nDrone 6 --> " ;
       cout  << ucusGuvenligiKontrol(100, 60, 180) << endl;
    cout << "\nDrone 7 --> " ;
       cout  << ucusGuvenligiKontrol(400, 155, 90) << endl;

    return 0;
}