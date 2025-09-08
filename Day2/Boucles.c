#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
Challenge 1 : Table de Multiplication Inversée
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication en ordre décroissant, de 10 à 1. Par exemple, pour le nombre 5, affichez :
5 * 10 = 50 5 * 9 = 45 5 * 8 = 40 ... 5 * 1 = 5
*/
void TableInv(){
    int n,i;
    printf("Entrez un nombre: ");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}

/*
Challenge 2 : pyramide d'étoile
      *
     ***
    *****
   *******
  *********
 ***********
*************
*/
void Pyramide(){
    int n,i,j,esp;
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(esp=1;esp<=n-i;esp++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
Challenge 3 : Affichage des Nombres Premiers
Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.
*/
int EstPremier(int x){
    int i;
    if(x<2){
        return 0;
    }
    for(i=2;i<=x/2;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
void AffichePremiers(){
    int n,i;
    printf("Entrez n: ");
    scanf("%d",&n);
    printf("Nombres premiers de 1 a %d: ",n);
    for(i=2;i<=n;i++){
        if(EstPremier(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}

/*
Challenge 4 : Inversion d'un Entier
Écrivez un programme C qui lit un entier à plusieurs chiffres et l'affiche en ordre inverse sans utiliser de tableaux. Par exemple, si l'entrée est 12345, affichez 54321.
*/
void InverseEntier(){
    int n,inv=0;
    printf("Entrez un entier: ");
    scanf("%d",&n);
    while(n>0){
        inv=inv*10+n%10;
        n/=10;
    }
    printf("L'inverse: %d\n",inv);
}

/*
Challenge 5 : Somme des N Nombres
Écrivez un programme C qui demande à l’utilisateur un nombre entier n et calcule la somme des n premiers 
nombres naturels. Par exemple, si n est 5, la somme est 1 + 2 + 3 + 4 + 5 = 15.
*/
void SommeN(){
    int n,i,sum=0;
    printf("Entrez n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("Somme des %d premiers nombres = %d\n",n,sum);
}

/*
Challenge 6 : Facteurs d'un Nombre
Écrivez un programme C qui affiche tous les facteurs d'un nombre entier positif n entré par l’utilisateur. Par exemple, pour n = 36, affichez : 
1, 2, 3, 4, 6, 9, 12, 18, 36.
*/
void Facteurs(){
    int n,i;
    printf("Entrez un entier positif: ");
    scanf("%d",&n);
    printf("Facteurs de %d: ",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}

/*
Challenge 7 : Suite de Fibonacci
Écrivez un programme C qui génère les n premiers termes de la suite de Fibonacci, où n est entré par l’utilisateur. 
La suite de Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).
*/
void SuiteFibonacci(int n){
    int *Un,i;
    if(n<=0){
        return;
    }
    Un=malloc(n*sizeof(int));
    Un[0]=0;
    if(n==1){ 
        printf("Un[0]=0\n"); 
        return; 
    }
    Un[1]=1;
    for(i=2;i<n;i++){
        Un[i]=Un[i-1]+Un[i-2];
    }
    printf("Suite Fibonacci:\n");
    for(i=0;i<n;i++){
        printf("Un[%d]=%d\n",i,Un[i]);
    }
    free(Un);
}

void F(){
    int n;
    printf("Entrez un nombre: ");
    scanf("%d",&n);
    SuiteFibonacci(n);
}

/*
Challenge 8 : Recherche Dichotomique
Écrivez un programme C qui implémente la recherche dichotomique dans un tableau trié d’entiers. 
Le programme doit demander à l’utilisateur un nombre et rechercher ce nombre dans le tableau en utilisant la méthode de recherche dichotomique.
*/
void RechercheDicho(){
    int n,i,x,deb,fin,mil,ex=0;
    int *t;
    printf("Entrez taille tableau: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    printf("Entrez %d elements (tableau deja trie):\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
    printf("Entrez valeur a recherche: ");
    scanf("%d",&x);
    deb=0; 
    fin=n-1;
    while(deb<=fin){
        mil=(deb+fin)/2;
        if(t[mil]==x){ 
            ex=1; 
            break; 
        }else if(t[mil]<x){
            deb=mil+1;
        }else{
            fin=mil-1;
        }
    }
    if(ex){
        printf("Element %d existe\n",x);
    }else{
        printf("Element %d n'est pas existe\n",x);
    }
    free(t);
}

/*
Challenge 9 : Calcul de la Puissance
Écrivez un programme C qui calcule la puissance d'un nombre en utilisant une boucle while. 
Le programme doit demander la base (positive) et l'exposant (non négatif) et afficher la valeur résultante.
*/
void Puissance(){
    int base,exp,res=1;
    printf("Entrez base: ");
    scanf("%d",&base);
    printf("Entrez exposant: ");
    scanf("%d",&exp);
    while(exp>0){
        res*=base;
        exp--;
    }
    printf("La puissance = %d\n",res);
}

/*
Challenge 10 : Générateur de Mot de Passe
Écrivez un programme C qui génère un mot de passe aléatoire de longueur n, où n est entré par l’utilisateur. 
Le mot de passe doit contenir des lettres majuscules, des lettres minuscules, et des chiffres.
*/
void GenMDP(){
    int n,i;
    char mdp[100];
    char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int taille=62;
    srand(time(NULL));
    printf("Entrez longueur du mot de passe (<100): ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        mdp[i]=c[rand()%taille];
    }
    mdp[n]='\0';
    printf("Mot de passe est: %s\n",mdp);
}

/*
Challenge 11 : Moyenne des Nombres
Écrivez un programme C qui lit une série de nombres positifs terminée par un zéro et calcule la moyenne de ces nombres. N’affichez pas le zéro dans le calcul de la moyenne.
*/
void Moyenne(){
    int n,count=0,sum=0;
    printf("Entrez des nombres positifs (0 pour arrete):\n");
    do{
        scanf("%d",&n);
        if(n>0){ 
            sum+=n; 
            count++; 
        }
    }while(n!=0);
    if(count>0){
        printf("Moyenne = %.2f\n",(float)sum/count);
    }else{
        printf("Aucun nombre saisi.\n");
    }
}

/*
Challenge 12 : Tri par Bulles
Écrivez un programme C qui implémente l'algorithme de tri par bulles pour trier un tableau d’entiers. 
Le programme doit demander à l’utilisateur le nombre d’éléments, puis les éléments eux-mêmes, et enfin afficher le tableau trié.
*/
void echange(int *t, int a, int b){
    int tmp;
    tmp=t[a];
    t[a]=t[b];
    t[b]=tmp;
}

void tri_bulle(int *t, int n){
    int i,test=0;
    do{
        test=0;
        for(i=0;i<n-1;i++){
            if(t[i]>t[i+1]){
                echange(t,i,i+1);
                test=1;
            }
        }
    }while(test==1);
}

void SaisieTabB(){
    int n,i;
    int *t;
    printf("Entrez taille tableau: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
    tri_bulle(t,n);
    printf("Tableau trie : ");
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    printf("\n");
    free(t);
}

/*
Challenge 13 : Table de Multiplication avec Somme
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche la table de multiplication de 1 à 10 pour ce nombre. En plus, affichez la somme des produits.
*/
void TableSomme(){
    int n,i,sum=0;
    int p;
    printf("Entrez un nombre: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        p=n*i;
        printf("%d*%d=%d\n",n,i,p);
        sum+=p;
    }
    printf("Somme des produits = %d\n",sum);
}

/*
Challenge 14 : Sélection de Sortie
Écrivez un programme C qui affiche les jours de la semaine à l'utilisateur et lui demande de choisir un jour. Le programme doit afficher le jour sélectionné et les jours qui le suivent dans la semaine. 
Assurez-vous de gérer les jours de la semaine correctement (lundi, mardi, etc.).
*/
void JourSemaine(){
    char *jours[]={"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    int choix,i;
    printf("Choisie un jour (1=Lundi ... 7=Dimanche): ");
    scanf("%d",&choix);
    if(choix<1 || choix>7){
        printf("Choix invalide.\n");
    }else{
        printf("a partir de %s : ",jours[choix-1]);
        for(i=choix-1;i<7;i++){
            printf("%s ",jours[i]);
        }
        printf("\n");
    }
}

/*
Challenge 15 : Calcul de la Factorielle
Écrivez un programme C qui calcule la factorielle d'un nombre entier n (n!) en utilisant une boucle for. 
La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n.
*/
void Factorielle(){
    int n,i;
    int fact=1;
    printf("Entrez n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d! = %d\n",n,fact);
}

int main(){
    //challenge1
    TableInv();
    //challenge2
    Pyramide();
    //challenge3
    AffichePremiers();
    //challenge4
    InverseEntier();
    //challenge5
    SommeN();
    //challenge6
    Facteurs();
    //challenge7
    F();
    //challenge8
    RechercheDicho();
    //challenge9
    Puissance();
    //challenge10
    GenMDP();
    //challenge11
    Moyenne();
    //challenge12
    SaisieTabB();
    //challenge13
    TableSomme();
    //challenge14
    JourSemaine();
    //challenge15
    Factorielle();
    return 0;
}
