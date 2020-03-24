//
// Created by Léa Anne Buendé on 24/03/2020.
//

#include "soup.h"

Vegetable :: Vegetable(int a): poids(a){}
void Vegetable :: print() {
    cout <<"Légume :"<<poids<<"kg - "<<endl;
}

Carrot :: Carrot(): Vegetable(0),taille(0.2) {}
Carrot :: Carrot(const Carrot & a_copier): taille(a_copier.taille), Vegetable(a_copier.poids){
    poids = a_copier.poids;
    taille = a_copier.taille;
}
Carrot :: Carrot(double a, int b): Vegetable(a), taille(b){}

void Carrot :: print(){
    cout <<"Carotte : ["<<poids<<"kg - "<<taille<<"cm]";

}

Potatoe :: Potatoe(): Vegetable(0),yeux(0) {}
Potatoe :: Potatoe(double a, int b): Vegetable(a), yeux(b) {}

Potatoe :: Potatoe(double a): Vegetable(a), yeux(a*10){}

void Potatoe :: print(){
    cout <<"Potatoe : ["<<poids<<"kg - "<<yeux<<" yeux]";

}