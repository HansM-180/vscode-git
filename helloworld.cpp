#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    // input variables needed
    double gpa;
    int creditHours;
    int activity;
    
    cout << "Please enter your GPA: ";
    cin >> gpa;
    cout << "Please enter your credit hours: ";
    cin >> creditHours;
    cout << "Please enter the number of curricular activities you have done: ";
    cin >> activity;

    // If GPA is greater than 2.5, student is not qualified for any scholarship
    if (gpa > 2.5) {
        cout << fixed << setprecision(2);
        cout << "\nGPA: " << gpa << "\n";
        cout << "Result: Not qualified for any scholarship (GPA > 2.5)\n";
        return 0;
    }

    bool university = false;
    bool college = false;
    bool leadership = false;

    // University Scholarship:
    // - Automatically qualified if GPA <= 1.25 (regardless of credit hours)
    // - Otherwise, need GPA <= 1.5 AND creditHours >= 40
    if (gpa <= 1.25) {
        university = true;
    } else if (gpa <= 1.5 && creditHours >= 40) {
        university = true;
    }

    // College Scholarship:
    // - GPA <= 2.0
    // - creditHours >= 30
    // - activity >= 2
    if (gpa <= 2.0 && creditHours >= 30 && activity >= 2) {
        college = true;
    }

    // Leadership Scholarship:
    // - GPA <= 2.5
    // - creditHours >= 20
    // - activity >= 1
    if (gpa <= 2.5 && creditHours >= 20 && activity >= 1) {
        leadership = true;
    }

    cout << fixed << setprecision(2);
    cout << "\nGPA: " << gpa << "\n";
    cout << "Credit hours: " << creditHours << "\n";
    cout << "Extracurricular activities: " << activity << "\n\n";

    if (!university && !college && !leadership) {
        cout << "Result: Not qualified for any scholarship\n";
    } else {
        cout << "Eligible scholarships:\n";
        if (university) cout << "- University Scholarship\n";
        if (college)    cout << "- College Scholarship\n";
        if (leadership) cout << "- Leadership Scholarship\n";
    }

}




