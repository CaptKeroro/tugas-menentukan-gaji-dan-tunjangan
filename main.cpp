#include <iostream>

using namespace std;

int main(){
  string nama_pegawai;
  int status;
  int jumlah_anak;
  int gaji_pokok;
  int total_gaji;
  int tunjangan = 100000;
  int uang_kesehatan = 100000;
  int total_tunjangan;
  int total_uang_kesehatan;

  cout << "Nama pegawai : ";
  cin >> nama_pegawai;

  cout << "STATUS :";
  cout << "\n1.Belum menikah\n";
  cout << "2.Sudah menikah\n";
  cout << "masukan status :";
  cin >> status;

  cout << "Jumlah anak : ";
  cin >> jumlah_anak;

  cout << "Gaji pokok : ";
  cin >> gaji_pokok;

  cout << endl;

  //1
  if (status == 1){
    cout << "Nama pegawai : " << nama_pegawai << endl;
    cout << "Status : Belum menikah"<< endl;
    cout << "Jumlah anak : " << jumlah_anak << endl;
    cout << "Gaji pokok : " << gaji_pokok << endl;
    cout << "Tunjangan : tidak memperoleh uang tunjangan " << endl;
    cout << "Uang kesehatan : " << uang_kesehatan << endl;
    total_gaji = gaji_pokok + uang_kesehatan;
    cout << "Total penghasilan : " << total_gaji << endl;
  }
  //2
  else if (status == 2 && jumlah_anak == 0){
    cout << "Nama pegawai : " << nama_pegawai << endl;
    cout << "Status : Sudah menikah" << endl;
    cout << "Jumlah anak : " << jumlah_anak << endl;
    cout << "Gaji pokok : " << gaji_pokok << endl;
    cout << "Tunjangan : " << tunjangan << endl;
    total_uang_kesehatan = uang_kesehatan * 2;
    cout << "Uang kesehatan : " << total_uang_kesehatan << endl;
    total_gaji = gaji_pokok + tunjangan + total_uang_kesehatan;
    cout << "Total penghasilan : " << total_gaji << endl;
  }
  //3
  else if (status == 2 && jumlah_anak == 1){
    cout << "Nama Pasawai : " << nama_pegawai << endl;
    cout << "Status : Sudah menikah" << endl;
    cout << "Jumlah anak : " << jumlah_anak << endl;
    cout << "Gaji pokok : " << gaji_pokok << endl;
    total_tunjangan = tunjangan + (150000 * jumlah_anak);
    cout << "Tunjangan : " << total_tunjangan << endl;
    total_uang_kesehatan = uang_kesehatan + uang_kesehatan + (uang_kesehatan * jumlah_anak);
    cout << "Uang kesehatan : " << total_uang_kesehatan << endl;
    total_gaji = gaji_pokok + total_tunjangan + total_uang_kesehatan;
    cout << "Total penghasilan : " << total_gaji << endl;
  }
  //4
  else if (status == 2 && jumlah_anak == 2){
    cout << "Nama Pasawai : " << nama_pegawai << endl;
    cout << "Status : Sudah menikah" << endl;
    cout << "Jumlah anak : " << jumlah_anak << endl;
    cout << "Gaji pokok : " << gaji_pokok << endl;
    total_tunjangan = tunjangan + (150000 * jumlah_anak);
    cout << "Tunjangan : " << total_tunjangan << endl;
    total_uang_kesehatan = uang_kesehatan + uang_kesehatan + (uang_kesehatan * jumlah_anak);
    cout << "Uang kesehatan : " << total_uang_kesehatan << endl;
    total_gaji = gaji_pokok + total_tunjangan + total_uang_kesehatan;
    cout << "Total penghasilan : " << total_gaji << endl;
  }
  //5
  else if (status == 2 && jumlah_anak == 3){
    cout << "Nama Pasawai : " << nama_pegawai << endl;
    cout << "Status : Sudah menikah" << endl;
    cout << "Jumlah anak : " << jumlah_anak << endl;
    cout << "Gaji pokok : " << gaji_pokok << endl;
    total_tunjangan = tunjangan + (150000 * jumlah_anak);
    cout << "Tunjangan : " << total_tunjangan << endl;
    total_uang_kesehatan = uang_kesehatan * 5;
    cout << "Uang kesehatan : " << total_uang_kesehatan << endl;
    total_gaji = gaji_pokok + total_tunjangan + total_uang_kesehatan;
    cout << "Total penghasilan : " << total_gaji << endl;
  }
  //6
  else if (status == 2 && jumlah_anak > 3){
    cout << "Nama Pasawai : " << nama_pegawai << endl;
    cout << "Status : Sudah menikah" << endl;
    cout << "Jumlah anak : " << jumlah_anak << endl;
    cout << "Gaji pokok : " << gaji_pokok << endl;
    total_tunjangan = tunjangan + (150000 * jumlah_anak);
    cout << "Tunjangan : " << total_tunjangan << endl;
    total_uang_kesehatan = uang_kesehatan + uang_kesehatan + (uang_kesehatan * jumlah_anak);
    cout << "Uang kesehatan : " << total_uang_kesehatan << endl;
    total_gaji = gaji_pokok + total_tunjangan + total_uang_kesehatan;
    cout << "Total penghasilan : " << total_gaji << endl;
  }

  cin.get();
  return 0;
}
