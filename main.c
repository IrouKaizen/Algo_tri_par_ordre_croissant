#include <stdio.h>

#define MAX_LENGTH 100

// Fonction pour trier un tableau d'entiers
void sortArray(int arr[], int length)
{
    int i, j, temp; // Variables pour les boucles et pour le stockage temporaire d'une valeur

    // Boucle externe pour parcourir tous les éléments du tableau
    for (i = 0; i < length - 1; i++)
    {
        // Boucle interne pour comparer chaque paire d'éléments
        for (j = 0; j < length - i - 1; j++)
        {
            // Si l'élément actuel est plus grand que le suivant, les échanger
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int length, i;
    int arr[MAX_LENGTH]; // Tableau pour stocker les entrées de l'utilisateur

    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &length); // Lire le nombre d'éléments à entrer

    printf("Entrez les éléments : ");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]); // Lire les éléments
    }

    sortArray(arr, length); // Tri du tableau

    printf("Le tableau trié : \n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]); // Afficher les éléments triés
    }

    return 0;
}
