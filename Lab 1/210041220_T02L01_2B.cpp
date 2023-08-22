#include<iostream>
using namespace std;
class Book{
    private:
        string title;
        string author;
        int publication_year;
        bool status;
    public:
        void setDetails(string book_name,string author_name,int year){
            title=book_name;
            author=author_name;
            publication_year=year;
            

        }   
       bool checkOut(){
            status = false;
       }  
       bool checkIn(){
            status = true;
       }
       bool isClassic(){
            int check=2023-publication_year;
            if(check>50) return true;
            else return false;
       }
       void displayStatus(){
        cout<<"Book Name : "<<title<<endl;
        cout<<"Author name  :" <<author<<endl;
        cout<<"Publication Year:"<<publication_year<<endl;
        if(status==true)
        cout<<"status of the book AVAILABLE"<<endl;
        else
        cout<<"status of the book UNAVAILABLE"<<endl;

        if(isClassic()){cout<<"A CLASSIC"<<endl;}
        else cout<<"NOT A CLASSIC"<<endl;
       }


};
int main(){
    Book book1;
    book1.setDetails("Verity","Colleen",2018);
    book1.isClassic();
    book1.displayStatus();
}