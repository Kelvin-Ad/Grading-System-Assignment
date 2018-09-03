#include <iostream>

using namespace std;
int main()
{
    int grade;
    cout<<"Welcome to the University of Ghana Grading System";
    cout<<"Please enter your examination score";
    cin>>grade;
    switch (grade)
    {
case 1:
    if (grade >=80 && grade <=100)
        cout<<"your grade is A"<<endl;
        break;
case 2:
    if (grade >=75 && grade <=79)
        cout<<"your grade is B+"<<endl;
    break;
case 3:
    if (grade >=70 && grade <=74);
    cout<<"your grade is B"<<endl;
    break;
case 4:
    if (grade >=65 && grade <=69);
    cout<<"your grade is C+"<<endl;
    break;
case 4:
    if (grade >=60 && grade <=64);
    cout<<"your grade is C"<<endl;
    break;
case 5:
    if (grade >=55 && grade <=59);
    cout<<"your grade is D+"<<endl;
    break;
case 6:
    if (grade >=50 && grade <=54);
    cout<<"your grade is D"<<endl;
    break;
case 7:
    if (grade >=40 && grade <=49);
    cout<<"your grade is E"<<endl;
    break;
case 8:
    if (grade >=0 && grade <=39);
    cout<<"your grade is F"<<endl;
    }
return 0;
}
