import json

with open('dados.json', 'r') as dados_faturamento:
    conteudo = json.load(dados_faturamento)

# Inicializando variáveis
menor_valor = conteudo[0]['valor']
maior_valor = conteudo[0]['valor']
soma_valores = 0
num_dias_com_valor_maior_que_media = 0
num_dias_no_mes = len(conteudo)

# Calculando menor e maior valor de faturamento
for dia in conteudo:
    valor = dia['valor']
    if valor != 0:
        if valor < menor_valor:
            menor_valor = valor
        if valor > maior_valor:
            maior_valor = valor
    
    # Calculando soma dos valores para cálculo da média
    soma_valores += valor

# Calculando média de faturamento
media = soma_valores / num_dias_no_mes

# Calculando número de dias com valor maior que a média
for dia in conteudo:
    valor = dia['valor']
    if valor > media and valor != 0:
        num_dias_com_valor_maior_que_media += 1

print('Menor valor de faturamento: R$ {:.2f}'.format(menor_valor))
print('Maior valor de faturamento: R$ {:.2f}'.format(maior_valor))
print('Número de dias com valor de faturamento diário maior que a média mensal: {}'.format(num_dias_com_valor_maior_que_media))
