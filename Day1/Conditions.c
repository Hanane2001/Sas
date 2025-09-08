#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

/*
Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.
*/
void AffichePairImpair(){
    int nb;
    printf("Entrez un nombre: ");
    scanf("%d",&nb);
    if(nb%2==0){
        printf("le nombre est pair");
    }else{
        printf("le nombre est impair");
    }
} 

/*
Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur 
est une voyelle ou non en utilisant l'instruction switch case.
*/
void Voyelle(){
    char ch;
    printf("Entrez un caractere: ");
    scanf(" %c",&ch);
    switch(ch){
        case 'a':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'A':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'e':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'E':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'u':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'U':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'i':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'I':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'o':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'O':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'y':
            printf("le caractere %c est voyelle",ch);
            break;
        case 'Y':
            printf("le caractere %c est voyelle",ch);
            break;
        default :
            printf("le caractere %c n'est pas voyelle",ch);
    }
}

/*
Challenge 3 : Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, 
le programme doit renvoyer le triple de leur somme.
*/
void SommeId(){
    int a,b;
    int s=0;
    printf("entrez le premier nombre: ");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre: ");
    scanf("%d",&b);
    if(a==b){
        s=a+b;
        printf("Les valeurs sont identiques. Le triple de leur somme est: %d\n", s * 3);
    }else{
        s=a+b;
        printf("La somme des deux nombres est: %d\n", s);
    }
}

/*
Challenge 4 : Equation du Deuxième Degré
Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.
*/
void EquationDeuxiemeDegre(){
    float a, b, c, delta, x1, x2;
    printf("Entrez la valeur de a : ");
    scanf("%f", &a);
    printf("Entrez la valeur de b : ");
    scanf("%f", &b);
    printf("Entrez la valeur de c : ");
    scanf("%f", &c);
    if(a==0){
        printf("Ce n'est pas une equation du second degre.\n");
    }else{
        delta=b*b-4*a*c;
        if(delta>0){
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("Deux solutions: x1 = %.2f et x2 = %.2f\n", x1, x2);
        }else if(delta==0){
            x1=-b/(2*a);
            printf("une seule solution: x = %.2f\n", x1);
        }else{
            printf("n'est pas de solution");
        }
    }
}

/*
Challenge 5 : Conversion d'Année
Écrivez un programme C piloté par menu pour convertir une année donnée en :
Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes 
courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.
*/
void ConvertirAnnee(){
    int annee,choix;
    double res;
    printf("Entrez une annee: ");
    scanf("%d",&annee);
    printf("Que voulez-vous faire");
    printf("\n1.Convertir en mois");
    printf("\n2.Convertir en jours");
    printf("\n3.Convertir en heures");
    printf("\n4.Convertir en minutes");
    printf("\n5.Convertir en secondes");
    printf("\n6.Quitter");
    printf("\nVotre choix:");
    scanf("%d",&choix);
    /*
        possible aussi utiliser cette forme:
        Mois = année × 12
        Jours = année × 365
        Heures = année × 365 × 24
        Minutes = année × 365 × 24 × 60
        Secondes = année × 365 × 24 × 60 × 60
    */
    switch(choix){
        case 1:
            res=12*annee;
            printf("%d annees = %.2lf mois",annee,res);
            break;
        case 2:
            res=365*annee;
            printf("%d annees = %.2lf jours",annee,res);
            break;
        case 3:
            res=8760*annee;
            printf("%d annees = %.2lf heures",annee,res);
            break;
        case 4:
            res=525600*annee;
            printf("%d annees = %.2lf minutes",annee,res);
            break;
        case 5:
            res=31536000*annee;
            printf("%d annees = %.2lf seconds",annee,res);
            break;
        case 6:
            printf("\ntu as quetter");
            break;
        default :
            printf("\nmerci");
    }
}

/*
Challenge 6 : Positif, Négatif ou Nul
Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro, alors 
le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. 
Si les deux conditions sont fausses, le nombre est égal à zéro.
*/
void AfficheNbPNN(){
    int nb;
    printf("Entrez un nombre: ");
    scanf("%d",&nb);
    if(nb==0){
        printf("le nombre %d est null",nb);
    }else if(nb>0){
        printf("le nombre %d est positive",nb);
    }else{
        printf("le nombre %d est negative",nb);
    }
}

