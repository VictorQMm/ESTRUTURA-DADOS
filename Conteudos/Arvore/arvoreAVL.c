//O que é?
// Árvore AVL é uma árvore binária de busca balanceada, ou seja, uma árvore balanceada são as árvores que minimizam o número de comparações efetuadas no pior caso para uma busca com chaves de probabilidades de ocorrências idênticas. O nome AVL vem de seus criadores soviéticos Adelson Velsky e Landis.

//Como funcionam?
// Uma árvore AVL é uma árvore binária de busca auto-balanceada. Para cada nó, a altura das duas subárvores filhas difere no máximo por um, garantindo que a árvore esteja balanceada e que as operações de adição, remoção e busca sejam eficientes. Isso significa que: As alturas das duas subárvores a partir de cada nó são exatamente iguais. Cada nó da árvore possui até três descendentes.

//Pra que serve?
// A árvore AVL é muito útil, pois executa as operações de inserção, busca e remoção em tempo O(log n). Porém esta estrutura é um pouco mais lenta para inserção e remoção. Isso se deve ao fato de as árvores AVL serem mais rigidamente balanceadas.´

//O que é o fator de baleanceamento?
// Aarvore aceita = 1, 0 , -1, está balanceada diferente desses valores está desbalanceada

//A altura é contada de cima pra baixo, todas as bases tem o valor = 1, acima dela 2, e assim por diante. Altura = raiz + nó folha;  

//Fator de baleanceamento: F = Direita - Esquerda           (As perninhas)


//Rotação Esq
//Rotação Direita
//Rotação Dupla Direita & Esquerda
//Rotação Dupla Esquerda & Direita
