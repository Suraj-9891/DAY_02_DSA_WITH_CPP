#include<iostream>
using namespace std;
int main(){
    
    // C++ Assignments 2 | Week1
    /*
    Question 1: find the output for this cde. 
        let input:- 2 3 6
    */
    int x; // 2
    cout << "Enter first number\n";
    cin >> x; // user will give ‘x’ a value.
    int y, m; // 3 6
    cout << "Enter second number and value for taking modulus\n";
    cin >> y >> m; // user will give ‘y’ a value.
    int Z = (x * y) % m;
    cout << "Output is: " << Z; // 0

    /*
    Q1: output
        Output is : 0
    */

    /*
    Question 2: Find the output for this code. Let input:- 3 2
    */
    
    int x;
    cout<<"Enter first number\n";
    cin>>x; // user will give 'x' a value.
    int y;
    cout<<"Enter second number\n";
    cin>>y; // user will give 'y' a value.
    cout<<(x!=y)<<" "<<(x>=y); // 1 1

    /*
    Q2: Output:
        1 1 
    */
    

    /*
    Question 3: Find the output for this code. Let input:- 2 3
    */
    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;

    /*
    Q3: Output:
        2
    */


    /*
    Question 4: WAP for finding the volume of the cylinder by taking radius and height as input.
    */
    
    float radius, height,pi=3.14;
    cout<<"Enter the radius of cylinder : "<<endl;
    cin>>radius;
    cout<<"Enter the height of cylinder : "<<endl;
    cin>>height;
    float volume = pi*radius*radius*height;
    cout<<"The Volume of cylinder = "<<volume<<endl;


    /*
        Question 05: WAP to find the difference between ASCII of two characters ,take them as input.?
    */
    
    char a,b;
    cout<<"Enter a first char in aplhabet : "<<endl;
    cin>>a;
    cout<<"Enter a Second char in aplhabet : "<<endl;
    cin>>b;
    cout<<"The value of char = "<<a<<endl;
    cout<<"The value of char = "<<b<<endl;
    cout<<"The value of a-b = "<<a-b<<endl;

    /*
    Q5: Output:
        Enter a first char in aplhabet :
        A
        Enter a Second char in aplhabet :
        B
        The value of char = A
        The value of char = B
        The value of A-B = -1
    */

    /*
    Question 06:Find the output of the below code

    */
    int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
    cout<<"The value of I = "<<i<<endl;

    /*
    Q6: Output:
        The value of I = 49
    */










    return 0;
}