// 1. 매개변수의 상수화
// 2. 메서드의 상수화
#include<iostream>

using namespace std;

class Account {
public:
	Account() :money(0) { }
	Account(int money) :money(money) { }

	// 매개변수 상수화
	// d를 상수로 지정하면서 실수로 d값이 변경되는 일을 없도록 함
	void Deposit(const int d) { 
		money += d;
		cout << d << "원을 예금했다!!" << endl;
	}
	void Draw(const int d) {
		money -= d;
		cout << d << "원을 인출했다!!" << endl;
	}

	// 메서드 상수화
	// 메서드 내에서 멤버 변수를 변경하지 못하도록 함
	int ViewMoney() const {
		return money;
	}

	// return type 자체를 상수로 둠
	//const int ViewMoney() {
	//	return money;
	//}

private:
	int money;
};

int main() {
	Account DaYeong(100);

	DaYeong.Deposit(100);
	DaYeong.Draw(20);

	cout << DaYeong.ViewMoney() << endl;
}