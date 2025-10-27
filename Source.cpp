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

bool kiemTraNguyenTo(int n) {
	if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Ham tinh tong: " << tong(1,2);
	cout << "Ham tinh hieu: " << hieu(5,3);
	cout << "Ham tinh tich: " << tich(4,6);
	system("pause");
	return 0;
}