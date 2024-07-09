
#include <iostream>

using namespace std;

int main(){
int currentYear=2024;
int age;

cout<<"Please enter your age";
cin>>age;

int birthYear= currentYear - age;
cout<<"You were born in "<<birthYear<<endl;

return 0;
}

