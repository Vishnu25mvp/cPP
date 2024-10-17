// Oct 3

/*
1. C++ programming language evolved from c and is emerging  as the standard in software devlopment 
2. Unix and windows application and operating system written in c and c++
3. it support OOPS

*/
//WAP to add two number

// #include "iostream"
// using namespace std;
// int main()
// {
//     int a, b, total;
//     cout<<"Enter a two value:"<<endl;
//     cin>>a>>b;
//     cout<<"Addtion of two number:"<<a+b<<endl;
//     return 1;
    
// } // namespace std


//Overview of Program and structure and sysntax

/*
# are instruction to the  complier to preprocessor.
The include instruction says "What follow the file mentioned " find that file and insert its content right here 
// Comment statements which are ignored by computer but inform reader
#include < header file name>
int main()
{
declaration of variables;
statements;
return 0;
}

*/

//



/*
Programming Fundamental - varibeles, Data type and Control Structures

*/

// Variables:
/*
1. Variables are the containers for storing a data values
2. Every varible in a program is associated wiht a data tyoe that determaines the kind of data it can hold
*/

//Constants
/*
1. constant as the name suggest have fixed value 
*/

//Data Type:
/*
1. integer : to store numeric value in a variable 
            4 bytes (32bit) from memory 
            it range from −2147483648 to 2147483647 (i.e. ±2^31).
2. string : collection of character we can acess through the indexing 
            4 bytes (32bit) from memory
            it range from 5.9 × 10−39 to 3.4 × 1038 (i.e. 2−127 to 2128)
3. float : it use to store the decimals value 
4. booleans : it is use to store ethire true or False the internal values are 0 and 1
4. character : it use to store a character in a varible 
        character take 1 bytes(8bit) form memory 
*/



// #include "iostream"

// int main(){
//     int x = 5;
//     std::string name = "john";
//     float pi = 3.12;
//     bool isvaild= true;
//     char a = 'a';
//     long b = 15.001;
//     double c = 12.256;


//     std::cout<<"interger:"<<x<<std::endl;

//     std::cout<<"float:"<<pi<<std::endl;

//     std::cout<<"String:"<<name<<std::endl;

//     std::cout<<"Boolean:"<<isvaild<<std::endl;

//     std::cout<<"Character:"<<a<<std::endl;

//     std::cout<<"Long data type :"<<b<<std::endl;

//     std::cout<<"Double :"<<c<<std::endl;

//     return 1;
    


// }


//Assignment Statement 
/*
The most common operator use to assign a value is = (assignment operator)

syntax:

Varibale = value;
varibale = Experssion;
*/

// #include "iostream"

// int main()
// {
//     //Experssion
//     int a = 4+2;
//     //Value
//     int b = 5;
//     std::cout<<a<<std::endl;
//     std::cout<<b<<std::endl;
//     return 1;

// }


//Arthmatic Oprator 

// A expersion is combination of varible,value, operator and bracket
// the commony used for simple math operation are 

// Addtion : +
// Subration: -
// Mutiple : *
// Division: /
//modulo : %


// #include "iostream"

// void add_ar(){
//         int a,b;
//         std::cout<<"Enter a value :";
//         std::cin>>a;
//         std::cout<<"Enter a value";
//         std::cin>>b;
//         std::cout<<"addtion:"<<a+b<<std::endl;
//         std::cout<<"subration:"<<a-b<<std::endl;
//         std::cout<<"muti:"<<a*b<<std::endl;
//         std::cout<<"division:"<<a/b<<std::endl;

// }

// void add_f(){
//         float a,b;
//         std::cout<<"Enter a value :";
//         std::cin>>a;
//         std::cout<<"Enter a value";
//         std::cin>>b;
//         std::cout<<"addtion:"<<a+b<<std::endl;
//         std::cout<<"subration:"<<a-b<<std::endl;
//         std::cout<<"muti:"<<a*b<<std::endl;
//         std::cout<<"division:"<<a/b<<std::endl;
// }


// int main(){
        
//         add_ar();
//         add_f();
//         return 0;
        
// }


// Control Statement 