/*
Challenge 7 : Alphabet Majuscule
Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule ou non en utilisant 
l'instruction conditionnelle if-else. Les lettres majuscules vont de 'A' à 'Z'. Les valeurs ASCII de 'A' et 'Z' 
sont respectivement 65 et 90. Si la valeur ASCII d'un caractère est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.
*/
void AfficheMaj(){
    char ch;
    printf("Entrez un caractere: ");
    scanf(" %c",&ch);
    //possible utilisez le code ascii
    if(ch>='A' && ch<='Z'){
        printf("le caractere %c est Majuscule",ch);
    }else{
        printf("le caractere %c est Minuscule",ch);
    }
}

/*
Challenge 8 : Mention Obtenue
Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes.
S’il a une moyenne strictement inférieure à 10, il est recalé. S’il a une moyenne entre 10 (inclus) et 12, 
il obtient la mention passable. S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien. 
S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
S’il a une moyenne supérieure à 16 (inclus) il obtient la mention très bien. Écrire les instructions nécessaires.
*/
void MoyenneNote(int *note, int n){
    int s=0,i;
    int m;
    for(i=0;i<n;i++){
        s+=note[i];
    }
    m=s/n;
    if(m<10){
        printf("\nil est recale");
    }else if(m>=10 && m<12){
        printf("\nil est passable");
    }else if(m>=12 && m<14){
        printf("\nil est assez bien");
    }else if(m>=14 && m<16){
        printf("\nil est bien");
    }else if(m>=16){
        printf("\nil est tres bien");
    }
}

void SaisieNote(){
    int n,*note,i;
    printf("Entrez le nombre des notes:");
    scanf("%d",&n);
    note=malloc(n*sizeof(int));
    printf("Entrez les notes:\n");
    for(i=0;i<n;i++){
        printf("note[%d]= ",i);
        scanf("%d",&note[i]);
    }
    MoyenneNote(note,n);
}

/*
Challenge 9 : Vérification d'Alphabet
Écrivez un programme C qui lit un caractère et détermine 
s'il fait partie des alphabets ou non. Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.
*/
void Alphabet(){
    char ch;
    printf("Entrez un caractere: ");
    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("le caractere %c est majuscule",ch);
    }else if(ch>='a' && ch<='z'){
        printf("le caractere %c est minuscule",ch);
    }else{
        printf("le caractere %c n'est pas lettre",ch);
    }
}

