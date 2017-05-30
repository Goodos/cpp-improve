#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
    string input,output,s,s_sub;
    char s_buff[255];

    cout << "take me input file name: ";
    getline(cin,input);
    cout << "take me output file name: ";
    getline(cin,output);

    ifstream file_in("D:\\123\\" + input); // файл из которого читаем
    ofstream file_out("D:\\123\\" + output); // файл в который записываем

    if (!file_in)
        return 1;

    while (!file_in.eof()) {
        file_in.getline(s_buff,255);
        s = s_buff;
        s_sub = s + "\n" + s_sub;
        //file_out.clear();
        //file_out.seekp(0,ios::beg);
        //file_out << s;
    }

    file_out << s_sub;
    file_in.close(); //
    file_out.close(); // закрываем файлы что бы не повредить

    cout << "check " + output + " file" << endl; // выводим на экран

    return 0;
}

