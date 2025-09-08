#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

/*
Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles :
nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
*/
void AfficheInf(char * nom,char *prenom, int age, char *sexe, char *email){
    printf("le nom est : %s\n",nom);
    printf("le prenom est : %s\n",prenom);
    printf("l'age est : %d\n",age);
    printf("le sexe est : %s\n",sexe);
    printf("l'email est : %s",email);
}

void SaisieInf(){
    char nom[10],prenom[10],sexe[8],email[18];
    int age;
    printf("le nom :");
    scanf("%s",nom);
    printf("le prenom :");
    scanf("%s",prenom);
    printf("l'age : ");
    scanf("%d",&age);
    printf("le sexe : ");
    scanf("%s",sexe);
    printf("l'email : ");
    scanf("%s",email);
    AfficheInf(nom,prenom,age,sexe,email);
}

/*
Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule : K = C + 273.15
*/
void AfficheTem(double C){
    double K;
    K=C+273.15;
    printf("la temperature en Kelvin est: %.2lf",K);
}

void SaisieTem(){
    double C;
    printf("entrez la temperature en Celsius, svp: ");
    scanf("%lf",&C);
    AfficheTem(C);
}

/*
Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule : Yards = Km * 1093.61
*/
void AfficheDist(double Km){
    double Yards;
    Yards=Km*1093.61;
    printf("la distance en yard est: %.2lf",Yards);
}

void SaisieDist(){
    double Km;
    printf("entrez la distance en kilometre, svp: ");
    scanf("%lf",&Km);
    AfficheDist(Km);
}

/*
Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :
m/s = km/h * 0.27778
*/
void AfficheVit(double Km_H){
    double M_S;
    M_S=Km_H*0.27778;
    printf("la vitesse en metre par seconde (m/s) est: %.2lf",M_S);
}

void SaisieVit(){
    double Km_H;
    printf("entrez la vitesse en kilometre par heure (km/h), svp: ");
    scanf("%lf",&Km_H);
    AfficheVit(Km_H);
}

/*
Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :
C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/
void AfficheTemp(double C){
    if(C<0){
        printf("l'etat de l'eau est Solide");
    }
    else if(C>=0 && C<100){
        printf("l'etat de l'eau est Liquide");
    }
    else{
        printf("l'etat de l'eau est Gaz");
    }
}

void SaisieTemp(){
    double C;
    printf("entrez la temperature en celsius, svp: ");
    scanf("%lf",&C);
    AfficheTemp(C);
}

/*
Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.
*/
void Somme(double a, double b){
    printf("\nla somme de %.2lf et %.2lf est :%.2lf",a,b,a+b);
}

void Soustraction(double a, double b){
    printf("\nla soustraction de %.2lf et %.2lf est : %.2lf",a,b,a-b);
}
void Multiplication(double a, double b){
    printf("\nla Multiplication de %.2lf et %.2lf est : %.2lf",a,b,a*b);
}
void Division(double a, double b){
    if(b==0){
        printf("\nImpossible diviser sur zero!!!");
    }else{
        printf("\nla division de %.2lf et %.2lf est : %.2lf",a,b,a/b);
    }
}

void SaisieVar(){
    double a,b;
    printf("entrez la premier nombre svp: ");
    scanf("%lf",&a);
    printf("entrez la deuxieme nombre svp: ");
    scanf("%lf",&b);
    Somme(a,b);
    Soustraction(a,b);
    Multiplication(a,b);
    Division(a,b);
}

/*
Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :
1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/
void AfficheMoy(int a, int b, int c){
    double moyenne = (a*2 + b*3 + c*5) / 10.0;
    printf("la moyenne ponderee de trois nombres (%d,%d,%d) est: %.2lf", a, b, c, moyenne);
}

void SaisieMoy(){
   int a,b,c;
    printf("entrez la premier nombre svp: ");
    scanf("%d",&a);
    printf("entrez la deuxieme nombre svp: ");
    scanf("%d",&b);
    printf("entrez la troisieme nombre svp: ");
    scanf("%d",&c);
    AfficheMoy(a,b,c);
}

/*
Challenge 8 : Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur. Formule :
Moyenne géométrique = (a * b * c)^(1/3)
*/
void AfficheMoyGeo(int a, int b, int c){
    int mul=0;
    double moyenne_Geo;
    int i;
    mul=a*b*c;
    moyenne_Geo=pow(mul, 1.0/3.0);
    printf("la moyenne geometrique de trois nombres (%d,%d,%d) est: %.2lf",a,b,c,moyenne_Geo);
}

