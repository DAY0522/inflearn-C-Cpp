// 정적 메서드 이용

#include<iostream>

using namespace std;

class Color {
public:
	Color() : r(0), g(0), b(0) { }
	Color(float r, float g, float b) : r(r), g(g), b(b) { }

	float GetR() {
		return r;
	}
	float GetG() {
		return g;
	}
	float GetB() {
		return b;
	}

	static Color MixColors(Color a, Color b) {
		return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	}
	// 정적 메서드의 장점
	// a.GetR()이 아닌 a.r로 멤버 변수를 바로 불러올 수 있다.
private:
	float r;
	float g;
	float b;
};


int main()
{
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);
	// 정적 메서드를 이용하면 네임스페이스를 이용해야 한다.

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB() << endl;
	return 0;
}