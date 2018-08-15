package impl;

import Enums.EnemyStatus;
import Interfaces.Observer;
import Interfaces.Subject;

import java.util.LinkedList;
import java.util.List;

public class Avengers implements Subject {

    private List<Observer> heroes;
    private EnemyStatus stat;

    public Avengers()
    {
        System.out.println("어벤져스 창설");
        heroes = new LinkedList<Observer>();
    }

    @Override
    public void add(Observer observer) {
        heroes.add(observer);
    }

    @Override
    public void remove(Observer observer) {
        if(heroes.contains(observer))
            heroes.remove(observer);
    }

    @Override
    public void notifyObservers() {
        for(Observer hero : heroes)
        {
            hero.update(stat);
        }
    }

    @Override
    public void notifyObserver(Observer observer) {
        observer.update(stat);
    }

    public void setStat(EnemyStatus stat)
    {
        this.stat = stat;
        notifyObservers();
    }
    public List<Observer> getMembers()
    {
        return this.heroes;
    }

}
