#include <stdio.h>
#include <iostream>
using namespace std;

// C++의 꽃같은 기능 클래스를 배워보자
// Class 
	// 절차 지향이란?
		// 순서를 중요하게 보는 언어이다. 
		// 사용자 편의성은 떨어진다.
		// 즉 만드는데 시간이 매우 걸린다.
	// 객체 지향이란?
		// 절차와 객체의 사이 언어인
		// 적절히 섞어서 절차와 객체의 장단점을 흡수.
		// 즉 속도와 편의성을 둘다 중요시 하겠다.
	// 객체형 언어란?
		// 속도보단 편리하게 작성할수 있게 해주는 언어
		// 자바가 대표적이다.
		// 편의성을 중요시
	// 이미 C언어에는 이미 데이터의 집합이 존재하다. -> Structure
	// 클래스는 왜 생겨났는가?
		// 다른 언어와의 통일성을 위해서
	
	// C++의 구조체(Structure)와 클래스(Class)는 롼전히 동일한 동작을 한다.
	// 즉 명칭만 수정이 됬다.

	// 그렇다면 클래스(CLASS)란 무엇인가?
		// 먼저 객체부터 알아야 한다. -> 연관성이 있는것을 하나로 묶어놓은것. 관리하는것.
	// 돌아와서 클래스는 
		// 객체를 관리하는 자료구조를 클래스라고 한다.

//class A { // 구조체는 변수만 묶을수 있었는데 함수는 함수 포인터를 이용해서 넣었었다.
//public:	// 클래스는 함수를 넣을수가 있다.
//	int a; // 4
//	char c; // 1 + 3
//	float d; // 4
//	void C(/*A* this*/) {	// 용량이 나오지 않았다 왤까?
//		// this는 생략이 가능하다.
//		this->a = 5;
//		a = 7;
//		std::cout << "함수" << a << endl;
//		// 변화하는 점이 필요
//		
//
//		// 함수를 클래스 안에 만들었을때 자동적으로 추가하는 기능
//
//	}
//
//};
//
//class Book {
//public:
//	char name[32];
//	int price;
//	char author[32];
//	void ChangeData(const char* name, const char* author, int price) {
//		strcpy_s(this->name, 32, name);
//		strcpy_s(this->author, 32, author);
//		this->price = price;
//	}
//	void Show() {
//		cout << "  " << name << endl;
//		cout << "  " << price << endl;
//		cout << "  " << author << endl;
//	}
//};
//
//
//
//
//int main() {
//	A a;
//	a.a = 13;
//	a.C(); // C(&a)
//	cout << sizeof(a); // 예상 9
//
//
//	Book A;
//	A.ChangeData("어린완자 ", "생쥐", 5000);
//	//A.ChangeData(&A,"어린완자 ", "생쥐", 5000); 
//	A.Show();
//	//Show(&A);
//
//	return 0;
//}

// 사람정보를 만들고 출력해보세요~ 이름 나이



class personData {
public:
	int age;
	char name[30];

	void InsertData(const char* name, int age) {
		this->age = age;
		strcpy_s(this->name, 30, name);
	}



	void showData() {
		cout << "나이 : " << this->age << endl;
		cout << "이름 : " << this->name << endl;
	}
};


//void main() {
//	personData P;
//
//	P.InsertData("김재형",23);
//	P.showData();
//
//
//}
//
//
//class List {
//
//public:
//
//	void Insert() {}
//	void Initialize() {}
//	void Release(){}
//};


// 숫자를 관리하는 리스트 만들기




//class List {
//public:
//	class Node {
//	public:
//		int data;
//		Node* next;
//	};
//	Node* root;
//	void Insert(int data) {
//		Node* node = new Node;
//		node->data = data;
//		node->next = root;
//		root = node;
//	}
//	void Insert(const char* data) {
//		Insert(atoi(data));
//	}
//
//	void Initialize() {
//		root = 0;
//	}
//	void Release();
//};
//
//// 클래스 내부 함수의 외부 정의
//
//void List::Release() {
//	Node* now = root;
//	Node* rem;
//	while (now != 0) {
//		rem = now;
//		now = now->next;
//		free(rem);
//	}
//}
//
//
//
//void main() {
//	List a;
//	List::Node;
//	a.Initialize();
//	a.Insert("123");
//	a.Insert("5");
//	a.Release();
//
//}


// 숫자 1개를 관리하는 클래스를 만드시오
	// 숫자를 집어 넣는 함수
	// 숫자를 N제곱 하는 함수
	// 숫자를 출력하는 함수를 만드시오 
	// 숫자의 팩토리얼을 하는 함수를 만드시오

#include "DataList.h"
#include "test.h"

// 양의 정수만 만들수 있다,....


// 캡슐화 -> 프로퍼티 라는 말로도 쓰인다. 보안과는 아무상관 없다.
	// 캡슐화를 하면 실수를 줄일수는 있으나 속도가 느려진다.
	// 함수를 일반 변수처럼 쓸수 있는 기능!

class A {
public:
	int a;
	void Setter(int n) {
		a = n;
	}
	int Getter() {
		return a;
	}
	__declspec(property(get = Getter, put = Setter)) int A;
	__declspec(property(get = Getter)) int B;
	__declspec(property(put = Setter)) int C;
	//오른쪽에 적은 변수를 
};


class File {
public:
	const char* path;
	void SetPath(const char* path) {
		this->path = path;
	}
	void Write(const char* data) {
		FILE* fp;
		fopen_s(&fp, path, "at");
		if (fp) {
			fprintf_s(fp, data);
			fclose(fp);
		}

	}
	__declspec(property(put = SetPath)) const char* Path;
	__declspec(property(put = Write)) const char* WriteText;

};




//void main() {
//	/*controlData da;
//	da.Insert(4);
//	int result = da.jegop(3);
//	da.printData();
//	int result2 = da.factorial(4);
//	test r;
//	cout << "\n";
//	r.test2();
//
//	cout << "\n" << result<<"\n" << result2 << endl;*/
//
//
//	A f;
//	f.A = 5; // f.Serrer(5);
//	cout << f.A; // f.Getter();
//	f.B;
//	f.C = 4;
//	cout << f.B; // f.Getter();
//
//
//	Filed a;
//	a.Path = "./a.txt";
//	a.WriteText = "AAA";
//}



// 단순한 스택을 만들고 스택에 데이터를 넣거나 빼는것 프로퍼티로 할수 있게 만드시오
// 스택은 숫자를 관리한다.


class Stack {
public:
	class Node {
	public:
		int data;
		Node* next;
	};
	Node* root;
	void Initialize() {

	}
	void Release() {
		Node* node = root;
		Node* rem;
		while (node != 0) {
			rem = node;
			node = node->next;
			delete rem;
		}
	}
	void Insert(int data) {
		Node* node = new Node;
		node->data = data;
		node->next = root;
		root = node;
	}
	int Pop() {
		if (!root) return 0;
		Node* node = root;
		root = root->next;
		int result = node->data;
		delete node;
		return result;
	}
	__declspec(property(put = Insert)) int num;
	__declspec(property(get = Pop)) int num;
	// 트렌드가 바뀌여서 안쓰는것으로 하자.

};


void main() {
	

}
