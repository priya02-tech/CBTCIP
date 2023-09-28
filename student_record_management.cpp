
#include<string>
#include<iostream>
using namespace std;

struct student {
    string name;
    string address;
    int roll_number;
    double cgpa;
    
} students[110];

int number_of_students = 0;

void addStudentDetails()
{
  cout<<endl;
    cout<<"New student record :- "<<endl;
    
    cout<<"Enter the Roll Number of the student: "<<endl;
    int roll_no;
    cin>>roll_no;
    
    for(int i = 0; i < number_of_students; i++)
    {
       if(students[i].roll_number == roll_no)
       {
          cout << " Student with the given roll number already exists in the database"<<endl;
          return;
       }
    }
    
    cout<<"Enter the name of the student"<<endl;
    cin>>students[number_of_students].name;
    
    cout<<"Enter the address of the student"<<endl;
    cin>>students[number_of_students].address;
    
    students[number_of_students].roll_number = roll_no;
    
    cout<<"Enter the CGPA of the student"<<endl;
    cin>>students[number_of_students].cgpa;
    
    number_of_students++;
}


void findStudentByRollNumber()
{
    cout<<endl;
    int roll_no;
    cout<<"Enter the Roll Number of the student "<<endl;
    cin>>roll_no;
    
    bool found = false;
    
    for (int i = 0; i < number_of_students; i++) {
        if (roll_no == students[i].roll_number) {
            found = true;
            
            cout<<"The Students Details are:"<<endl;
            
            cout<<"The name is " << students[i].name << endl;
            cout<<"The address is " << students[i].address << endl;
            cout<<"The CGPA is " << students[i].cgpa << endl;
            cout<<endl;
            
            break;
      }
    }
    
    if(!found)
       cout<<"details not found"<<endl;
}

void findTotalStudents()
{
    cout<<endl;
    cout<<"The total number of Students are "<< number_of_students <<endl;
    cout<<endl;
}

int main()
{
    int choice;
    while (true) {
        cout<<"Choices of the tasks that you want to perform : "<<endl;
        
        cout<<"1. Add new Student to the database : "<<endl;
        
        cout<<"2. Search Student by Roll Number : "<<endl;

        cout<<"3. find total no. of students : "<<endl ;
               
        cout<<"4. Exit the program : "<<endl;
        
        cout<<"Enter your choice : ";
        cin>>choice;
        
        switch (choice) {
        case 1:
            addStudentDetails();
            break;
            
        case 2:
            findStudentByRollNumber();
            break;
            
            
        case 3:
            findTotalStudents();
            break;

            
        case 4:
            exit(0);
            break;
       
        }
    }
    
    return 0;
}
