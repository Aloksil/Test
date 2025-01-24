#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int age;
	float avg;
public:
	void setName(string name) {
		name = name;
	}
	void setAge(int age) {
		age = age;
	}
	void setAvg(float avg) {
		avg = avg;
	}
	Student(string n, int a, float g) {
		name = n;
		age = a;
		avg = g;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	float getAvg() {
		return avg;
	}
	void inform() {
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << age << endl;
		cout << "Средний балл: " << avg << endl;
	}
	string impact() {
		if (avg > 8) {
			return "Отлично\n";
		}
		else if (avg >= 6 && avg <= 8) {
			return "Хорошо\n";
		}
		else if (avg >= 4 && avg <= 5) {
			return "Удовлетворительно\n";
		}
		else {
			return "Неуд\n";
		}
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	Student student1("Алексей", 22, 7.3);
	student1.inform();
	cout << student1.impact() << endl;
	
	Student student2("Жмышенко Валерий Альбертович", 54, 9.1);
	student2.inform();
	cout << student2.impact() << endl;

	Student student3("Павидло", 19, 2.28);
	student3.inform();
	cout << student3.impact() << endl;
	





	return 0;
	}
	