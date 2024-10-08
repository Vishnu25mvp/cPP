/*
1) CGPA Calculator
The CGPA Calculator in C++ is a program designed to compute a student’s Cumulative Grade Point Average (CGPA). By taking user input on various course grades and credits, the program determines the overall CGPA. Additionally, it offers insights into individual course grades, calculates total credits, grade points, semester GPA, and finally presents the CGPA.

Technologies Utilized:

C++ programming language
Data Structures
Basic Searching & Sorting algorithms
Arithmetic Operations and Formulas
File Handling (I/O Streams)
*/

/*
Notes:
1. frist of all get user value form the user it's how many semster they have (i.e art:6sem be: 8sem)
2. Based on the above value we need to get semester mark one by one then store them in a array
3. finally add all the value and divide with no of sem store them in a varible int or float then return it 
*/

#include "iostream"

int CGPA(){
    int no_of_sem;
    std::cout<<"Enter Number of Semster You have:";
    std::cin>>no_of_sem;
    float mark[no_of_sem],total=0,avg=0;
    for(int i=1;i<=no_of_sem;i++){
        std::cout<<"Enter your "<<i<<" precentage's :";
        std::cin>>mark[i];
        total += mark[i];

    }
    for(int i=1;i<=no_of_sem;i++){
        std::cout<<"Your "<<i<<" precentage :"<<mark[i]<<std::endl;
    }
    // std::cout<<"your Total precentage are:"<<total<<std::endl;
    avg =(total/no_of_sem)/10;
    std::cout<<"Your CGPA is "<<avg<<std::endl;


}

int main(){
    CGPA();
}