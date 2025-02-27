#include <iostream>
#include <windows.h>
#include <fstream>

#include "samira.h"
#include "bulders/builderText.cpp"
#include "bulders/builderMD.cpp"
#include "bulders/builderHTML.cpp"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Builder *djamshut = new BuilderText;
    Samira samira = Samira(djamshut);
    ofstream f;

    samira.makeSite();
    f.open("output/samira.txt");
    f << djamshut->getResult() << endl;
    f.close();

    djamshut = new BuilderMarkDown;
    samira.changeBuilder(djamshut);
    samira.makeSite();
    f.open("output/samira.md");
    f << djamshut->getResult() << endl;
    f.close();

    djamshut = new BuilderHTML;
    samira.changeBuilder(djamshut);
    samira.makeSite();
    f.open("output/samira.html");
    f << djamshut->getResult() << endl;
    f.close();

    delete djamshut;
}