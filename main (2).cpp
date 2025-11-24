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
    else if (pil < 20)
        return "Pil seviyesi dusuk, ucus guvensiz!";
    else if (yukseklik > 500)
        return "Radar disi, ucus guvensiz!";
    else
        return "Ucus guvenli!";
}

int main()
{
int yukler[3]={675 ,340 ,120};
int hizler[3]={100, 59, 89};
int yukseklik[3]={200, 120, 99};

    for(int i = 0;i<3;i++)
        {
            cout<<"DRONE: "<< i+1<<endl;
            cout<<ucusGuvenligiKontrol(yukler[i], hizler[i], yukseklik[i]);
            cout<<"\n\n";
        }
    return 0;

}
