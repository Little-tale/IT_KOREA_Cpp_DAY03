#include <stdio.h>
#include <iostream>
using namespace std;

// C++�� �ɰ��� ��� Ŭ������ �������
// Class 
	// ���� �����̶�?
		// ������ �߿��ϰ� ���� ����̴�. 
		// ����� ���Ǽ��� ��������.
		// �� ����µ� �ð��� �ſ� �ɸ���.
	// ��ü �����̶�?
		// ������ ��ü�� ���� �����
		// ������ ��� ������ ��ü�� ������� ���.
		// �� �ӵ��� ���Ǽ��� �Ѵ� �߿�� �ϰڴ�.
	// ��ü�� ����?
		// �ӵ����� ���ϰ� �ۼ��Ҽ� �ְ� ���ִ� ���
		// �ڹٰ� ��ǥ���̴�.
		// ���Ǽ��� �߿��
	// �̹� C���� �̹� �������� ������ �����ϴ�. -> Structure
	// Ŭ������ �� ���ܳ��°�?
		// �ٸ� ������ ���ϼ��� ���ؼ�
	
	// C++�� ����ü(Structure)�� Ŭ����(Class)�� ������ ������ ������ �Ѵ�.
	// �� ��Ī�� ������ ���.

	// �׷��ٸ� Ŭ����(CLASS)�� �����ΰ�?
		// ���� ��ü���� �˾ƾ� �Ѵ�. -> �������� �ִ°��� �ϳ��� ���������. �����ϴ°�.
	// ���ƿͼ� Ŭ������ 
		// ��ü�� �����ϴ� �ڷᱸ���� Ŭ������� �Ѵ�.

//class A { // ����ü�� ������ ������ �־��µ� �Լ��� �Լ� �����͸� �̿��ؼ� �־�����.
//public:	// Ŭ������ �Լ��� �������� �ִ�.
//	int a; // 4
//	char c; // 1 + 3
//	float d; // 4
//	void C(/*A* this*/) {	// �뷮�� ������ �ʾҴ� �ͱ�?
//		// this�� ������ �����ϴ�.
//		this->a = 5;
//		a = 7;
//		std::cout << "�Լ�" << a << endl;
//		// ��ȭ�ϴ� ���� �ʿ�
//		
//
//		// �Լ��� Ŭ���� �ȿ� ��������� �ڵ������� �߰��ϴ� ���
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
//	cout << sizeof(a); // ���� 9
//
//
//	Book A;
//	A.ChangeData("����� ", "����", 5000);
//	//A.ChangeData(&A,"����� ", "����", 5000); 
//	A.Show();
//	//Show(&A);
//
//	return 0;
//}

// ��������� ����� ����غ�����~ �̸� ����



class personData {
public:
	int age;
	char name[30];

	void InsertData(const char* name, int age) {
		this->age = age;
		strcpy_s(this->name, 30, name);
	}



	void showData() {
		cout << "���� : " << this->age << endl;
		cout << "�̸� : " << this->name << endl;
	}
};


//void main() {
//	personData P;
//
//	P.InsertData("������",23);
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


// ���ڸ� �����ϴ� ����Ʈ �����




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
//// Ŭ���� ���� �Լ��� �ܺ� ����
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


// ���� 1���� �����ϴ� Ŭ������ ����ÿ�
	// ���ڸ� ���� �ִ� �Լ�
	// ���ڸ� N���� �ϴ� �Լ�
	// ���ڸ� ����ϴ� �Լ��� ����ÿ� 
	// ������ ���丮���� �ϴ� �Լ��� ����ÿ�

#include "DataList.h"
#include "test.h"

// ���� ������ ����� �ִ�,....


// ĸ��ȭ -> ������Ƽ ��� ���ε� ���δ�. ���Ȱ��� �ƹ���� ����.
	// ĸ��ȭ�� �ϸ� �Ǽ��� ���ϼ��� ������ �ӵ��� ��������.
	// �Լ��� �Ϲ� ����ó�� ���� �ִ� ���!

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
	//�����ʿ� ���� ������ 
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



// �ܼ��� ������ ����� ���ÿ� �����͸� �ְų� ���°� ������Ƽ�� �Ҽ� �ְ� ����ÿ�
// ������ ���ڸ� �����Ѵ�.


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
	// Ʈ���尡 �ٲ�� �Ⱦ��°����� ����.

};


void main() {
	

}
