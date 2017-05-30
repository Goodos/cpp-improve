#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
    string input,output,s,s_sub;
    int i = 0;
    cout << "take me input file name: ";
    getline(cin,input);
    cout << "take me output file name: ";
    getline(cin,output);

    ifstream file_in("D:\\123\\" + input); // файл из которого читаем
    ofstream file_out ("D:\\123\\" + output); // файл в который записываем

    if (!file_in)
        return 1;

    while(!file_in.eof())
    {
        file_in >> s;
        if (i == 0) {
            s_sub += s;
            i++;
        }
        else
        {
            if (s == "that" || s == "which")
                s_sub += ", " + s;
            else
                s_sub += ' ' + s;
        }
    }

    file_out << s_sub << endl;

    file_in.close(); // закрываем файл что бы не повредить его
    file_out.close(); //

    cout << "check " + output + " file" << endl; // выводим на экран

    return 0;
}

