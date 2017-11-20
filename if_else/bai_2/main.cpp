#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*viet chuong trinh de nhap mot so nguyen bat ky tu ban phim va in ra man hinh de cho nguoi dung biet do la so lon hon hay nho hon 100*/
int main() 
{
	int so;
	cout << "Moi nhap so: ";
	cin >> so;
	cout << "so vua nhap la: "<< so << endl;
	if (so > 100)
	{
		cout << "so vua nhap lon hon 100" << endl;
	}
	else
	{
		cout << "so vua nhap nho hon 100"<< endl;
	}
	return 0;
}
