#include <iostream>
#include "soup.h"

using namespace std;
int main() {
    /*std::cout << "Hello, World!" << std::endl;
    Carrot c = Carrot(0.25, 30);
    c.print_carrot();
    Potatoe pdt = Potatoe (0.3, 10);
    cout<<" "<<endl;
    pdt.print_potatoe();
    Potatoe pdt2 = Potatoe (0.45);
    cout<<" "<<endl;
    pdt2.print_potatoe();*/

    Vegetable * pdt = new Potatoe(0.3, 10);
    Vegetable * c = new Carrot(0.25, 30);




    return 0;
}
