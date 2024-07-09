#include <iostream>

using namespace std;

int main(){
    //Ask for the user's height in centimeters
double height, weight,bmi;

cout<<"Enter your height in centimetres: "<<endl;
cin>>height;
//Ask for the user's weight in kilograms
cout<<"Enter your weight in kilograms: "<<endl;
cin>>weight;

//Calculate BMI
height/=100;
bmi=weight/ (height * height);
//Display BMI
cout<< "Your BMI is: "<<bmi<< "kg/m^2" <<endl;
//Determine weight status based on BMI
if (bmi<18.5){
    cout<<"You are underweight."<<endl;
}else if (bmi>= 18.5 && bmi<=24.9){
        cout<<"Your weight is normal."<<endl;
}else if (bmi>= 25 && bmi<=29.9){
        cout<<"You are overweight."<<endl;
}else if (bmi>= 30 && bmi<=39.9){
        cout<<"You are obese."<<endl;
}else if (bmi>= 40)
        cout<<"You are mordibly obese."<<endl;

return 0;

}


