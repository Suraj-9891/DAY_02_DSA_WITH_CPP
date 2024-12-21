/*
    C++
    Input & Operators
    Lecture- 2

    Today’s checklist 
    1) Taking Input
    2) Operators
    3) Typecasting
    4) Hierarchy of operators
    5) Char and ASCII 

*/
#include<iostream>
using namespace std;
int main(){
    /*
    # Taking input // Let us take a simple example
    Question 01: Write a Program to find square of Number.?
    */
    int x;
    cout<<"Enter the any Number to find Square : "<<endl;
    cin>>x;
    int s = x*x;
    cout<<"The Value of Square = "<<s<<endl;

    /*
    Q1: Output:
        Enter the any Number to find Square :
        5
        The value of Square = 25
    */


    /*
    Question 2: Write a Program to take two user input And Create the Simple Calculator.?
    */
    
    int a,b;
    cout<<"Enter a first Number : "<<endl;
    cin>>a;
    cout<<"Enter a Second Number : "<<endl;
    cin>>b;
    cout<<"The value of a+b = "<<a+b<<endl;
    cout<<"The value of a-b = "<<a-b<<endl;
    cout<<"The value of a*b = "<<a*b<<endl;
    cout<<"The value of a/b = "<<a/b<<endl;
    cout<<"The value of a%b = "<<a%b<<endl;


    /*
    Q2: Output:
        Enter a first Number :
        5
        Enter a Second Number : 
        2
        The value of a+b = 7
        The value of a-b = 3
        The value of a*b = 10
        The value of a/b = 2
        The value of a%b = 1
    
    */


   /*
   # Types of Operators 
    
    ● Arithmetic Operators(already done in last lecture)
    ● Relational Operators
    ● Logical Operators (will be covered in IF-ELSE)
    ● Assignment Operators
    ● Bitwise Operators (will be covered in bit 
    Manipulation)
   
   */

    /*
    1. C++ Relational Operators

        ● == Is Equals to
        ● ! Not Equals to
        ● > Greater Than
        ●  Less than 
        ● <=Greater than or equals to 
        ● <=lesser than or equal to
    
    
    */

   /*
   
   Question 3: Write a Program to Implement the Realtional
    Operators and perform the all operations.?
   */
    int x,y;
    cout<<"Enter a first Number : "<<endl;
    cin>>x;
    cout<<"Enter a Second Number : "<<endl;
    cin>>y;
    cout<<"The value of  Is Equals to : "<<(x==y)<<endl;
    cout<<"The value of  Not Equals to : "<<(x!=y)<<endl;
    cout<<"The value of lesser than or equal  : "<<(x>y)<<endl;
    cout<<"The value of Greater Than: "<<(x<y)<<endl;
    cout<<"The value of Greater than or equals to  : "<<(x>=y)<<endl;
    cout<<"The value of lesser than or equal to: "<<(x<=y)<<endl;
    

    /*
    Q3: Output:
        The value of Is Equals to : 0
        The value of Not Equals to : 1
        The value of Lesser than or equal : 1
        The value of Greater Than : 0
        The value of Greater than or equals to : 1
        The value of lesser than or equal to : 0
    */
    

    
   /*
    # C++ Assignmenet Operator.
       ●  =
       ● +=
       ● -=
       ● /=
       ● %=

    Question 4: Write a Program to Implement the Assignment
    Operators and perform the all operations.?
   */

    int x, y;
    cout<<"Enter a first Number : "<<endl;
    cin>>x;
    cout<<"Enter a Second Number : "<<endl;
    cin>>y;
    cout<<"The value of '=' "<<(x=y)<<endl;
    cout<<"The value of '+=' "<<(x+=y)<<endl;
    cout<<"The value of '-=' "<<(x-=y)<<endl;
    cout<<"The value of '/=' "<<(x/=y)<<endl;
    cout<<"The value of '%=' "<<(x%=y)<<endl;
    
    
    
    /*
    Question 05: What is the the result of the following code fragment.?
        bool p = false;
        bool q = false;
        bool r = true;
        cout<<(p <= q <= r);
        Output: 1

    */
    //char data type

    /*
    # ASCII Values
        'A' to 'Z' -->> 65 to 90
        'a' to 'z' -->> 97 to 122
         '0' to  '9' -->> 48 to 57

    */

    /*
    Question 06: Write a Program to Take integer as input and print half of the number.?
    */
    int x;
    cout<<"Enter the integer number : "<<endl;
    cin>>x;
    int half = x/2;
    cout<<"The value of half number : "<<half<<endl;
    
    /*
    Q6: output:
        Enter the integer number : 
        5
        The value of half number : 2
    */
    
    /*
    Question 07: Take float input and print the fractional part of the real number.?
    */
    float a;
    cout<<"Enter the float number : "<<endl;
    cin>>a;
    int firstNo = a;
    float lastNo = a-firstNo;
    cout<<"The value of first Integer number : "<<firstNo<<endl;
    cout<<"The value of last float number : "<<lastNo<<endl;
    
    /*
    Q7: output
        Enter the float Number :
        7.6
        The value of first integer number : 7
        The value of last float number : 0.6
    */
   
   /*
   Question 08: Hierarchy of Operators.?

   */

    int i = 2*3/4+4/4+8-2+5/8;
    cout<<"The value of number = "<<i<<endl;


    /*
    Q9: Output:
        The value of number = 8
    */

    int num1;
    int p = 5, q = 10;
    p += q -= p;
    cout<<"The value of p and q = "<<p<<" "<<q<<endl;

    /*
    Q10: output:
        The value of p and q = 10 5
    */

   /*
    # Try This!
    Predict the output :
   */
  
    int i = 2, j = 3, k, l;
    float a, b; 
    k = i / j * j ; 
    l = j / i * i; 
    a = i / j * j ;
    b = j / i * i; 
    cout<<k<<" "<<l<<" "<<a<<" "<<b;

    /*
    Q10: Output:
        0 2 0 2
    */


   /*
   MCQ Time !
   MCQ 1
    Which of the following is NOT a character constant 
    (1) ‘Thank You’ 
    (2) ‘Enter values of P, N, R’ 
    (3) ‘23.56E-03’ 
    (4) All the above

    Ans :- 4



    MCQ 2
    The expression, a = 7 / 22 * ( 3.14 + 2 ) * 3 / 5 ; evaluates to
    (1) 8.28 
    (2) 6.28 
    (3) 3.14 
    (4) 0

    Ans :- 4
   

   MCQ 03

   The expression x = 4 + 2 % - 8 evaluates to 
    (1) -6 
    (2) 6 
    (3) 4 
    (4) None of the above 
   
   */
    

    // THANK YOU




    return 0;

}
