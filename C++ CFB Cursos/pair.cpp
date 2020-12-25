#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    const int tam = 3;
    pair <int,string> par(10, "Gabriel"), par2[tam];

    cout << par.first << " - " << par.second << endl;
    par2[0].first=100;
    par2[0].second="Hello";

    par2[1].first=150;
    par2[1].second="World";


    par2[2]=make_pair(10,"top");

    cout << par2[0].first << "-" << par2[0].second << endl;
    cout << par2[1].first << "-" << par2[1].second << endl;
    cout << par2[2].first << "-" << par2[2].second << endl;
	return 0;
}
