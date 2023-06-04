/*3	(a)	Write a program using a generic function or a generic class for obtaining student information
(Regno, Name, Department, Performance and Gender, etc). Get input from the user for each field. Where the
performance field may be mark in percentage, CGPA or Grade (‘S’, ‘A’,’B’,’E’,’F’) for different student.*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>

class gradeing{
    
    string name, department, gender;
    T performance;

    void getinput{

        cout<<"what is your Name";
        cin>>name;
        cout<<"what is your department";
        cin>>department;
        cout<<"what is your gender";
        cin>>gender;
        cout<<"what is your performance system";
        cin<<performance;
    };

    void giveOutput{
        cout<<"your name is - ";
    };

};