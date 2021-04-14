#include string

using namespace std;

class Monstre
{
    public:

    Monstre();
    Monstre(string nom, int pv, int degats, bool etat);
    void Affichage ();
    void Attaque(Monstre&ennemis);
    void priseDegats (int nbDegats);
    int getDegats () const;

    private:

    string nomM;
    int hp;
    int atq;
    bool currentState;

};
