package Interfaces;

import Enums.EnemyStatus;

public interface Observer {
    public void update(EnemyStatus stat);
}
