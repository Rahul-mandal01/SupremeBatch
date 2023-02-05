#include<iostream>
using namespace std;

void printName(int n){
    for(int i=1; i<n; i++){
        cout<<"rahul"<<endl;
    }
}


// int main()
// {
//     cout<<"Enter the Number: ";
//     int n; 
//     cin>>n;

//     //FUNCTION CALLING
//     printName(n);
// }

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

// main()
// {
//     int a=1;
//     int b=2;

//     cout<< max(a,b);
// }

void printNumber(int num /*write anything instead of num */ ){
    cout<<num<<endl;
}

// int main()
// {
//     int a=5;
//     printNumber(a);
// }

// FUNCTION TO ADD TWO NUMBERS

int addNumber(int a, int b)     // FUNCTION DECLARATION + DEFINE
{
    int sum= a +b;
    return sum;
}

// int main(){
//     int a,b;
//     cout<< "Pls enter the value of a"<<endl;
//     cin>>a;
//     cout<< "Pls enter the value of b"<<endl;
//     cin>>b;
//     int name= addNumber(a,b);
//     cout<<"Addition result is: "<<name<<endl;
//     return 0;


// RETURN MAXIMUM

int findMax(int num1, int num2, int num3){
    if( num1>num2 && num1>num3 ){
        return num1;
    }

    if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

// int main(){
//     int a,b,c;
//     cout<<"Please enter the number a: ";
//     cin>> a;

//     cout<<"Please enter the number b: ";
//     cin>> b;

//     cout<<"Please enter the number c: ";
//     cin>> c;

//     int max=findMax(a,b,c);
//     cout<<max;
//     return 0;
// }

char getGrade(int marks){
    if(marks>=90)
        return 'A';
    else if(marks>=80)
        return 'B';
    else if(marks>=70)
        return 'C';
    else if(marks>=60)
        return 'D';
    else 
        return 'E';

}

int getSum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }

    return sum;
}

int getEvenSum(int n){
    cout<<"inside the getEvenSum Function"<<endl;
    int sum=0;
    for(int i=2; i<=n; i=i+2){
        cout<<"the value of i is: "<<i<<endl;
        sum=sum+i;
        cout<<"the value of sum is: "<<sum<<endl;
    }
    return sum;
}
        

int main(){



    // int marks;
    // cout<<"Enter the marks: "<<endl;
    // cin>> marks;

    // char finalGrade= getGrade(marks);
    // cout<<finalGrade;



    // int n;
    // cout<< "Enter the Value of n: "<<endl;
    // cin>>n;

    // int ans= getSum(n);
    // cout<<"Sum upto "<<n<<" is: " <<ans<<endl;

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans= getEvenSum(n);
    cout<<ans;

    return 0;

}
