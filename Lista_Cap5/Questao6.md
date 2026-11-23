a) Com `< >`, como em `#include <stdio.h>`, o compilador procura o arquivo nas pastas de bibliotecas padrão do sistema. Usamos para as bibliotecas que vêm com a linguagem (stdio.h, math.h, etc.).
Com aspas, como em `#include "areas.h"`, ele procura primeiro na pasta do próprio programa e depois nas pastas padrão. Usamos para os arquivos de cabeçalho criados por nós.

b) O `#undef SOMA` apaga a definição da macro SOMA. A partir dessa linha, SOMA deixa de existir e, se for usada, o compilador vai tratá-la como um nome desconhecido. A forma `#undef SOMA(x,y)` está incorreta porque o #undef recebe apenas o nome da macro, sem a lista de parâmetros.

c) Será impresso "Modo normal". Essa decisão é tomada no pré-processamento, antes da compilação: o pré-processador vê que DEBUG não existe, apaga o trecho do #ifdef e mantém só o trecho do #else. As diretivas não aparecem no executável porque, quando o compilador começa a trabalhar, elas já foram processadas e removidas. Só sobra o código C comum que foi escolhido.
