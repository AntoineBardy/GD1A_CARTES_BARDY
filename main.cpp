using namespace std;

int main(){
    Monstre Kappa;
    Monstre Minotaure ("Minotaure", 8, 6, true);

    Kappa.Affichage();
    Minotaure.Affichage();

    Kappa.Attaque(Minotaure);
    Minotaure.Attaque(Kappa);

    Kappa.Affichage();
    Minotaure.Affiche();

    return 0;
}