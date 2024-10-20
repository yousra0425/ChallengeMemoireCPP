<h2>Challenge Memoire</h2>

Ce programme  teste le nombre maximum de paramètres qu'une fonction peut accepter avant de provoquer une erreur de mémoire. Il utilise un vecteur dynamique pour créer des ensembles de paramètres de taille croissante, puis les passe à une fonction de test. Le but est d'identifier à quel point la mémoire peut être allouée avant d'atteindre les limites du système, en particulier les erreurs liées à l'allocation dynamique de mémoire.

Pendant l'exécution du programme,on observe que  :

- Au fur et à mesure que i augmente, le programme alloue de plus en plus de mémoire pour stocker les vecteurs dans la variable params. À un certain moment, la mémoire disponible sur le système sera insuffisante pour continuer l'allocation, ce qui déclenchera une exception <b>bad_alloc</b>.
- Avant d'atteindre une erreur mémoire, on remarque des ralentissements significatifs, surtout lorsque la taille du vecteur devient <b>extrêmement grande</b>.

<h3>Screenshots :</h3>

<h5>Incrémentation avec une variable de type <b>Integer</b></h5>
![screenshot](challenge(int).png)
<h5>Incrémentation avec une variable de type <b>Unsigned Long Long</b></h5>
![screenshot](challenge(longlong).png)
