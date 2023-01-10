/*Nama : Agif Ghifari Muchlis (15-2021-186)
  UAS PEMROGRAMAN DASAR
*/
#include <iostream>
#include <cmath>
using namespace std;

struct fungsi{
	float x;
	float y;
};


string korelasi,hubungan;
int main(){
    cout << "\n";
    cout << "            UAS PEMROGRAMAN DASAR\n" << endl;
    cout << " Nama  : Agif Ghifari Muchlis (15-2021-186)" << endl;
    cout << " Kelas : EE" << endl;
    cout << "_____________________________________________" << endl;
    cout << endl ;

	fungsi nilai[100];
	int n;
	float r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r;
	float koefisiendeterminasi;

	cout<< "Input banyak data(N) : ";cin>>n;
	for(int i=1; i<=n;i++){
		do {
        cout<<""<<endl;
		cout<<"Input X-"<<i<<' '<<" : ";cin>>nilai[i].x;
		cout<<"Input Y-"<<i<<' '<<" : ";cin>>nilai[i].y;
		}
		while(nilai[i].x<0);
		while(nilai[i].y<0);
	}
	cout<<endl;

    //rumus R atas
    for(int i=1; i<=n;i++){
		r1=r1+nilai[i].x;
		r2=r2+nilai[i].y;
		r3=r3+nilai[i].x*nilai[i].y;

    //rumus R bawah
		r4=	r4+nilai[i].x*nilai[i].x; //sigma x pangkat 2
		r7=r7+nilai[i].y*nilai[i].y; //sigma y pangkat 2
	}

	// nilai X
	r5=r5+r1;

	// sigma x dikuadratkan
	r6=r5*r5;

	// nilai y
	r8=r8+r2;

	// sigma y dikuadratkan
	r9=r8*r8;

    // akar A
	r11=n*r4-r6;

	// akar B
	r12=n*r7-r9;

	// perhitungan R bagian atas
	r10=n*r3-r1*r2;

	//perhitungan R bagian bawah
	r13=sqrt(r11)*sqrt(r12);

	// rumus perhitungan nilai korelasi R
	r=r10/r13;

	// rumus perhitungan koefisien determinasi
	koefisiendeterminasi=(r*r)*0.1;
	cout<<"a. Nilai korelasi r = "<<r<<endl;
	cout<<"b. Nilai koefisien determinasi = "<<koefisiendeterminasi<<endl;

    // mencari kekuatan hubungan dari nilai korelasi
    if (r>0.70){
		korelasi="Hubungan korelasi sangat kuat";
	}
	else if (r>=0.50){
		korelasi="Hubungan korelasi sedang";
	}
	else if (r>=0.30){
		korelasi="Hubungan korelasi moderat";
	}
	else if (r>=0.10){
		korelasi="Hubungan korelasi rendah";
	}
	else if (r<0.10) {
		korelasi="Hubungan korelasi diabaikan";
	}
	cout<<"c. Kekuatan Hubungan dari nilai korelasi (r): " << korelasi<<endl;

	// mencari hubungan korelasi
	if (r>0){
		hubungan="Hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah dan juga sebaliknya";

	}
	else if(r<0){
		hubungan="Hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y akan mengecil dan juga sebaliknya";
	}
	else if (r=0){
		hubungan="Tidak ada hubungan antara variable x dan y";
	}
	cout<<"d. Hubungan Korelasi: "<<hubungan<<endl;

}
