#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


void reverseCharArray(char name[]) {
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main(){
    // char name[100];
    // cout << "Enter your name: ";
    // cin>>name;

    // cout<<"Welcome "<< name << "!"<<endl;

    // char ch[100];
    // ch[0]= 'a';
    // ch[1]= 'b';
    // cin >> ch[2];

    // cout << ch[0] << ch[1] << ch[2] << endl;

    // char name[100];
    // cin >> name;

    // for(int i=0; i<6; i++){
    //     cout << "index: "<< i << " value: "<< name[i]<< endl;
    // }

    // int value = (int) name[6];
    // cout<< "value is: "<< value << endl;

    // char name[100];
    // cin >> name;
    // getline(cin, name);
    // cin.getline(name, 100);
    // cout << name << endl;

    return 0;
}