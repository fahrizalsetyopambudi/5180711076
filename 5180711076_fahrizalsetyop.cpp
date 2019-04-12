#include <iostream>
using namespace std;
string nma,kelas,nim;
void nama(){
cout<<"nama maha siswa : ";
cin>> nma;
cout<<"kelas :";
cin>>kelas;
cout<<"nim :";
cin>>nim;
}
double nilai(string tulisan){
double angka;
cout<<"Masukan nilai mahasiswa "<<tulisan<<" : ";cin>>angka;
return angka;
}

double hasil(float uts,float uas,float tugas,float absen){
double total;
total=uts*0.2+uas*0.3+tugas*0.35+absen*0.15;
cout<<"total nilai : "<<total;
return total;
}

main(){
double uts,uas,tugas,absen;
nama();
uts=nilai("uts");
uas=nilai("uas");
tugas=nilai("tugas");
absen=nilai("absen");
hasil(uts,uas,tugas,absen);
}


