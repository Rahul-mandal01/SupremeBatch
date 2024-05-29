#include<iostream>
using namespace std;

float areaOfCircle(float r){
    float result = 3.14*r*r;
    return result;
}

int main(){

    float r;
    cout<<"Please enter the radius of circle: ";
    cin>>r;


    if( r <= 0)
        cout<<"You have given wrong input, Please Try Again " <<endl;
    
    else{
        float area = areaOfCircle(r);
        cout<<"The Area of Circle is: "<<area<<endl;
    }


    return 0;
}