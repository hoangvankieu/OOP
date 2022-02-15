#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct SinhVien{
	string HoTen;
	float DiemVan, DiemToan, DTB;
};
typedef struct SinhVien SV;
void XuatThongTinNSinhVien(SV[],int );
void TinhDiemTrungBinh(SV[] , int );
void NhapThongTinNSinhVien(SV[], int&);
string XepLoai(int);
void GhiFile(SV[] , int);
void NhapThongTinMotHocSinh(SV &a) {
	cout << "Nhap ho ten:";
	cin.ignore();
	getline(cin, a.HoTen);
	cout << "Nhap diem van:";
	cin >> a.DiemVan;
	cout << "Nhap diem toan";
	cin >> a.DiemToan;
}
void NhapThongTinNSinhVien(SV a[], int& n) {
	cout << "Nhap so luong sinh vien:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin sinh vien thu " << i + 1<<endl;
		NhapThongTinMotHocSinh(a[i]);
		cout << endl;
	}
}
void XuatThongTinNSinhVien(SV a[], int n) {
	system("cls");
	TinhDiemTrungBinh(a, n);
	for (int i = 0; i < n; i++) {
		cout << "Thong tin sinh vien thu " << i + 1<<endl;
		cout << "Ho va ten: " << a[i].HoTen << endl;
		cout << "Diem van: " << a[i].DiemVan << endl;
		cout << "Diem toan: " << a[i].DiemToan << endl;
		cout << "Diem trung binh: " << a[i].DTB<<endl;
		cout << "Xep loai: " << XepLoai(a[i].DTB);
		cout << endl << endl;
	}
}
void TinhDiemTrungBinh(SV a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].DTB = (a[i].DiemVan + a[i].DiemToan) / 2;
	}
}
string XepLoai(int Diem) {
	if (Diem >= 8) {
		return " Gioi";
	}
	else if (Diem >= 7) {
		return " Kha";
	}
	else if (Diem >= 5) {
		return " Trung binh";
	}
	else {
		return " Yeu";
	}
}
void GhiFile(SV a[], int n) {
	ofstream outfile;
	 outfile.open("D:\\oop\\ghifile\\sinhvien.txt",ios::app);
	 if (outfile.is_open()) {
		 cout << "Thanh cong!";
	 }
	 else {
		 cout << "That bai!";

	 }
	for (int i = 0; i < n; i++) {
		outfile << "Thong tin sinh vien thu " << i + 1 << endl;
		outfile << "Ho va ten: " << a[i].HoTen << endl;
		outfile << "Diem van: " << a[i].DiemVan << endl;
		outfile << "Diem toan: " << a[i].DiemToan << endl;
		outfile << "Diem trung binh: " << a[i].DTB << endl;
		outfile << "Xep loai: " << XepLoai(a[i].DTB);
		outfile << endl << endl;
		cout << "abc";
	}
}
int main() {
	SV a[100];
	int n;
	NhapThongTinNSinhVien(a, n);
	XuatThongTinNSinhVien(a, n);
	GhiFile(a, n);
	return 0;
}