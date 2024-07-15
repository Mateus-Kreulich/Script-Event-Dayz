void main()
{
    // Coordenadas da torre de rádio em Altal (exemplo fictício, ajuste conforme necessário)
    vector spawnLocation = "7500 250 7500";

    // Inicia o evento para spawnar uma VSD a cada hora (3600 segundos)
    CustomItemEvent customItemEvent = new CustomItemEvent("SVD", 3600, spawnLocation);
}
