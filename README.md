# Laboratorio_01
Laboratorio_01

Nesta prática de laboratótio foi possível observar que o uso de uma linguagem de programação com abstração superior permite uma Legibilidade superior ao código.

Foi possível observar 5 casos de temporização diferentes:
A teórica temporização de 1 segundo para cada estado na configuração de PLL 24MHz e nivel de otimização low, aparentemente próxima a 1 segundo;
A teórica temporização de 1 segundo para cada estado na configuração de PLL 24MHz e nivel de otimização High(Size), aparentemente superior a 1 segundo;
A teórica temporização de 1 segundo para cada estado na configuração de PLL 24MHz e nivel de otimização High(Speed), aparentemente inferior a 1 segundo;
A teórica temporização de 1 segundo para cada estado na configuração de PLL 120MHz e nivel de otimização low, aparentemente inferior a 1 segundo;
A teórica temporização de 1 segundo para cada estado na configuração de PLL 120MHz e nivel de otimização High(Size), aparentemente superior a 1 segundo;
A teórica temporização de 1 segundo para cada estado na configuração de PLL 120MHz e nivel de otimização High(Speed), aparentemente inferior a 1 segundo;

Visto que a constante de tempo para conseguir os estados (1s Led D1 on e 1s Led D1 off) na frequência de PLL de 24MHz é constante, o aumento da frequência de operação do kit de desenvolvimento causou o encurtamento dos estados possíveis. Ao modificar as configurações de otimização de código foi possível observar mudanças siginificativas nos tempos de cada estado.
