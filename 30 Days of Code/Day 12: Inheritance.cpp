#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string first, string last, int id, vector<int>& score) : Person(first, last, id),
         testScores(score){}

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            char average_grade_char{};
            int total_grade{};
            for (auto student_grade: testScores){
                total_grade += student_grade;
            }
            int average_grade = total_grade/testScores.size(); 
            if (average_grade < 40) average_grade_char = 'T';
            else if (average_grade >= 40 && average_grade < 55) average_grade_char = 'D';
            else if (average_grade >= 55 && average_grade < 70) average_grade_char = 'P';
            else if (average_grade >= 70 && average_grade < 80) average_grade_char = 'A';
            else if (average_grade >= 80 && average_grade < 90) average_grade_char = 'E';
            else if (average_grade >= 90 && average_grade <= 100) average_grade_char = 'O';
            else average_grade_char = '0';
            
            return average_grade_char; 
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}