void SaisieMoyGeo(){
   int a,b,c;
    printf("entrez la premier nombre svp: ");
    scanf("%d",&a);
    printf("entrez la deuxieme nombre svp: ");
    scanf("%d",&b);
    printf("entrez la troisieme nombre svp: ");
    scanf("%d",&c);
    AfficheMoyGeo(a,b,c);
}

/*
Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :
Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)
*/
void AfficheDisTroiD(float x1, float y1, float z1, float x2, float y2, float z2){
    double D;
    double sum=0;
    float X,Y,Z;
    X=x2-x1;
    Y=y2-y1;
    Z=z2-z1;
    sum=pow(X,2)+pow(Y,2)+pow(Z,2);
    D=sqrt(sum);
    printf("la distance entre deux points (%.2f,%.2f,%.2f) et (%.2f,%.2f,%.2f) donnes dans un espace 3D est: %.2lf",x1,y1,z1,x2,y2,z2,D);
}

void SaisieDisTroiD(){
    float x1,y1,z1;
    float x2,y2,z2;
    printf("entrez L'abscisse de premier point svp: ");
    scanf("%f",&x1);
    printf("entrez l'ordonnee de premier point svp: ");
    scanf("%f",&y1);
    printf("entrez la cote premier point svp: ");
    scanf("%f",&z1);
    printf("entrez L'abscisse  de deuxieme point svp: ");
    scanf("%f",&x2);
    printf("entrez l'ordonnee de deuxieme point svp: ");
    scanf("%f",&y2);
    printf("entrez la cote de deuxieme point svp: ");
    scanf("%f",&z2);
    AfficheDisTroiD(x1,y1,z1,x2,y2,z2);
}

/*
Challenge 10 : Volume d'une sphère
Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur. Formule pour le volume d'une sphère :
Volume = (4/3) * π * r³
*/
void VolumeSph(){
    int r;
    double v;
    printf("Entrez la valeur de rayon: ");
    scanf("%d",&r);
    v=(4.0/3.0)*PI*pow(r,3);
    printf("le volume d'un sphere est: %.2lf",v);
}

/*
Challenge 11 : Surface d'un rectangle
Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. Formule pour la surface d'un rectangle :
Surface = longueur * largeur
*/
void SurfaceRec(){
    double longueur,largeur;
    double Surface;
    printf("Entrez la longueur du rectangle: ");
    scanf("%lf",&longueur);
    printf("Entrez la largeur du rectangle: ");
    scanf("%lf",&largeur);
    Surface = longueur * largeur;
    printf("la surface d'un rectangle est: %.2lf",Surface);
}

/*
Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse sans utiliser de boucle.
Par exemple, si le nombre entier est 1234, son inverse est 4321.
*/
//methode avec boucle
void InverseNbr(){
    int nb,chiffre,inv=0,i;
    printf("Entrez un nombre  a 4 chiffres: ");
    scanf("%d",&nb);
    for(i=0;i<4;i++){
        chiffre=nb%10;
        inv=inv*10+chiffre;
        nb=nb/10;
    }
    printf("l'inverse est : %d", inv);
}

//methode sans boucle
void InverseNbrSB(){
    int nb;
    printf("Entrez un nombre a 4 chiffres: ");
    scanf("%d", &nb);
    int inv = (nb%10)*1000 + ((nb/10)%10)*100 + ((nb/100)%10)*10 + (nb/1000);
    printf("l'inverse est : %d", inv);
}

/*
Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal. 
Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.
*/
void TransformeBinaire(int a){
    printf("le nombre %d en binaire est: ",a);
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (a >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

void AfficheBenHex(){
    int nb;
    printf("Entrez un nombre: ");
    scanf("%d",&nb);
    TransformeBinaire(nb);
    printf("\nle nombre %d en hexadecimal est: %X",nb,nb);
}

int main(){
    //challenge1
        SaisieInf();
    //challenge2
        SaisieTem();
    //challenge3
        SaisieDist();
    //challenge4
        SaisieVit();
    //challenge5
        SaisieTemp();
    //challenge6
        SaisieVar();
    //challenge7
        SaisieMoy();
    //challenge8
        SaisieMoyGeo();
    //challenge9
        SaisieDisTroiD();
    //challenge10
        VolumeSph();
    //challenge11
        SurfaceRec();
    //challenge12
        InverseNbr();
        InverseNbrSB();
    //challenge13
        AfficheBenHex();
    return 0;
}