// 1. �Ű������� ���ȭ
// 2. �޼����� ���ȭ
#include<iostream>

using namespace std;

class Account {
public:
	Account() :money(0) { }
	Account(int money) :money(money) { }

	// �Ű����� ���ȭ
	// d�� ����� �����ϸ鼭 �Ǽ��� d���� ����Ǵ� ���� ������ ��
	void Deposit(const int d) { 
		money += d;
		cout << d << "���� �����ߴ�!!" << endl;
	}
	void Draw(const int d) {
		money -= d;
		cout << d << "���� �����ߴ�!!" << endl;
	}

	// �޼��� ���ȭ
	// �޼��� ������ ��� ������ �������� ���ϵ��� ��
	int ViewMoney() const {
		return money;
	}

	// return type ��ü�� ����� ��
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