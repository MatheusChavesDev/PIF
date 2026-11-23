a) Classificação:
- `void exibe_mensagem(char* msg);` → recebe parâmetro (msg) e não tem valor de retorno.
- `int obter_codigo(void);` → não recebe parâmetros e tem valor de retorno (int).
- `void limpar_tela(void);` → não recebe parâmetros e não tem valor de retorno.

b) Uma função com retorno calcula algo e devolve o resultado para quem chamou, que pode guardar o valor em uma variável ou usar em uma expressão. Um procedimento (void) apenas executa uma ação, como imprimir algo na tela, e não devolve nada.
Exemplo com retorno: calcular a média de três notas (`float media(float a, float b, float c)`), porque o valor vai ser usado depois.
Exemplo de procedimento: exibir um menu de opções (`void exibeMenu(void)`), porque a função só precisa mostrar o texto.

c) Não é válida. limpar_tela() é do tipo void, ou seja, não devolve nenhum valor, então não existe nada para ser atribuído a x. O compilador acusa erro.
