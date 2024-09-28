#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

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


    //---------------------STRING---------

    // CREATE STRING
    // string str;

    // STRING INPUT
    // getline(cin, str);

    // PRINT STRING
    // cout << "String: " << str << endl;
    // cout<< "Length: " << str.length() << endl;
    // cout<< "isEmpty: " << str.empty() << endl;

    // str.push_back('A');
    // cout<< "After push_back: " << str << endl;

    // str.pop_back();
    // cout<< "After pop_back: " << str << endl;

    // cout<< str.substr(2, 5) <<endl;

    // string a = "LOVE";
    // string b = "BABBAR";

    // if(a.compare(b) == 0){
    //     cout<< "a and b are exactly the same strings"<<endl;
    // }
    // else{
    //     cout<< "a and b are not exactly the same strings"<<endl;
    // }

    // string x = "cbcd";
    // string y = "bcda";

    // cout<< x.compare(y)<<endl;

    // string sentence = "hello jee kaise ho saare";
    // string target = "hojjj";

    // cout<< sentence.find(target);

    // if(sentence.find(target) == string::npos){
        // cout<< "Target not found in the sentence."<<endl;
    // }

    // string str = "This is my first message";
    // string word = "Babbar";
    // str.replace(0, 4, word);
    // str.replace(11, 5, "Second");

    // cout<< str <<endl;

    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    str.erase(10,10 );
    cout<< str <<endl;

    return 0;
}