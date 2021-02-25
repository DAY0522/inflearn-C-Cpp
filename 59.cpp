// 정적 멤버 변수
// Color 클래스가 이용될 때마다 번호를 1씩 증가하면서 부여하는 기능 추가
#include<iostream>

using namespace std;

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCounter++) { }
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

	float GetR() {
		return r;
	}
	float GetG() {
		return g;
	}
	float GetB() {
		return b;
	}

	int GetId() {
		return id;
	}

	static Color MixColors(Color a, Color b) {
		return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	}
	// 정적 메서드의 장점
	// a.GetR()이 아닌 a.r로 멤버 변수를 바로 불러올 수 있다.

	static int idCounter;
	// idCounter를 전역 변수로 선언해도 문제가 되지 않음
	// 그런데 왜 Class 내에 선언?
	// Class가 하나일 때는 문제가 되지 않지만
	// Class가 여러개이면 idCounter를 Class마다 구분해야 하므로!

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCounter = 1;

int main()
{
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);
	// 정적 메서드를 이용하면 네임스페이스를 이용해야 한다.

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB() << endl;
	
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;
	return 0;
}