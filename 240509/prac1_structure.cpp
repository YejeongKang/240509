#include <iostream>
#include <string>

using namespace std;

struct Rectangle {
	float width = 0;
	float height = 0;
};
int main() {
	Rectangle R;

	cout << "�簢���� ���� ���̸� �Է��Ͻÿ�. : ";
	cin >> R.width;

	cout << "�簢���� ���� ���̸� �Է��Ͻÿ�. : ";
	cin >> R.height;

	cout << "�簢���� ���̴� " << R.width * R.height << endl;
}