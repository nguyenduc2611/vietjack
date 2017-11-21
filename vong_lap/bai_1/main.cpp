#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*viet chuong trinh de nhap 1 so nguyen, tim boi so cua so do voi cac so tu 1-15, va in ra man hinh*/
int main() {
	int dau_vao;
	cout << "nhap so nguyen: ";
	cin >> dau_vao;
	cout << "cac boi so cua so " << dau_vao << " la:";
	for (int i = 1; i <= 15; i++)
	{
		if ((i % dau_vao)==0)
		{
			cout << i << ",";
		}
	}
	return 0;
}
