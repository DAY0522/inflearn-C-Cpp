#include<iostream>

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;

	Vector2 operator+ (const Vector2 rhs) const;
	Vector2 operator- (const Vector2 rhs) const;
	Vector2 operator* (const float rhs) const;
	Vector2 operator/ (const float rhs) const;
	float operator* (const Vector2 rhs) const;

	Vector2 Add(Vector2 rhs) {
		return Vector2(x + rhs.x, y + rhs.y);
	}
	
private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b) {
	return Vector2(a * b.GetX(), a * b.GetY());
}
// 다음과 같이 전역변수로도 연산자 오버로딩이 가능하다.

int main()
{
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a - b;
	Vector2 c2 = a.operator+(b); // Vector2 c2 = a+b 와 동일한 결과를 얻음
	Vector2 c3 = a * 1.6; // 멤버함수에 선언된 operator*
	Vector2 c3_ = 1.6 * a; // 전역함수에 선언된 operator*
	Vector2 c4 = a / 2;
	float c5 = a * b;

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
	cout << c3.GetX() << ", " << c3.GetY() << endl;
	cout << c4.GetX() << ", " << c4.GetY() << endl;
	cout << c5 << endl;

	return 0;
}

Vector2::Vector2() : x(0), y(0) { };
Vector2::Vector2(float x, float y) :x(x), y(y) { };

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+ (const Vector2 rhs) const {
	return Vector2(x + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator- (const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator* (const float rhs) const {
	return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/ (const float rhs) const {
	return Vector2(x / rhs, y / rhs);
}
float Vector2::operator* (const Vector2 rhs) const {
	return (x * rhs.x + y * rhs.y);
}