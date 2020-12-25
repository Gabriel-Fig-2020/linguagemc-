#include <iostream>
using namespace std;
 
int main(){

    int array[3][4];

    array [0][0]=0;
    array [0][1]=0;
    array [0][2]=0;
    array [0][3]=0;

    array [1][0]=1;
    array [1][1]=1;
    array [1][2]=1;
    array [1][3]=1;

    array [2][0]=2;
    array [2][1]=2;
    array [2][2]=2;
    array [2][3]=2;

    // array [3][0]=3;
    // array [3][1]=3;
    // array [3][2]=3;
    // array [3][3]=3;

    int i;
    int j;

    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<4; j++ ){
            cout << array[i][j] << " ";
            }      
        cout << "\n";
    }
    return 0;
}