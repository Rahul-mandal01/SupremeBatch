#include<iostream>
using namespace std;


// function Declaration + Define
void printName(){
    int n;
    cout<<"Enter the value of n "<<endl;

    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Rahul"<<endl;
    }
}

void printNumber(int num){
    cout<<num<<endl;
}

// Only Function Declaration
int add(int a, int b);

// function Declaration + Define

int findMax(int num1, int num2, int num3){
    if( num1>num2 && num1>num3){
        return num1;
    }

    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

// "n" is parameter
void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}


char getGrade(int marks){
    // if(marks>=90)
    //     return 'A';
    // else if(marks>=80)
    //     return 'B';
    // else if(marks>=70)
    //     return 'C';
    // else if(marks>=60)
    //     return 'D';
    // else
    //     return 'E';

    switch(marks/10){
        case 10: return 'A' ; break;
        case 9: return 'A' ; break;
        case 8: return 'B' ; break;
        case 7: return 'C' ; break;
        case 6: return 'D' ; break;
        default: return 'E';
    }
}

int getSum(int n){
    cout<<"inside the getSum function"<<endl;
    cout<<"value of n is "<<n<<endl;

    int sum = 0;
    cout<<"Initial value of sum is "<<sum<<endl;
    for(int i=2; i<=n; i=i+2){
        cout<<"For Value of i: "<<i<<endl;
        sum = sum + i;
        cout<<"Sum now becomes: "<< sum<<endl;
    }

    cout<<"returning sum = "<<sum<<endl;
    return sum;
}

int main(){

    // int n;
    // cout<<"Enter the value of n "<<endl;
    // int a=5;
    // cout<<"address of a is: "<< &a<<endl;

    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Rahul"<<endl;
    // }

    // cout<<"Enter the value of n "<<endl;

    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Rahul"<<endl;
    // }

    // cout<<"Enter the value of n "<<endl;

    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Rahul"<<endl;
    // }

    // function call

    // printName();
    // printName();

    // printNumber(a);

    // Sum of two numbers

    // int a,b;

    // cout<<"Enter the value of a:" <<endl;
    // cin>>a;
    // cout<<"Enter the value of b:" <<endl;
    // cin>>b;

    // int sum = add(a,b);

    // cout<<"Addition result is: "<<sum<<endl;

        // Find maximum no
    // int a, b, c;
    // cin>> a>> b>> c;
    
    // int maximumNumber = findMax(a,b,c);
    // cout<<maximumNumber<<endl;




    // Printing counting from 0 to n

    // int n;
    // cout<<"Enter the value of n: "<<endl;
    // cin>>n;
    //     // n is argument
    // printCounting(n);
    


    // Students & Grade Problem
    // int marks;
    // cout<<"Enter the marks: "<<endl;
    // cin>>marks;

    // char finalGrade = getGrade(marks);
    // cout<<finalGrade<<endl;

    // for(int i=0; i<=100; i++){
    //     char ans = getGrade(i);
    //     cout<<"Grade for marks " << i << " is " <<ans <<endl;

    // }


    // sum of Even nos sum
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int  ans = getSum(n);

    cout<<" Sum upto " << n<< " is "<<ans<<endl;



    return 0;
    


}

// function definition
int add(int a, int b){
    int result = a+b;
    return result;
}