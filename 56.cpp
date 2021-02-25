//// 생성자 : 멤버 변수 초기화
//
//#include<iostream>
//
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() { // 생성자
//		cout << "생성자가 호출되었다!" << endl;
//	}
//	~MyClass() { // 소멸자
//		cout << "소멸자가 호출되었다!" << endl;
//	}
//};
//
////MyClass globalobj;
//
//void testLocalObj()
//{
//	cout << "testLocalObj함수 시작!" << endl;
//	MyClass localObj;
//	cout << "testLocalObj함수 끝!" << endl;
//}
//
//int main()
//{
//	cout << "main함수 시작!" << endl;
//	testLocalObj();
//	cout << "main함수 끝!" << endl;
//	return 0;
//}