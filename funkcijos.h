#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
using namespace std;
struct studentas
{
    string vardas;
    string pavarde;
    vector<int> nd;
    int egz;
    float rezultatas;
};


double vidurkis(vector<int> nd);

class StudentasClass
        {
            private:
            string vardas;
            string pavarde;
            vector<int> nd;
            int egz;
            float rezultatas;
            public:
        StudentasClass(string vardas, string pavarde, vector<int> nd, int egz)
        {
            this->vardas = vardas;
            this->pavarde = pavarde;
            this->nd = nd;
            this->egz = egz;
            this->rezultatas = vidurkis(nd)*0.4 + 0.6*egz;
        }
        float getRezultatas() const
        {
            return rezultatas;
        }
        void spausdinti()
        {
            cout<<vardas<<" "<<pavarde<<" "<<rezultatas<<endl;
        }

        void spausdinti_pilnai()
        {
            cout<<vardas<<" "<<pavarde<<" "<<nd[0]<<" "<<nd[1]<<" "<<nd[2]<<" "<<nd[3]<<" "<<nd[4]<<" | "<<egz<<" "<<rezultatas<<endl;
        }

        };



void dalijimas_struct(list<studentas> studentai);

void dalijimas_class(list<StudentasClass> studentai);

void testuoti(int kiek);
