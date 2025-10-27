#include <iostream>

using namespace std;
int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b) {
	return a - b;
}
int tich(int a, int b); {
	return a * b;
}
float thuong(int a, int b);
bool ktSoHoanThien(int a){
	int tam = 0;
	for(int i = 1; i < a; i++)
		if (a % i == 0)
			tam += i;
	if (tam == a)
		return true;
	return false;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Ham tinh tong: " << tong(1,2) <<"\n";
  cout << "Ham tinh hieu: " << hieu(5,3) <<"\n";
	cout << "Ham tinh tich: " << tich(4,6) <<"\n";
	if (ktSoHoanThien(6))
		cout << "6 la so hoan thien.\n";
	else
		cout << "6 khong phai so hoan thien.\n"
	system("pause");
	return 0;
}