/*
In many program the value of the varible need to tested and
depending on the result diffrent statement need to excuted

This facility can be used to select among alternative's course of action 

It can also used to build loops for repetition of basic actions
*/

//Boolean Expersion and relational operator 

/*
in every program the testing of the condition is done with boolean expersion 
which yield bool values are either True or False 

The simplest and most common way to construct such an epression os to use 
so called reltional operator 

*/

/*
EX:
        x== y : True if x and y are equal 
        x!=y : True if x and y are not same
        x>y : True of the x is greater then y 
        x<y: True if the x smallest then y
        x>= : true if the x is greater or equal to y 
*/

//Note : Avoid mixed-type comparsion if x is float point number and y 
//is an integer the equality tests will not work as expected


// Compound or combination boolean expersion using logical opearator 

// operator        C++ symbol      example
// AND             &&              exp1 && exp2
// OR              ||              exp1 || exp2
// NOT             !               ! expersion

// IF selection control statement 

/*
The simplest and most common selection structure is the if statement 
which is written in a statement of the form:


syntax:
        if (boolean-expersion) 
        statement;

The if condition test for a particular condition and only excute the 
following statement if the condition is true
*/

// #include "iostream"
// using namespace std;

// int main(){
//         int a ;
//         cout<<"Enter a value to find positive or negative:";
//         cin>>a;
//         if (a >0)
//         cout<<"It is positive number"<<endl;
//         else
//         cout<<"it is negative number"<<endl;
//         return 0;
// }

//wap program to find even number or odd number

// #include "iostream"
// using namespace std;

// int main(){
//         int a;
//         cout<<"Enter a  value :";
//         cin>>a;
//         if (a%2 == 0 )
//         cout<<"Even number"<<endl;
//         else
//         cout<<"odd Number";
//         return 1;
        
// }

//Nested if 

//which one is greatest amougn three

// #include "iostream"
// using namespace std;
// int main(){
//         int a,b,c;
//         a = 10;
//         b=40;
//         c= 10;
//         if (a>b) {
//                 if (a>c){
//                         cout<<"Gratest number is"<<a<<endl;

//                 }
//                 else{
//                         cout<<"Greatest number"<<c<<endl;
//                 }
//         }
//         else if (b>a){
//                 if (b>c){
//                         cout<<"greates number"<<b<<endl;
//                 }
//                 else{
//                         cout<<"Greatest number"<<c<<endl;
//                 }
//         }
//         else{
//                 cout<<"Greatest number"<<c<<endl;
//         }
        

//         return 1;
// }

/*
Switch multiple selection statement
*/
/*
instead of using multiple if/else statements C++ also provides special 
controll structure switch

fot a varible x the switch(x) statement whether x is equal to the constant 
values x1,x2,x3..etc varible does not have any of the value listed

the break satement causes the program to procces to frist statement after the switch 
structure . Note that the switch control structure us diffrenet to the other 
in that braces are not required around the mutiple statement 
*/

//Wap for a simple calculator 

// #include "iostream"

// int main(){
//         float a,b,result;
//         char operation;
//         std::cin>>a>>operation>>b;
//         switch (operation)
//         {
//         case '+':
//                 result = a+b;
//                 break;
//         case '-':
//                 result = a-b;
//                 break;
//         case '*':
//                 result = a*b;
//                 break;
//         case '/':
//                 result = a/b;
//                 break;
        
//         default:
//                 std::cout<<"Invail value";
//                 break;
//         }
//         std::cout<<result;
// }



//While repetition control statement
/*
While control statement allow the programmer to specify actions which are 
to be repeated while some condition is true. In the while repetition structure
*/

//Syntax

/*
while (boolean_expersion)
{
        statements;
}
*/

//WAP to sum of number input at the keyboard
// the input is terminated when input number is negative

// #include "iostream"

// int main(){
//         int number = 0,loop_var;

//         std::cout<<"Enter number to be added"<<std::endl;
//         std::cin>>loop_var;
//        while (loop_var >=0.0){
//                 number = number+ loop_var;
//                 std::cin>>loop_var;
//        }
//        std::cout<<number;
//        return -1;
// }


