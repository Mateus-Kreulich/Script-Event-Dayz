class CustomItemEvent
{
    private ref Timer m_Timer;
    private string m_ItemType;
    private float m_Interval; // Intervalo em segundos
    private vector m_SpawnLocation;
    private ref array<EntityAI> m_SpawnedItems;

    void CustomItemEvent(string itemType, float interval, vector spawnLocation)
    {
        m_ItemType = itemType;
        m_Interval = interval;
        m_SpawnLocation = spawnLocation;
        m_SpawnedItems = new array<EntityAI>;
        m_Timer = new Timer(CALL_CATEGORY_GAMEPLAY);

        // Inicia o evento
        m_Timer.Run(m_Interval, this, "SpawnItem", NULL, true);
    }

    void SpawnItem()
    {
        // Verifica a hora do dia, spawna o item apenas durante o dia (exemplo: entre 6h e 18h)
        int hour, minute;
        GetHourMinute(hour, minute);
        if (hour < 6 || hour >= 18)
        {
            Print("CustomItemEvent: Not spawning item, it's night time.");
            return;
        }

        // Limpa itens antigos para garantir apenas um VSD presente
        CleanupSpawnedItems();

        // Faz spawn do item na localização específica
        EntityAI item = EntityAI.Cast(GetGame().CreateObject(m_ItemType, m_SpawnLocation));
        if (item)
        {
            m_SpawnedItems.Insert(item);
            NotifyPlayers(item);

            // Log para confirmar o spawn
            Print("CustomItemEvent: Spawned " + m_ItemType + " at " + m_SpawnLocation.ToString());
        }
    }

    void CleanupSpawnedItems()
    {
        foreach (EntityAI item : m_SpawnedItems)
        {
            if (item)
            {
                GetGame().ObjectDelete(item);
            }
        }
        m_SpawnedItems.Clear();
    }

    void NotifyPlayers(EntityAI item)
    {
        // Envia uma notificação global para todos os jogadores
        string message = "A VSD has spawned at the radio tower in Altal!";
        array<Man> players = new array<Man>;
        GetGame().GetPlayers(players);
        foreach (Man player : players)
        {
            if (player)
            {
                Param1<string> msgParam = new Param1<string>(message);
                GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, msgParam, true, player.GetIdentity());
            }
        }
    }
}
