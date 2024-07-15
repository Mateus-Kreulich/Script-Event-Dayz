
# DayZ Custom Item Event

Este repositório contém scripts personalizados para o mod DayZ, utilizando Enforce Script. Os scripts foram desenvolvidos para criar um evento que faz spawn de uma VSD (arma) no topo da torre de rádio em Altal a cada hora.

## Estrutura do Repositório

```
DayZServer/
├── scripts/
│   ├── CustomItemEvent.enforce
│   ├── main.enforce
│   └── ... (outros scripts)
└── ... (outros arquivos do servidor)
```

## Descrição dos Arquivos

### CustomItemEvent.enforce

Este script define a classe `CustomItemEvent`, que gerencia o evento de spawn do item VSD. Ele inclui funcionalidades como:

- Temporizador para controlar a frequência do evento.
- Verificação de hora do dia para spawnar o item apenas durante o dia.
- Limpeza de itens antigos para garantir que apenas um VSD esteja presente na localização de spawn.
- Notificações globais para todos os jogadores informando sobre o spawn do item.

### main.enforce

Este script contém a função `main()` que inicializa o evento de spawn do item VSD no topo da torre de rádio em Altal.

## Como Usar

1. **Coloque os arquivos `CustomItemEvent.enforce` e `main.enforce` no diretório `scripts` do seu servidor DayZ.**

2. **Certifique-se de que o servidor esteja configurado para carregar e executar esses scripts.**

   - Isso pode envolver a edição de arquivos de configuração do servidor para incluir os scripts, se necessário.

3. **Reinicie o servidor para que os scripts sejam carregados e executados.**

## Contribuições

Sinta-se à vontade para contribuir com melhorias ou novas funcionalidades. Para contribuir, siga os passos abaixo:

1. Faça um fork do repositório.
2. Crie uma branch para suas alterações (`git checkout -b minha-alteracao`).
3. Commit suas alterações (`git commit -am 'Adicionar nova funcionalidade'`).
4. Push para a branch (`git push origin minha-alteracao`).
5. Crie um Pull Request.

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## Contato

Para dúvidas ou sugestões, sinta-se à vontade para abrir uma issue no GitHub ou enviar um e-mail para [seu-email@exemplo.com](mailto:seu-email@exemplo.com).
