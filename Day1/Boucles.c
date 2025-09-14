#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

/*
Challenge 1 : Table de Multiplication
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table 
de multiplication de 1 à 10. Par exemple, pour le nombre 4, affichez :
4 * 1 = 4 4 * 2 = 8 4 * 3 = 12 ... 4 * 10 = 40
*/
void SaisieTableMult(){
    int nb,i;
    printf("Entrez le nombre: ");
    scanf("%d",&nb);
    printf("le table de multiplication de %d est :\n",nb);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n",i,nb,nb*i);
    }
}

/*
Challenge 2 : Factorielle d'un Nombre
Écrivez un programme C qui calcule la factorielle d'un nombre entier positif n entré par l’utilisateur. 
La factorielle de n est le produit de tous les entiers 
positifs inférieurs ou égaux à n. Par exemple, pour n = 5, affichez : 5! = 120.
*/
void Factorielle(){
    int n,i;
    int Fact=1;
    printf("Entrez un nombre: ");
    scanf(" %d",&n);
    if (n<0) {
        printf("Erreur\n");
        return;
    }
    for(i=1;i<=n;i++){
        Fact*=i;
    }
    printf("la factorielle d'un nombre %d! = %d",n,Fact);
}

/*
Challenge 3 : Somme des N Nombres
Écrivez un programme C qui demande un nombre entier n à l’utilisateur et calcule la somme des 
n premiers nombres naturels. Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.
*/
void SommeN(){
    int n,i;
    int sum=0;
    printf("Entrez un nombre: ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("la somme des %d premiers nombres naturels est: %d",n,sum);
}

/*
Challenge 4 : Affichage des N Premiers Nombres Impairs
Écrivez un programme C qui demande un nombre entier n et affiche les n premiers 
nombres impairs. Par exemple, pour n = 5, affichez : 1, 3, 5, 7, 9.
*/
void AfficheImpair(){
    int n,i,count=0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    printf("Les %d premiers nombres impairs: ", n);
    for(i=1;count<n;i+=2){
        printf("%d ", i);
        count++;
    }
    printf("\n");
}

/*
Challenge 5 : Calcul de la Puissance
Écrivez un programme C qui calcule la puissance d'un nombre entier base élevé à un exposant exposant. 
Utilisez une boucle pour effectuer le calcul. Par exemple, pour base = 3 et exposant = 4, le résultat est 3^4 = 81.
*/
void Puissance(){
    int base,exposant;
    int i;
    int res=1;
    printf("Entrez un base: ");
    scanf("%d",&base);
    printf("Entrez un exposant: ");
    scanf("%d",&exposant);
    for(i=1;i<=exposant;i++){
        res=res*base;
    }
    printf("%d^%d=%d\n", base, exposant, res);
}

/*
Challenge 6 : Affichage des N Premiers Nombres Pair
Écrivez un programme C qui demande un nombre entier n et affiche les n 
premiers nombres pairs. Par exemple, pour n = 4, affichez : 2, 4, 6, 8.
*/
void AffichePair(){
    int n,i,count=0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    printf("Les %d premiers nombres pairs: ", n);
    for(i=0;count<n;i+=2){
        printf("%d ", i);
        count++;
    }
    printf("\n");
}

/*
Challenge 7 : Inversion d'un Entier
Écrivez un programme C qui lit un entier à plusieurs chiffres et l'affiche en ordre 
inverse sans utiliser de tableaux. Par exemple, si l'entrée est 12345, affichez 54321.
*/
void InverseNbr(){
    int nb,chiffre,inv=0;
    printf("Entrez un nombre: ");
    scanf("%d", &nb);
    while(nb>0){
        chiffre=nb%10;
        inv=inv*10+chiffre;
        nb/=10;
    }
    printf("L'inverse est : %d\n", inv);
}

/*
Challenge 8 : Affichage de la Suite de Fibonacci
Écrivez un programme C qui génère les n premiers termes de la suite de Fibonacci, où n est entré par l’utilisateur.
La suite de Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).
*/
//Suite De Fibonacci non récursif ==> Un = Un-1 + Un-2 avec U0=0 et U1=1
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

//Suite De Fibonacci recursif (fonction kat3ayat lrasha)
int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}

void F(){
    int n;
    int fib;
    printf("Entrez un nombre: ");
    scanf("%d",&n);
    fib=Fibonacci(n);
    printf("Fibonacci(%d)=%d\n", n, fib);
    SuiteFibonacci(n);
}
/*
Challenge 9 : Compteur de Chiffres
Écrivez un programme C qui demande à l’utilisateur un entier positif et compte le nombre de 
chiffres dans cet entier. Par exemple, pour n = 12345, affichez : Nombre de chiffres = 5.
*/
void CompteurChiffres(){
    int n,count=0;
    printf("Entrez un entier positif: ");
    scanf("%d", &n);
    if(n==0){
        count=1;
    }else{
        while(n>0){
            n=n/10;
            count++;
        }
    }
    printf("Nombre de chiffres = %d\n", count);
}

/*
Challenge 10 : Calcul de la Somme des N Entiers
Écrivez un programme C qui demande à l’utilisateur un nombre entier n et calcule la somme des n premiers entiers naturels en utilisant une boucle. 
Par exemple, pour n = 3, la somme est 1 + 2 + 3 = 6.
*/
void SommeNEntiers(){
    int n,i,somme=0;
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        somme += i;
    }
    printf("La somme des %d premiers entiers naturels est: %d\n", n, somme);
}

int main(){
    //challenge1
        SaisieTableMult();
    //challenge2
        Factorielle();
    //challenge3
        SommeN();
    //challenge4
        AfficheImpair();
    //challenge5
        Puissance();
    //challenge6
        AffichePair();
    //challenge7
        InverseNbr();
    //challenge8
        F();
    //challenge9
        CompteurChiffres();
    //challenge10
        SommeNEntiers();
    return 0;
}