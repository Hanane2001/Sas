#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Challenge 1 : Fonction de Somme
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme. 
Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.
*/
int Somme(int a, int b){
    return a+b;
}

void AfficheSomme(){
    int a,b;
    int s;
    printf("Entrez le nombre 1:");
    scanf("%d",&a);
    printf("Entrez le nombre 2:");
    scanf("%d",&b);
    s=Somme(a,b);
    printf("la somme de %d et %d est: %d", a, b, s);
}

/*
Challenge 2 : Fonction de Multiplication
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit. 
Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.
*/
int Multiplication(int a, int b){
    return a*b;
}

void AfficheMult(){
    int a,b;
    int m;
    printf("Entrez le nombre 1:");
    scanf("%d",&a);
    printf("Entrez le nombre 2:");
    scanf("%d",&b);
    m=Multiplication(a,b);
    printf("la multiplication de %d et %d est: %d", a, b, m);
}

/*
Challenge 3 : Fonction de Maximum
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux. 
Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.
*/
int Maximum(int a, int b){
    return (a>b)?a:b;
}

void AfficheMax(){
    int a,b;
    int max;
    printf("Entrez le nombre 1:");
    scanf("%d",&a);
    printf("Entrez le nombre 2:");
    scanf("%d",&b);
    max=Maximum(a,b);
    printf("le maximum entre %d et %d est: %d", a, b, max);
}

/*
Challenge 4 : Fonction de Minimum
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux. 
Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.
*/
int Minimum(int a, int b){
    return (a<b)?a:b;
}

void AfficheMin(){
    int a,b;
    int min;
    printf("Entrez le nombre 1:");
    scanf("%d",&a);
    printf("Entrez le nombre 2:");
    scanf("%d",&b);
    min=Minimum(a,b);
    printf("le minimum entre %d et %d est: %d", a, b, min);
}

/*
Challenge 5 : Fonction de Factorielle
Écrivez une fonction en C qui calcule la factorielle d'un entier positif. La fonction doit prendre un entier en paramètre et retourner sa factorielle. 
Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.
*/
void Factorielle(){
    int n,i;
    int fact=1;
    printf("Entrez n: ");
    scanf("%d",&n);
    if (n<0) {
        printf("Erreur\n");
        return;
    }
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d! = %d\n",n,fact);
}

/*
Challenge 6 : Fonction de Fibonacci
Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci. La fonction doit prendre un entier en paramètre et retourner le n-ième terme. 
Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.
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
Challenge 7 : Fonction d'Inversion de Chaîne
Écrivez une fonction en C qui inverse une chaîne de caractères. La fonction doit prendre une chaîne en paramètre et retourner la chaîne inversée. 
Créez un programme principal qui utilise cette fonction pour afficher une chaîne inversée.
*/
void InverseChaine(){
    char str[100];
    int i, len;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    len=strlen(str);
    printf("Inverse: ");
    for(i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}

/*
Challenge 8 : Fonction de Vérification de Parité
Écrivez une fonction en C qui vérifie si un entier est pair ou impair. La fonction doit prendre un entier en paramètre et retourner 1 si l'entier est pair et 0 s'il est impair. 
Créez un programme principal qui utilise cette fonction pour afficher si un nombre est pair ou impair.
*/
int EstPair(int n){
    return (n%2==0)?1:0;
}

void AffichePair(){
    int n;
    int pair;
    printf("Entrez le nombre:");
    scanf("%d",&n);
    pair=EstPair(n);
    if(pair==1){
        printf("le valeur %d est pair\n", n);
    }else{
        printf("le valeur %d n'est pas pair\n", n);
    }
}

int main(){
    //challenge1
    AfficheSomme();
    //challenge2
    AfficheMult();
    //challenge3
    AfficheMax();
    //challenge4
    AfficheMin();
    //challenge5
    Factorielle();
    //challenge6
    F();
    //challenge7
    InverseChaine();
    //challenge8
    AffichePair();
    return 0;
}