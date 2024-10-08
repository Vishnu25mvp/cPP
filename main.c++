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