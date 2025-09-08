#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Challenge 1 : Initialisation et Affichage
Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs. 
Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.
*/
void InitialiseTab(){
    int t[]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
        printf("t[%d]=%d\n", i, t[i]);
    }
}

/*
Challenge 2 : Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, puis demande à 
l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.
*/
void AfficheTab(int *t, int n){
    int i;
    for(i=0;i<n;i++){
        printf("t[%d]=%d\n",i+1,t[i]);
    }
}

void SaisieTab(){
    int *t;
    int n,i;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\nt[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    AfficheTab(t,n);
    free(t);
}

/*
Challenge 3 : Somme des Éléments
Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. 
Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.
*/
void SommeTab(){
    int sum=0;
    int *t;
    int n,i,j;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\nt[%d]= ",i+1);
        scanf("%d",&t[i]);
        sum+=t[i];
    }
    printf("la somme totale est : %d",sum);
    free(t);
}

/*
Challenge 4 : Trouver le Maximum
Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
void MaxTab(){
    int max;
    int *t;
    int n,i,j;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\nt[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    max=t[0];
    for(j=1;j<n;j++){
        if(t[j]>max){
            max=t[j];
        }
    }
    printf("le plus grand element dans le tableau est: %d",max);
    free(t);
}

/*
Challenge 5 : Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
void MinTab(){
    int min;
    int *t;
    int n,i,j;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\nt[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    min=t[0];
    for(j=1;j<n;j++){
        if(t[j]<min){
            min=t[j];
        }
    }
    printf("le plus petit element dans le tableau est: %d",min);
    free(t);
}

/*
Challenge 6 : Multiplication des Éléments
Écrivez un programme C qui multiplie chaque élément d'un tableau d'entiers par un facteur donné et affiche le tableau résultant. 
Le programme doit demander le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.
*/
void MultiTab(){
    int *t,n,i,facteur;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("Entrez le facteur de multiplication: ");
    scanf("%d",&facteur);
    for(i=0;i<n;i++){
        t[i]*=facteur;
        printf("t[%d]=%d\n",i+1,t[i]);
    }
    free(t);
}

/*
Challenge 7 : Tableau en Ordre Croissant
Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers, puis affiche 
le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.
*/
void TriCroissant(){
    int *t,n,i,j,tmp;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(t[i]>t[j]){
                tmp=t[i];
                t[i]=t[j];
                t[j]=tmp;
            }
        }
    }
    printf("Tableau trie en ordre croissant:\n");
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    printf("\n");
    free(t);
}

/*
Challenge 8 : Copie d'un Tableau
Écrivez un programme C qui copie les éléments d'un tableau d'entiers dans un autre tableau. 
Affichez les éléments du tableau original et du tableau copié pour vérifier que la copie est correcte.
*/
void CopieTab(){
    int *t,*copie,n,i;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    copie=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
        copie[i]=t[i];
    }
    printf("Tableau original: ");
    AfficheTab(t,n);
    printf("\nTableau copie: ");
    AfficheTab(copie,n);
    free(t);
    free(copie);
}

/*
Challenge 9 : Inversion d'un Tableau
Écrivez un programme C qui inverse les éléments d'un tableau d'entiers. 
Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé.
*/
void InverseTab(){
    int *t,n,i;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("Tableau inverse: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",t[i]);
    }
    printf("\n");
    free(t);
}

/*
Challenge 10 : Rechercher un Élément
Écrivez un programme C qui recherche un élément spécifique dans un tableau d'entiers en utilisant une recherche linéaire. 
Le programme doit demander à l'utilisateur le nombre d'éléments, les éléments du tableau, et l'élément à rechercher, puis afficher si l'élément est présent ou non.
*/
void RechercheTab(){
    int *t,n,i,x,ex=0;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("Entrez l'element a recherche: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(t[i]==x){
            ex=1;
            break;
        }
    }
    if(ex){
        printf("%d  existe dans le tableau\n",x);
    }
    else{
        printf("%d n'est pas existe\n",x);
    }
    free(t);
}

