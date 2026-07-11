#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    return score1 + score2 + score3;
}

double calculateAverage(double total, int count) {
     if( count <= 0)
        return 0.0;
        else 
        return total/count;
}

char determineLetterGrade(double average) {

    if (average >= A_MINIMUM)
    return 'A';
    if (average >= B_MINIMUM)
    return 'B';
    if (average >= C_MINIMUM)
    return 'C';
    if (average >= D_MINIMUM)
    return 'D';
    else
    return 'F';
}

bool isPassing(double average) {
    
    if(average >= 70)
    return true;
    else 
    return false; 
}

bool isValidScore(double score) {
   
    if(score <= 100 && score >= 0)
    return true;
    else
    return false; 
}

void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}
