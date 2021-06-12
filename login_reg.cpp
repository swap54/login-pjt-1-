#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void isLoggedIN(){
    string username,password, un, pw;
    cout<<"Enter username: "; cin>>username;
    cout<<"Enter password: "; cin>>password;

    ifstream read;
    read.open("./"+username+".txt");
    read>>un;
    read>>pw;
    if(un==username && pw==password){
        cout<<"Succesfully logged in...\n";
    }
    else{
        cout<<"False login\n";
    }
}

int main(){
    int choice;

    cout<<"1: Register\n2: Login\n Enter your choice:"; cin>>choice;
    if(choice==1){
        string username, password;
        cout << "select a username: "; cin>> username;
        cout << "select a password: "; cin>>password;

        ofstream file;
        file.open("./"+ username +".txt");
        file<<username<<endl<<password;
        file.close();

        main();
    }
    else if(choice==2){
      isLoggedIN();
       main();
    }
}