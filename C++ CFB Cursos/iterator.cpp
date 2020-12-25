#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};
    it=produtos.begin(); // end()-1

    //next
    //prev
    //advance(it,2);
    //cout<< *next(it,3);
    for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++){
        cout << *it << endl;
    }

	return 0;
}