/*
Challenge 11 : Remplacer un Élément
Écrivez un programme C qui remplace toutes les occurrences d'une valeur spécifique dans un tableau d'entiers par une nouvelle valeur. 
Le programme doit demander à l'utilisateur le nombre d'éléments, les éléments du tableau, la valeur à remplacer, et la nouvelle valeur.
*/
void RemplacerTab(){
    int *t,n,i,val,nouv;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("Entrez la valeur a remplace: ");
    scanf("%d",&val);
    printf("Entrez la nouvelle valeur: ");
    scanf("%d",&nouv);
    for(i=0;i<n;i++){
        if(t[i]==val){
            t[i]=nouv;
        }
    }
    printf("Tableau modifie: ");
    AfficheTab(t,n);
    free(t);
}

/*
Challenge 12 : Afficher les Éléments Paire
Écrivez un programme C qui affiche uniquement les éléments pairs d'un tableau d'entiers. Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
void AffichePairs(){
    int *t,n,i;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("Elements pairs: ");
    for(i=0;i<n;i++){
        if(t[i]%2==0){
            printf("%d ",t[i]);
        }
    }
    printf("\n");
    free(t);
}

/*
Challenge 13 : Afficher les Éléments Impairs
Écrivez un programme C qui affiche uniquement les éléments impairs d'un tableau d'entiers. Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
void AfficheImpairs(){
    int *t,n,i;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("Elements impairs: ");
    for(i=0;i<n;i++){
        if(t[i]%2!=0){
            printf("%d ",t[i]);
        }
    }
    printf("\n");
    free(t);
}

/*
Challenge 14 : Calculer la Moyenne
Écrivez un programme C qui calcule la moyenne des éléments d'un tableau d'entiers. 
Le programme doit demander le nombre d'éléments, les éléments du tableau, puis afficher la moyenne.
*/
void MoyenneTab(){
    int *t,n,i,sum=0;
    float moy;
    printf("Entrez nombre des elements: ");
    scanf("%d",&n);
    t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
        sum+=t[i];
    }
    moy=(float)sum/n;
    printf("La moyenne est: %.2f\n",moy);
    free(t);
}

/*
Challenge 15 : Fusion de Deux Tableaux
Écrivez un programme C qui fusionne deux tableaux d'entiers en un seul tableau. Le programme doit demander à l'utilisateur 
le nombre d'éléments pour chaque tableau, puis les éléments des deux tableaux, et afficher le tableau fusionné.
*/
void FusionTab(){
    int *t1,*t2,*fusion;
    int n1,n2,i,j;
    printf("Entrez nombre des elements du tableau 1: ");
    scanf("%d",&n1);
    t1=malloc(n1*sizeof(int));
    for(i=0;i<n1;i++){
        printf("t1[%d]= ",i+1);
        scanf("%d",&t1[i]);
    }
    printf("Entrez nombre des elements du tableau 2: ");
    scanf("%d",&n2);
    t2=malloc(n2*sizeof(int));
    for(i=0;i<n2;i++){
        printf("t2[%d]= ",i+1);
        scanf("%d",&t2[i]);
    }
    fusion=malloc((n1+n2)*sizeof(int));
    for(i=0;i<n1;i++){
        fusion[i]=t1[i];
    }
    for(j=0;j<n2;j++){
        fusion[n1+j]=t2[j];
    }
    printf("Tableau fusionne : ");
    AfficheTab(fusion,n1+n2);
    free(t1);
    free(t2);
    free(fusion);
}

int main(){
    //challenge1
        InitialiseTab();
    //challenge2
        SaisieTab();
    //challenge3
        SommeTab();
    //challenge4
        MaxTab();
    //challenge5
        MinTab();
    //challenge6
        MultiTab();
    //challenge7
        TriCroissant();
    //challenge8
        CopieTab();
    //challenge9
        InverseTab();
    //challenge10
        RechercheTab();
    //challenge11
        RemplacerTab();
    //challenge12
       AffichePairs();
    //challenge13
        AfficheImpairs();
    //challenge14
        MoyenneTab();
    //challenge15
        FusionTab();
    return 0;
}