#include <iostream>
using namespace std;

int main() {
    int alturaEucalipto = 110; 
    int alturaPalmeira = 150;  
    int anos = 0;

    while (alturaEucalipto <= alturaPalmeira) {
        alturaEucalipto += 3; 
        alturaPalmeira += 2;  
        anos++;
    }

    cout << "Serao necessarios " << anos << " anos para que o Eucalipto ultrapasse a Palmeira." << endl;

    return 0;
}
