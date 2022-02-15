#include<iostream>
#include<iomanip>
using namespace std;

struct Bai2 {
	int a, b, c;
};
typedef struct Bai2 B2;
void Nhap(int& a, int& b, int& c) {
	do {
		cout << "Nhap he so a:";
		cin >> a;
		if (a == 0) {
			cout << "Vui long nhap a khac 0!";
		}

	} while (a == 0);
	cout << "Nhap he so b:";
	cin >> b;
	cout << "Nhap he so c:";
	cin >> c;
}
void NhapNPhuongTrinh(B2 a[], int& n) {
	cout << "Nhap vao so luong phuong trinh:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Phuong trinh thu " << i + 1<<endl;
		Nhap(a[i].a, a[i].b, a[i].c);
		cout << "\n\n\n";
	}
}
void GiaiPhuongTrinhBac2(int a, int b, int c) {
	int delta = b * b - 4 * a * c;
	if (delta > 0) {
		cout << "Phuong trinh co 2 nghiem:\n";
		cout << "X1 = ";
		cout << fixed << setprecision(2) << float(-b + sqrt(delta)) / (2 * a) << endl;
		cout << "X2 = ";
		cout << fixed << setprecision(2) << float(-b - sqrt(delta)) / (2 * a) << endl;
	}
	else if (delta == 0) {
		cout << "Phuong trinh co nghiem kep:\n";
		cout << "X = " << fixed << setprecision << (float)(-b) / (2 * a);
	}
	else {
		cout << "Phuong trinh vo nghiem!";
	}
}
void GiaiNPhuongTrinh(B2 a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Phuong trinh co a = " << a[i].a << " b = " << a[i].b << " c = " << a[i].c<<endl;
		GiaiPhuongTrinhBac2(a[i].a, a[i].b, a[i].c);
		cout << endl << endl;
	}
}

int main() {
	B2 a[100];
	int n;
	NhapNPhuongTrinh(a, n);
	GiaiNPhuongTrinh(a, n);
	return 0;
}