//Increment and Decrement Operator 
/*
Increasing and decreasing the value of an integer variable is a commonly used method for
counting the number of times a loop is executed. C++ provides a special operator ++ to
increase the value of a variable by 1. The following are equivalent ways of incrementing a
counter variable by 1.

*/

//syntax

// a++ or a--


// #include "iostream"
// using namespace std;

// int main(){
//         int a,b,c;
//         a=0;
//         b=0;
//         c=0;
//         for(int i=5;i>=0;i--){
//                 a++;
//                 b++;
//                 c++;

//         }
//         cout<<a<<b<<c;
//         return 0;
// }

// #include "iostream"
// using namespace std;
// int main(){
//         int a=0;
//         while (a<=5){
//                 cout<<a<<endl;
//                 a++;
//         }
//         return -1;
// }

// For repitation control statement 

// In while loop we use looping varible but in for loop we don't need any looping varible 
// because for have three stage one is varible initialiser then boolean condition finally it have increment oprator 

//wap to print 10 number using for loop

// #include "iostream"
// using namespace std;

// int main(){
//         for(int i=1;i<=10;i++){
//                 cout<<i<<endl;
//         }
//         return -1;
// }

//Functions

/*
Function is set of code to perfrom a task or operation 
we can reuse the code whenever we want 
it make the whole program into chunck's
*/

//syntax

/*
return_value_type function_name(prameter-list)
{
        decalaration of local varibles;
        statements;
        return return_values
}
*/

//wap to find the factorial of given number

// #include "iostream"
// using namespace std;
// int factorial(int factorial){
//         int i, number =1;

        
//         for(i=1;i<=factorial;i++){
//                 number *= i;


//         }
//         // cout<<number<<endl;
//         return number;
// }

// int main(){
//         int f;
//         cout<<"Enter number to find factorial:"<<endl;
//         cin>>f;
//         int result = factorial(f);
//         cout<<"Factorial of "<<f<<" is "<<result;
//         return 1;
// }


// #include "iostream"
// using namespace std;

// int swap(int &a,int &b){

//         int x;
//         x = a;
//         a = b;
//         b = x; 
//         return 1;
// }

// int main(){
//         int a=9,b=10;
//         swap(a,b);
//         cout<<a<<"\n"<<b;     return 1;
// }

/*
instance of using call by value we can use call by reference that allow the user to not only to read 
we can change the value of the varible 
*/

//Math library(cmath)


/*
Function Description
sqrt(x) square root
sin(x) trigonometric sine of x (in radians)
cos(x) trigonometric cosine of x (in radians)
tan(x) trigonometric tangent of x (in radians)
exp(x) exponential function
log(x) natural logarithm of x (base e)
log10(x) logarithm of x to base 10
fabs(x) absolute value (unsigned)
ceil(x) rounds x up to nearest integer
floor(x) rounds x down to nearest integer
pow(x,y) x raised to power y
*/

// pow, sqrt , ceil and floor

// #include "iostream"
// #include "cmath"
// using namespace std;
// int main(){
//         int a = 20;
//         float b =sqrt(a);
//         int p = pow(a,2);
//         float c =5.6;
//         c =ceil(c);

//         cout<<b<<"\n"<<p<<"\n"<<c<<endl;
//         return 0;

// }

// fabs and expodentenal function

// #include "iostream"
// #include "cmath"
// using namespace std;

// int main(){
//         int a = -10;
//         cout<<"Fabs is use to find the abs value"<<fabs(a)<<endl;
//         cout<<"expodoetenal's :"<<exp(a)<<endl;
//         return -1;
// }

// #include <iostream>

// struct 
// {
//         /* data */
//         std::string name ; 
//         int age ;
// }Student;


// int main(){
//         Student.name = "v";
//         Student.age = 25;  
//         // std::cout<<Student<<std::endl;
//         std::cout<<Student.name<<std::endl;
//         std::cout<<Student.age<<std::endl;
//         return 1; 
// }


//

//what is structure in c++?

/*

*/

// #include <iostream>

