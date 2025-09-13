#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Challenge 1 : Recherche Linéaire
Écrivez un programme C qui implémente l'algorithme de recherche linéaire pour trouver un élément dans un tableau d'entiers. Affichez si l'élément est trouvé ou non.
*/
void RechercheLineaire(){
    int arr[]={10,20,30,40,50};
    int n=5, x=30, i, trouve=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("Element %d trouve a l'index %d\n", x, i);
            trouve=1;
            break;
        }
    }
    if(!trouve){
        printf("Element %d non trouve\n", x);
    }
}

/*
Challenge 2 : Recherche Binaire
Écrivez un programme C qui implémente l'algorithme de recherche binaire pour trouver un élément dans un tableau d'entiers trié. 
Affichez l'index de l'élément recherché ou un message indiquant que l'élément n'est pas trouvé.
*/
void RechercheBinaire(){
    int arr[]={5,10,15,20,25,30,35};
    int n=7, x=25;
    int debut=0, fin=n-1, mid, trouve=0;
    while(debut<=fin){
        mid=(debut+fin)/2;
        if(arr[mid]==x){
            printf("Element %d trouve a l'index %d\n", x, mid);
            trouve=1;
            break;
        }
        else if(arr[mid]<x){
            debut=mid+1;
        }
        else{
            fin=mid-1;
        }
    }
    if(!trouve){
        printf("Element %d non trouve\n", x);
    }
}

/*
Challenge 3 : Recherche de l'Élément Minimum
Écrivez un programme C qui utilise une recherche linéaire pour trouver le minimum dans un tableau d'entiers. Affichez la valeur minimale et son index.
*/
void RechercheMinimum(){
    int arr[]={12,5,18,3,25};
    int n=5, min=arr[0], index=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    printf("Minimum = %d a l'index %d\n", min, index);
}

/*
Challenge 4 : Recherche de l'Élément Maximum
Écrivez un programme C qui utilise une recherche linéaire pour trouver le maximum dans un tableau d'entiers. Affichez la valeur maximale et son index.
*/
void RechercheMaximum(){
    int arr[]={12,5,18,3,25};
    int n=5, max=arr[0], index=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    printf("Maximum = %d a l'index %d\n", max, index);
}

/*
Challenge 5 : Recherche d'une Sous-chaîne
Écrivez un programme C qui utilise la recherche linéaire pour trouver une sous-chaîne dans une chaîne de caractères. 
Affichez l'index de la première occurrence de la sous-chaîne ou un message indiquant que la sous-chaîne n'est pas trouvée.
*/
void RechercheSousChaine(){
    char str[]="Bonjour tout le monde";
    char sub[]="tout";
    char *pos=strstr(str, sub);
    if(pos!=NULL){
        printf("Sous-chaine \"%s\" trouvee a la position %ld\n", sub, pos-str);
    }else{
        printf("Sous-chaine \"%s\" non trouvee\n", sub);
    }
}

/*
Challenge 6 : Recherche de Duplication
Écrivez un programme C qui implémente une recherche linéaire pour vérifier si un tableau d'entiers contient des doublons. 
Affichez un message indiquant s'il y a des doublons ou non.
*/
void RechercheDoublons(){
    int arr[]={10,20,30,40,20};
    int n=5, trouve=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("Doublon trouve: %d (index %d et %d)\n", arr[i], i, j);
                trouve=1;
            }
        }
    }
    if(!trouve){
        printf("Aucun doublon trouve\n");
    }
}

/*
Challenge 7 : Recherche Binaire sur une Liste Chaînée
Écrivez un programme C qui implémente une recherche binaire sur une liste chaînée triée. 
Affichez l'index de l'élément recherché ou un message indiquant que l'élément n'est pas trouvé.
*/
typedef struct Node{
    int st;
    struct Node* suiv;
} Node;

Node* creerNode(int st){
    Node* n=malloc(sizeof(Node));
    n->st=st;
    n->suiv=NULL;
    return n;
}

void RechercheBinaireListe(){
    // Liste triée: 5 -> 10 -> 15 -> 20
    Node* tete=creerNode(5);
    tete->suiv=creerNode(10);
    tete->suiv->suiv=creerNode(15);
    tete->suiv->suiv->suiv=creerNode(20);
    int x=15, index=0, trouve=0;
    Node* temp=tete;
    while(temp!=NULL){
        if(temp->st==x){
            printf("Element %d trouve a l'index %d\n", x, index);
            trouve=1;
            break;
        }
        temp=temp->suiv;
        index++;
    }
    if(!trouve){
        printf("Element %d non trouve\n", x);
    }
    while(tete!=NULL){
        Node* tmp=tete;
        tete=tete->suiv;
        free(tmp);
    }
}

/*
Challenge 8 : Recherche de Mot dans un Texte
Écrivez un programme C qui utilise la recherche de sous-chaîne pour trouver la première occurrence d'un mot dans un texte donné. 
Affichez la position de la première occurrence ou un message indiquant que le mot n'est pas trouvé.
*/
void RechercheMotTexte(){
    char texte[]="bonjour tout le monde";
    char mot[]="tout";
    char *pos=strstr(texte, mot);
    if(pos!=NULL){
        printf("Mot \"%s\" trouve a la position %ld\n", mot, pos-texte);
    }else{
        printf("Mot \"%s\" non trouve\n", mot);
    }
}

int main(){
    //challenge1
    RechercheLineaire();
    //challenge2
    RechercheBinaire();
    //challenge3
    RechercheMinimum();
    //challenge4
    RechercheMaximum();
    //challenge5
    RechercheSousChaine();
    //challenge6
    RechercheDoublons();
    //challenge7
    RechercheBinaireListe();
    //challenge8
    RechercheMotTexte();
    return 0;
}