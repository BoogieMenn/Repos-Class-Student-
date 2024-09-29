#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double averageGrade;
    string faculty;
    string group;

public:
    // Конструктор
    Student(string name, int age, double averageGrade, string faculty, string group) :
        name(name), age(age), averageGrade(averageGrade), faculty(faculty), group(group) {}

    // Методы для установки значений свойств
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setAverageGrade(double averageGrade) { this->averageGrade = averageGrade; }
    void setFaculty(string faculty) { this->faculty = faculty; }
    void setGroup(string group) { this->group = group; }

    // Методы для получения значений свойств
    string getName() const { return name; }
    int getAge() const { return age; }
    double getAverageGrade() const { return averageGrade; }
    string getFaculty() const { return faculty; }
    string getGroup() const { return group; }

    // Метод для вывода информации о студенте
    void printInfo() const {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << averageGrade << endl;
        cout << "Факультет: " << faculty << endl;
        cout << "Учебная группа: " << group << endl;
    }

    // Метод для подсчета оценки студента
    string getGrade() const {
        if (averageGrade > 8) {
            return "Отлично";
        }
        else if (averageGrade >= 6) {
            return "Хорошо";
        }
        else if (averageGrade >= 4) {
            return "Удовлетворительно";
        }
        else {
            return "Неудовлетворительно";
        }
    }
};

int main() {
    // Создание объектов класса "Студент"
    Student student1("Сергей Иванов", 18, 7.5, "Информатика", "ИТ-1");
    Student student2("Ирина Харламова", 19, 9.2, "Экономика", "ЭК-2");
    Student student3("Григорий Божков", 21, 8.3, "Геймдизайн", "ОБП-30239");

    // Вывод информации о студентах
    cout << "Информация о студенте 1:" << endl;
    student1.printInfo();
    cout << "Оценка: " << student1.getGrade() << endl << endl;

    cout << "Информация о студенте 2:" << endl;
    student2.printInfo();
    cout << "Оценка: " << student2.getGrade() << endl << endl;

    cout << "Информация о студенте 3:" << endl;
    student3.printInfo();
    cout << "Оценка: " << student3.getGrade() << endl;

    return 0;
}