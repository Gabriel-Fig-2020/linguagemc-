#include <iostream>
#include <stdio.h> //para gets
#include <stdlib.h>//pp malloc
using namespace std;

int main() {

    char *vnome;
    vnome=(char *) malloc(sizeof(char));
    gets(vnome);
    cout << vnome;
    return 0;
}