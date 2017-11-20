#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*viet chuong trinh in ra man hinh hoc sinh khong du tuoi hoc lop 10*/
int main() 
{
	int tuoi;
	cout << "Moi nhap tuoi hoc sinh: ";
	cin >> tuoi;
	cout << "tuoi cua hoc sinh la: " << tuoi << endl;
	if (tuoi < 16)
	{
		cout << "hoc sinh khong du dieu kien hoc lop 10." << endl;
	}
	else
	{
		cout << "hoc sinh du dieu kien hoc lop 10." << endl;
	}
	return 0;
}
