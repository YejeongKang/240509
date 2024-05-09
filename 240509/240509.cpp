#include <iostream>
#include <string>

using namespace std;

struct Rectangle {
	float width = 0;
	float height = 0;
};
int main() {
	Rectangle R;
	float area;

	cout << "사각형의 가로 길이를 입력하시오. : ";
	cin >> R.width;

	cout << "사각형의 세로 길이를 입력하시오. : ";
	cin >> R.height;

	area = R.width * R.height;

	cout << "사각형의 넓이는 " << area << endl;
}