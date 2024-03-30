// ProgramCPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// reading a text file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(NULL, "ru");

    string line;
    ifstream myfile("history_mirror.txt");
    setlocale(NULL, "ru");
    if (myfile.is_open())
    {

        while (getline(myfile, line)) {
            cout << line << endl;
            if (line== "error")
            {
                cout << line << endl;
            }
        }
        myfile.close();
        
    }


    else cout << "Unable to open file";

    return 0;
}
