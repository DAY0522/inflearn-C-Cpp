#include<iostream>

using namespace std;

class time {
public:
	time() : h(0), m(0), s(0) {}
	time(int s_) : time() {
		s = s_;
	}
	time(int m_, int s_) : time(s_) {
		m = m_;
	}
	time(int h_, int m_, int s_) : time(m_, s_) {
		h = h_;
	}

	int h;
	int m;
	int s;
};

int main() {
	time t1;
	time t2(5);
	time t3(3, 16);
	time t4(2, 42, 15);

	cout << "t1 : " << t1.h << ":" << t1.m << ":" << t1.s << endl;
	cout << "t2 : " << t2.h << ":" << t2.m << ":" << t2.s << endl;
	cout << "t3 : " << t3.h << ":" << t3.m << ":" << t3.s << endl;
	cout << "t4 : " << t4.h << ":" << t4.m << ":" << t4.s << endl;
}