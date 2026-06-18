#include <stdio.h>


double inputScore( char *label);
double calculateFinalGrade(double quizScore, double examScore);
char getLetterGrade(double finalGrade);
void displayReport(double quiz, double exam, double final, char letter);

int main() {
  
    double quiz = inputScore("Quiz");
    double exam = inputScore("Exam");
    
    
    double finalGrade = calculateFinalGrade(quiz, exam);
    char letterGrade = getLetterGrade(finalGrade);
 
    displayReport(quiz, exam, finalGrade, letterGrade);
    
    return 0;
}


double inputScore( char *label) {
    double score;
    printf("Enter %s Score (0-100): ", label);
    scanf("%lf", &score);
    return score;
}


double calculateFinalGrade(double quizScore, double examScore) {
    return (quizScore * 0.40) + (examScore * 0.60);
}


char getLetterGrade(double finalGrade) {
    if (finalGrade >= 90.0) return 'A';
    if (finalGrade >= 80.0) return 'B';
    if (finalGrade >= 70.0) return 'C';
    if (finalGrade >= 60.0) return 'D';
    return 'F';
}


void displayReport(double quiz, double exam, double final, char letter) {
    printf("\n========== GRADE REPORT ==========\n");
    printf("Quiz Score:       %.2f\n", quiz);
    printf("Exam Score:       %.2f\n", exam);
    printf("Final Grade:      %.2f\n", final);
    printf("Letter Grade:     %c\n", letter);
    printf("==================================\n");
}