#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

void inputData(string name[], int roll[], int marks[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> name[i];

        cout << "Roll Number: ";
        cin >> roll[i];

        cout << "Enter marks for 5 subjects: ";
        for (int j = 0; j < 5; j++)
            cin >> marks[i][j];
    }
}

int totalMarks(int marks[], int subjects)
{
    int total = 0;

    for (int i = 0; i < subjects; i++)
        total += marks[i];

    return total;
}

float percentage(int total)
{
    return total / 5.0;
}

char grade(float per)
{
    if (per >= 90)
        return 'A';
    else if (per >= 80)
        return 'B';
    else if (per >= 70)
        return 'C';
    else if (per >= 60)
        return 'D';
    else if (per >= 50)
        return 'E';
    else
        return 'F';
}

void displayReport(string name[], int roll[], int marks[][5], int n)
{
    cout << "\n========== STUDENT REPORT ==========\n";

    for (int i = 0; i < n; i++)
    {
        int total = totalMarks(marks[i], 5);
        float per = percentage(total);

        cout << "\nName       : " << name[i];
        cout << "\nRoll Number: " << roll[i];

        cout << "\nMarks      : ";
        for (int j = 0; j < 5; j++)
            cout << marks[i][j] << " ";

        cout << "\nTotal      : " << total << "/500";
        cout << "\nPercentage : " << per << "%";
        cout << "\nGrade      : " << grade(per);

        if (per >= 50)
            cout << "\nResult     : Pass\n";
        else
            cout << "\nResult     : Fail\n";
    }
}

int main()
{
    string name[MAX];
    int roll[MAX];
    int marks[MAX][5];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    inputData(name, roll, marks, n);
    displayReport(name, roll, marks, n);

    return 0;
}
