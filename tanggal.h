/**
    KELAS     :IF 39-06
    KELOMPOK  :3
    NAMA(NIM) : [I Ketut Sudika Kertayasa][1301154244] , [Faishal Rachman][1301154160] , [Arli Mutiara Gusriyanti][1301154538] , [nama][nim]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal
{
    //=================================================
    // YOUR CODE STARTS HERE
    int dd, mm, yy;

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);
int bulankehari(int A, int B);

#endif // TANGGAL_H_INCLUDED
