#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Challenge 1 : Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age. 
Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.
*/
typedef struct{
        char nom[50];
        char prenom[50];
        int age;
}Personne;

void AffichePer(){
    Personne p1;
    strcpy(p1.nom, "Ali");
    strcpy(p1.prenom, "Ahmed");
    p1.age=22;
    printf("Nom: %s, Prenom: %s, Age: %d\n", p1.nom, p1.prenom, p1.age);
}

/*
Challenge 2 : Structure avec Tableau
Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes.
 Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.
*/
typedef struct{
        char nom[50];
        char prenom[50];
        int notes[5];
}Etudiant;

void AfficheEtd(){
    Etudiant e1;
    strcpy(e1.nom, "Khadija");
    strcpy(e1.prenom, "Salhi");
    e1.notes[0]=15; 
    e1.notes[1]=12; 
    e1.notes[2]=18; 
    e1.notes[3]=14; 
    e1.notes[4]=16;
    printf("Nom: %s, Prenom: %s\nNotes: ", e1.nom, e1.prenom);
    for(int i=0;i<5;i++){
        printf("%d ", e1.notes[i]);
    }
    printf("\n");
}

/*
Challenge 3 : Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. 
Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. Affichez l'aire dans le programme principal.
*/
typedef struct{
    float longueur;
    float largeur;
}Rectangle;

float CalculAire(Rectangle r){
    return r.longueur * r.largeur;
}

void AfficheRectangle(){
    Rectangle r1;
    r1.longueur=10.5;
    r1.largeur=5.2;
    printf("Aire du rectangle = %.2f\n", CalculAire(r1));
}

/*
Challenge 4 : Structure avec Pointeurs
Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y. 
Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. Affichez les valeurs du point.
*/
typedef struct{
    int x;
    int y;
}Point;

void AffichePoint(){
    Point *p=malloc(sizeof(Point));
    p->x=7;
    p->y=3;
    printf("Point: (%d, %d)\n", p->x, p->y);
    free(p);
}

/*
Challenge 5 : Structure et Fonction de Retour
Écrivez un programme C qui définit une structure pour représenter un livre avec les champs titre, auteur, et année. 
Écrivez une fonction qui retourne une variable de cette structure initialisée avec des valeurs données. 
Affichez les informations du livre dans le programme principal.
*/
typedef struct{
    char titre[100];
    char auteur[100];
    int annee;
}Livre;

Livre CreerLivre(char *titre, char *auteur, int annee){
    Livre l;
    strcpy(l.titre, titre);
    strcpy(l.auteur, auteur);
    l.annee = annee;
    return l;
}

void AfficheLivre(){
    Livre l1=CreerLivre("hello world", "hind taouil", 2023);
    printf("Titre: %s\nAuteur: %s\nAnnee: %d\n", l1.titre, l1.auteur, l1.annee);
}

int main(){
    //challenge1
    AffichePer();
    //challenge2
    AfficheEtd();
    //challenge3
    AfficheRectangle();
    //challenge4
    AffichePoint();
    //challenge5
    AfficheLivre();
    return 0;
}