// struct  Student
// {
//         /* data */
//         std::string name; 
//         int age;
// };


// int main(){
//         Student s1;
//         s1.name ="vishnu";
//         s1.age =5;
//         // std::cout<<Student<<std::endl;
//         std::cout<<s1.name<<std::endl;
//         std::cout<<s1.age<<std::endl;
//         return 1; 
// }
//    

// Bank Program > show bal, with draw deposite and exit


// #include "iostream"
// #include "vector"

// struct bank
// {
//         std::string name;
//         float  Total_amt;
//         std::vector<float> transaction;

// };

// float withdraw(float amt, float &Total_amt, std::vector<float>  &tran){
//         if (amt>Total_amt){
//                 std::cout<<"Invaild Fund"<<std::endl;
//                 return 0.0;

//         }
//         else{
//                 Total_amt = Total_amt -amt;
//                 tran.push_back(-amt);
//                 return 0.0l;
//         }


// }
// float deposit(float amt, float &Total_amt, std::vector<float>  &tran){
//         Total_amt = Total_amt +amt;
//         tran.push_back(+amt);
//         return 0.0l;


// }

// float transction(std::vector<float> tan){
//         for(int i=0;i<=tan.size();i++){
//                 std::cout<<tan[i]<<std::endl;
//         }
//         return 0.0;
// }





// int main(){
//         bank b1;
//         std::cout<<"Enter Your Name:"<<std::endl;
//         std::cin>>b1.name;
//         b1.Total_amt =0;
//         b1.transaction.push_back(0);
//         bool a=true;
//         while (a)
//         {
                
        
        
//         std::cout<<"Enter Your Option : "<<std::endl;
//         std::cout<<"1. Balance"<<std::endl;
//         std::cout<<"2. Deposit"<<std::endl;
//         std::cout<<"3. Withdraw"<<std::endl;
//         std::cout<<"4. Transcation"<<std::endl;
//         std::cout<<"5. Exit"<<std::endl;
//         int i;
//         std::cin>>i;

//         switch (i)
//         {
//         case 1:
//                 std::cout<<b1.name<<"Total Balance"<<b1.Total_amt<<std::endl;
//                 break;
//         case 2:
//                 float j;
//                 std::cout<<"Enter Your Amount to be Deposit "<<b1.name<<std::endl;
//                 std::cin>>j;
//                 deposit(j,b1.Total_amt,b1.transaction);
//                 std::cout<<"Your Amount Deposit Sucessfully :"<<j<<std::endl;
//                 break;

//         case 3:
//                 std::cout<<"Enter Your Amount to be Withdraw "<<b1.name<<std::endl;
//                 std::cin>>j;
//                 withdraw(j,b1.Total_amt,b1.transaction);
           
//                 break;
//         case 4:
//                 std::cout<<b1.name<<"Total Transaction"<<std::endl;
//                 transction(b1.transaction);
//                 break;
        
//         case 5:
//                 a = false;
//                 break;
        
//         default:
//                 std::cout<<"Enter Vaild Number"<<std::endl;
//                 break;
//         }
//         }
//         return 0;
// }


// #include "iostream"
// using namespace std;

// int main(){
//         int size;
//         cout<<"Enter the n number of array:"<<endl;
//         cin>>size;
//         int a[size];
//         for (int i=0;i<=size;i++){
//                 cout<<"Enter value for "<<i<<" element :"<<endl;
//                 cin>>a[i];
//         }
//         for (int i =0;i<len(a);i++)
// }

// #include "iostream"
// using namespace std;

// int add(int a,int b){

//         return a+b;
// };

// int main(){
//         int a;
//         a = add(2,2);
//         cout<<a;
//         return a;

// }


#include "iostream"

float display(float x);

int main(){
        float a[9];
        int i =0;
        for(int i =0;i<=9;i++){
                std::cout<<"Enter thr value of "<<i<<" element :"<<std::endl;
                std::cin>> a[i];
        }

        display(a);
        // display(a);
        return 0;
}

float display(float &x){
        for(int i =0;i<=9;i++){
                std::cout<<x[i];
        }
}
