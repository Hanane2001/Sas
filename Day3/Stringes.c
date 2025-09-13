#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Challenge 1 : Affichage d'une Chaîne
Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.
*/
void AfficheChaine(){
    char str[100];
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0'; 
    printf("La chaine est: %s\n", str);
}

/*
Challenge 2 : Longueur de la Chaîne
Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().
*/
void LongueurChaine(){
    char str[100];
    int i=0;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    while(str[i]!='\0'){
        i++;
    }
    printf("Longueur = %d\n", i);
}

/*
Challenge 3 : Concaténation de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. Affichez la chaîne résultante.
*/
void ConcatChaine(){
    char s1[100], s2[100];
    printf("Entrez chaine 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")]='\0';
    printf("Entrez chaine 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")]='\0';
    strcat(s1, s2);
    printf("Resultat: %s\n", s1);
}

/*
Challenge 4 : Comparaison de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non. Affichez un message indiquant si les chaînes sont égales ou différentes.
*/
void CompareChaine(){
    char s1[100], s2[100];
    printf("Entrez chaine 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")]='\0';
    printf("Entrez chaine 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")]='\0';
    if(strcmp(s1, s2)==0){
        printf("Les chaines sont egales\n");
    }else{
        printf("Les chaines sont differentes\n");
    }
}

/*
Challenge 5 : Inversion de Chaîne
Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".
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
Challenge 6 : Compte des Occurrences d'un Caractère
Écrivez un programme C qui lit une chaîne de caractères et un caractère, puis compte et affiche combien de fois le caractère apparaît dans la chaîne.
*/
void OccurrencesCar(){
    char str[100], c;
    int i, count=0;
    int taille;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    printf("Entrez un caractere: ");
    scanf("%c", &c);
    taille=strlen(str);
    for(i=0; i<taille; i++){
        if(str[i]==c){
            count++;
        }
    }
    printf("le caractere %c apparait %d fois\n", c, count);
}

/*
Challenge 7 : Conversion en Majuscules
Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en majuscules. Affichez la chaîne modifiée.
*/
void Majuscules(){
    char str[100];
    int taille;
    int i;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    taille=strlen(str);
    for(i=0; i<taille; i++){
        if(str[i]>='a' && str[i]<='z') {
         str[i]=str[i]-32;
      }
    }
    printf("Majuscules: %s\n", str);
}

/*
Challenge 8 : Conversion en Minuscules
Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en minuscules. Affichez la chaîne modifiée.
*/
void Minuscules(){
    char str[100];
    int i,taille;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    taille=strlen(str);
    for(i=0; i<taille; i++){
        if(str[i]>='A' && str[i]<='Z') {
         str[i]=str[i]+32;
      }
    }
    printf("Minuscules: %s\n", str);
}

/*
Challenge 9 : Suppression des Espaces
Écrivez un programme C qui lit une chaîne de caractères et supprime tous les espaces. Affichez la chaîne résultante.
*/
void SupprimerEspaces(){
    char str[100], res[100];
    int i, taille, j=0;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    taille=strlen(str);
    for(i=0; i<taille; i++){
        if(str[i]!=' '){
            res[j++]=str[i];
        }
    }
    res[j]='\0';
    printf("Sans espaces: %s\n", res);
}

/*
Challenge 10 : Trouver un Sous-String
Écrivez un programme C qui lit une chaîne de caractères principale et une sous-chaîne, puis vérifie si la sous-chaîne est présente dans la chaîne principale.
 Affichez un message indiquant si la sous-chaîne est trouvée ou non.
*/
void TrouverSousChaine(){
    char str[100], sub[50];
    printf("Entrez chaine principale: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    printf("Entrez sous-chaine: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")]='\0';
    if(strstr(str, sub)!=NULL){
        printf("Sous-chaine trouvee\n");
    }else{
        printf("Sous-chaine non trouvee\n");
    }
}

int main(){
    //challenge1
    AfficheChaine();
    //challenge2
    LongueurChaine();
    //challenge3
    ConcatChaine();
    //challenge4
    CompareChaine();
    //challenge5
    InverseChaine();
    //challenge6
    OccurrencesCar();
    //challenge7
    Majuscules();
    //challenge8
    Minuscules();
    //challenge9
    SupprimerEspaces();
    //challenge10
    TrouverSousChaine();
    return 0;
}
