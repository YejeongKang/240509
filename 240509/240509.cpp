#include <iostream>
#include <string>

using namespace std;

// 구조체(structure)

struct Position {
	int x = 0;
	int y = 0;
};

int main() {
	Position p;
	p.x = 3;
	p.y = 5;
	p = { 3, 5 };
}

// 클래스(class)
class student
{
private: //접근 제어자		
	char* name; //필드: 클래스 내 선언된 변수
	int age;
public:
	void ShowInfo(); //생성자
	void SetInfo(const char* _name, int _age); //메소드: 클래스 내 선언된 함수
};

void student::ShowInfo()
{
	cout << "이름: " << name << " 나이: " << endl;
}

int main()
{
	student stu; //클래스
	stu.SetInfo("홍길동", 24);
	stu.ShowInfo();
}

//this
//클래스 내에서 자기 자신을 가리키는 포인터
class Position
{
	int x = 0;
	void setX(int x)
	{
		this->x = x;
	}
}; // → 두 x가 가리키는 값이 다름!
