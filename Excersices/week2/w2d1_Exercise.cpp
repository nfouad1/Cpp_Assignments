#include <iostream>

using namespace std;

class Student{
    //declare the member functions
    private:
    double s[5];
    
    public:
    int calculateTotalScore();
    void input();  

};

//Define the member functions

//returns the sum of the students score
int Student::calculateTotalScore() {
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
           sum=sum + s[i];
    }
    
    return sum;
    
}

//read the score from the user
void Student::input(){

    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }

}

int main (){
    
    int n; // number of students
    cout << "Number of students: ";
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
    