/*
Challenge 10 : Formatage de la Date
Écrivez un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant : 15-Septembre-2012.
*/
void TransfereDate(int j, int m, int a){
    char tab[12][12]={
        "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
    if(m>=1 && m<=12){
        printf("%d-%s-%d\n", j, tab[m-1], a);
    }else{
        printf("mois invalide : %d\n", m);
    }
    /*switch(m){
        case 01:
            printf("%d-Janvier-%d",j,a);
            break;
        case 02:
            printf("%d-Fevrier-%d",j,a);
            break;
        case 03:
            printf("%d-Mars-%d",j,a);
            break;
        case 04:
            printf("%d-Avril-%d",j,a);
            break;
        case 05:
            printf("%d-Mai-%d",j,a);
            break;
        case 06:
            printf("%d-Juin-%d",j,a);
            break;
        case 07:
            printf("%d-Juillet-%d",j,a);
            break;
        case 8:
            printf("%d-Aout-%d",j,a);
            break;
        case 9:
            printf("%d-Septembre-%d",j,a);
            break;
        case 10:
            printf("%d-Octobre-%d",j,a);
            break;
        case 11:
            printf("%d-Novembre-%d",j,a);
            break;
        case 12:
            printf("%d-Decembre-%d",j,a);
            break;
        default:
            printf("le date incorrect!!");
    }*/
}

void SaisieDate(){
    int annee,jour,mois;
    printf("Entrez la date: ");
    printf("\nl'annee: ");
    scanf("%d",&annee);
    printf("le mois: ");
    scanf("%d",&mois);
    printf("le jour: ");
    scanf("%d",&jour);
    printf("%d/%d/%d \n",jour,mois,annee);
    TransfereDate(jour,mois,annee);
}

/*
Challenge 11 : Jour de la Semaine
Écrivez un programme C qui affiche d'une manière aléatoire un des jours de la semaine.
*/
void AfficheJourAlea(){
    srand(time(NULL)); 
    int jour;
    char J[7][10]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    jour=rand()%7+1;
    if(jour>=1 && jour<=7){
        printf("le jour est : %s ",J[jour-1]);
    }
}

/*
Challenge 12 : Comparaison d'Instants
Écrivez un programme C qui lit deux instants dans le format HH:MM:SS et affiche un des messages suivants :
Le premier instant vient avant le deuxième ;
Le deuxième instant vient avant le premier ;
Il s'agit du même instant.
*/
//methode 1
void CompareInstant(){
    int h1,m1,s1,h2,m2,s2;
    printf("Entrez l'heur de premier instant:");
    scanf("%d",&h1);
    printf("Entrez les minutes de premier instant:");
    scanf("%d",&m1);
    printf("Entrez les seconds de premier instant:");
    scanf("%d",&s1);
    printf("Entrez l'heur de deuxieme instant:");
    scanf("%d",&h2);
    printf("Entrez les minutes de deuxieme instant:");
    scanf("%d",&m2);
    printf("Entrez les seconds de deuxieme instant:");
    scanf("%d",&s2);
    if(h1<h2){
        printf("Le premier instant vient avant le deuxieme");
    }
    else if(h1>h2){
        printf("Le deuxieme instant vient avant le premier");
    }
    else{
        if(m1<m2){
            printf("Le premier instant vient avant le deuxieme");
        }
        else if(m1>m2){
            printf("Le deuxieme instant vient avant le premier");
        }
        else{
            if(s1<s2){
                printf("Le premier instant vient avant le deuxieme");
            }
            else if(s1>s2){
                printf("Le deuxieme instant vient avant le premier");
            }
            else{
                printf("Il s'agit du meme instant");
            }
        }
    }
}

//methode 2
void CompareInstant2(){
    int h1,m1,s1,h2,m2,s2;
    int t1,t2;
    printf("Entrez l'heur de premier instant:");
    scanf("%d",&h1);
    printf("Entrez les minutes de premier instant:");
    scanf("%d",&m1);
    printf("Entrez les seconds de premier instant:");
    scanf("%d",&s1);
    printf("Entrez l'heur de deuxieme instant:");
    scanf("%d",&h2);
    printf("Entrez les minutes de deuxieme instant:");
    scanf("%d",&m2);
    printf("Entrez les seconds de deuxieme instant:");
    scanf("%d",&s2);
    t1=h1*3600+m1*60+s1;
    t2=h2*3600+m2*60+s2;
    if(t1<t2){
        printf("Le premier instant vient avant le deuxieme");
    }
    else if(t1>t2){
        printf("Le deuxieme instant vient avant le premier");
    }
    else{
        printf("Il s'agit du meme instant");
    }
}

/*
Challenge 13 : Point sur un Segment
Écrivez un programme C qui lit les coordonnées des deux extrémités d'un segment, 
et lit ensuite les coordonnées d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.
*/
void PointSurSegment(){
    float x1,y1,x2,y2,x,y;
    float c;
    printf("Entrez les coordonnees du point A (x1,y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Entrez les coordonnees du point B (x2,y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Entrez les coordonnees du point P (x,y): ");
    scanf("%f %f", &x, &y);
    c=(x-x1)*(y2-y1)-(y-y1)*(x2-x1);
    if(c==0 && x>=(x1<x2?x1:x2) && x<=(x1>x2?x1:x2) && y>=(y1<y2?y1:y2) && y<=(y1>y2?y1:y2)){
        printf("le point P(%.2f, %.2f) est sur le segment.\n", x, y);
    }else{
        printf("Le point P(%.2f, %.2f) n'est pas sur le segment.\n", x, y);
    }

}

int main(){
    //challenge1
        AffichePairImpair();
    //challenge2
        Voyelle();
    //challenge3
        SommeId();
    //challenge4
        EquationDeuxiemeDegre();
    //challenge5
        ConvertirAnnee();
    //challenge6
        AfficheNbPNN();
    //challenge7
        AfficheMaj();
    //challenge8
        SaisieNote();
    //challenge9
        Alphabet();
    //challenge10
        SaisieDate();
    //challenge11
        AfficheJourAlea();
    //challenge12
        CompareInstant();
        CompareInstant2();
    //challenge13
        PointSurSegment();
    return 0;
}