/*
 *        File: student-class.cc
 *      Author: Nasseef Abukamail
 *        Date: April 08, 2019
 * Description: Student structure example with vectors.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
class Student {
public:
    //getters or accessors
    int getId();
    string getName();
    double getScore();
    void output();

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

private:
    int id;  //id must be >= 0
    string name;
    double score; //>= 0, -1 default
}; //semicolon is important


// function prototypes
// void printStudent(const Student &st);
// void inputStudent(Student &st);

int main(int argc, char const *argv[]) {

    Student s;
    s.setId(100952451);
    s.setName("Jeffery Rodgers");
    s.setScore(100);

    cout << "Id: " << s.getId() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;

    s.output();


    return 0;
}  // main

int Student::getId() {
    return id;
}

void Student::setId(int newId) {
    if (newId >= 0) {
        id = newId;
    }
}

string Student::getName() {
    return name;
}

void Student::setName(string newName) {
    name = newName;
}

double Student::getScore() {
    return score;
}

void Student::setScore(double newScore) {
    if(newScore >= 0) {
        score = newScore;
    }
}

void Student::output() {
    cout << "--------------------------------------------------";
    cout << endl;

    cout <<  left << setw(20) << "Id";
    cout << setw(20) << "Name";
    cout << setw(20) << "Score";
    cout << endl;
    
    cout << setw(20) << id;
    cout << setw(20) << name;
    cout << setw(20) << score;
    cout << endl;

    cout << "--------------------------------------------------";
    cout << endl;
}//'Hio 