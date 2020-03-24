//
// Created by Léa Anne Buendé on 24/03/2020.
//

#define TP4_SOUP_H
#include <iostream>

using namespace std;

class Vegetable {
protected:
    double poids;
public:
    Vegetable(int a);
    virtual ~Vegetable();
    virtual void print();
};

class Carrot : public Vegetable {
private:
    double poids;
    double taille;
public:
    Carrot();
    //friend ostream& operator<<(ostream& os, const Carrot& carrot);
    Carrot(double a, int b);
    Carrot(const Carrot& a_copier);
    virtual void print();

    ~Carrot(){}
};

class Potatoe : public Vegetable{
private:
    double poids;
    int yeux;

public:
    Potatoe();
    Potatoe(double a, int b);
    Potatoe(double a);
    virtual void print();

   // friend ostream& operator<<(ostream& os, const Potatoe& potato);
    virtual ~Potatoe(){}
};

/*ostream& operator<<(ostream& os, const Potatoe& potato)
{
    os <<"Potatoe : ["<<potato.poids<<"kg - "<<potato.yeux<<" yeux]";
    return os;
}

ostream& operator<<(ostream& os, const Carrot& carrot)
{
    os<<"Carotte : ["<<carrot.poids<<"kg - "<<carrot.taille<<"cm]";
    return os;
}




#endif //TP4_SOUP_H
*/