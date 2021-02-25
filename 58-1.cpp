// ���� �޼��� �̿�

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
	// ���� �޼����� ����
	// a.GetR()�� �ƴ� a.r�� ��� ������ �ٷ� �ҷ��� �� �ִ�.
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
	// ���� �޼��带 �̿��ϸ� ���ӽ����̽��� �̿��ؾ� �Ѵ�.

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB() << endl;
	return 0;
}