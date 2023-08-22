#include<iostream>
using namespace std;
class Student{
    private:
        string first_name;
        string last_name;
        int student_id;
        int birth_year;
        string course;
        int obtainedMarks;
        float grade;
    public:
        void setDetails(string f_name,string l_name,int id,int year,string sub,int marks){
            first_name=f_name;
            last_name=l_name;
            student_id=id;
            birth_year=year;
            course=sub;
            obtainedMarks=marks;
        }    
        int displayAge(){
            return 2023-birth_year;
        }
        float displayGPA(int obtainedMarks){
            if (obtainedMarks>=80){  grade=4.00;}
            else if (obtainedMarks>=70)  grade=3.00;
            else if (obtainedMarks>=60)  grade=2.00;
            else if (obtainedMarks>=50)  grade=1.00;
            else  grade = 0.00;

            return grade;
        }
        void willGraduate(){
            if(grade==0.00) cout<<"Failed to Graduate"<<endl;
            else cout<<"Graduated"<<endl;
        }
        float updateGPA(float obtainedMarks){
            obtainedMarks = obtainedMarks+(obtainedMarks*0.1);
            return displayGPA(obtainedMarks);
        }
        void printTranscript(){
            cout<<first_name<<" "<<last_name<<endl;
            cout<<"ID="<<student_id<<", Age="<<displayAge()<<endl;
            cout<<updateGPA(obtainedMarks)<<endl;
        }

};
int main(){
    Student student1;
    student1.setDetails("Sakeef","Hossain",220,2003,"CSE4302",86);
    student1.printTranscript();
}