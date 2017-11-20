#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*viet chuong trinh de tim so nguyen lon nhat dc nhap tu ban phim*/
int main()
{
	int nhat;
	int hai;
	int ba;
	int max;
	cout << "moi nhap 3 so" << endl;
	cout << "nhap so thu nhat: ";
	cin >> nhat;
	cout << "nhap so thu hai: ";
	cin >> hai;
	cout << "nhap so thu ba: ";
	cin >> ba;
	if ((nhat > hai)&&(nhat > ba))
	{
		max = nhat;
	}
	else if((hai > nhat)&&(hai > ba))
	{
		max = hai;
	}
	else
	{
		max = ba;
	}
	cout << "so lon nhat la: " << max;
	return 0;
}
