// ���� ��� ����
// Color Ŭ������ �̿�� ������ ��ȣ�� 1�� �����ϸ鼭 �ο��ϴ� ��� �߰�
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
	// ���� �޼����� ����
	// a.GetR()�� �ƴ� a.r�� ��� ������ �ٷ� �ҷ��� �� �ִ�.

	static int idCounter;
	// idCounter�� ���� ������ �����ص� ������ ���� ����
	// �׷��� �� Class ���� ����?
	// Class�� �ϳ��� ���� ������ ���� ������
	// Class�� �������̸� idCounter�� Class���� �����ؾ� �ϹǷ�!

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
	// ���� �޼��带 �̿��ϸ� ���ӽ����̽��� �̿��ؾ� �Ѵ�.

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << ", b = " << purple.GetB() << endl;
	
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;
	return 0;
}