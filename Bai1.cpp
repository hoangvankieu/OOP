#include<iostream>
#include<iomanip>
using namespace std;

struct PhuongTrinhBac2 {
	int a, b, c;
};
typedef struct PhuongTrinhBac2 PT2;

void Nhap(int &a, int &b,int &c) {
	cout << "Nhap he so a:";
	cin >> a;
	cout << "Nhap he so b:";
	cin >> b;
	cout << "Nhap he so c:";
	cin >> c;
	system("cls");
}
void GiaiPhuongTrinhBac1(int a,int b) {
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh vo so nghiem!";
		}
		else {
			cout << "Phuong trinh vo nghiem!";
		}
	}
	else {
		cout <<"Phuong trinh co 1 nghiem \nX = "<<fixed << setprecision(2) << (float)b / a;
	}
}
void GiaiPhuongTrinhBac2(int a, int b, int c) {
	if (a == 0) {
		GiaiPhuongTrinhBac1(b, c);
	}
	else {
		int delta = b * b - 4 * a * c;
		if (delta > 0) {
			cout << "Phuong trinh co 2 nghiem:\n";
			cout << "X1 = ";
			cout << fixed << setprecision(2) << float(-b + sqrt(delta)) / (2 * a)<<endl;
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
}
int main() {
	PT2 a;
	Nhap(a.a, a.b, a.c);
	GiaiPhuongTrinhBac2(a.a, a.b, a.c);
	return 0;
}