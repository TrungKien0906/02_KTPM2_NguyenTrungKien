#include <iostream>
using namespace std;
int n;
#define MAX 100
int a[MAX];
int x; 
void NhapDS(int a[], int n);
void XuatDS(int a[], int n);
int search(int a[], int n, int x);
int main() 
{
	int chon;
	bool flag = false;
	do {
		system("cls");
		cout << "==========MENU==========\n";
		cout << "1.Nhap so phan tu trong danh sach\n";
		cout << "2.Nhap phan tu vao danh sach dac\n";
		cout << "3.Xuat danh sach phan tu trong danh sach dac\n";
		cout << "4.Tim kiem phan tu\n";
                cout << "5.demo\n";
<<<<<<< HEAD
                cout << "6.demo2\n";
                cout << "7.demo3\n";
=======
                cout << "6.demo3\n";
                cout << "7.demo4\n";
>>>>>>> ktpm-03
                cout <<"8.2\n"
		cout << "0. Thoat\n";
		cin >> chon;
		switch (chon)
		{
		case 1:
			cout << "Nhap so luong phan tu: ";
			cin >> n;
			flag = true;
			break;
		case 2:
			if (!flag)
				cout << "Vui long nhap lai so luong phan tu";
			else
			{
				NhapDS(a, n);
			}
			break;
		case 3:
			if (!flag)
			cout << "Vui long nhap lai so luong phan tu";
			   else
			   {
				   XuatDS(a, n);
			   }
			break;
		case 4:
			int  
		
			
			
			
			break;
		case 0:
		exit(0);
		break;
		default:
			cout << "Nhap sai!";
			break;
		}
		system("pause");
	} while (chon > 0 && chon <= 4);
	
	return 0;
}

void NhapDS(int a[], int n)
{
	cout << "=====NHAP=DS======\n";
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void XuatDS(int a[], int n)
{
	cout << "=====Xuat=DS======\n";
	cout << "Danh sach cac phan tu la:\n";
	for (int i = 0; i < n; i++)
	{
		cout<<"Phan tu: "<< a[i] << " "<<endl;
	}
}

int search(int a[], int n, int x)
{
	cout << "=====Tim=Kiem======\n";
	int i = 0;
	while (i < n && a[i] != x)
		i++;
	if (i == n)
		return -1;
	return i;

}
