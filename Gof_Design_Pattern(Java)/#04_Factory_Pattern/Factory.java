public class Factory extends abstFactory{

    public Factory()
    {
        System.out.println("Factory 건설 완료");
    }

    @Override
    public FactoryUnit createUnit(String UnitName) {
        switch (UnitName)
        {
            case "vulture":{
                return new Vulture();
            }
            case "SiegeTank":{
                return new SiegeTank();
            }
            case "Goliath":{
                return new Goliath();
            }
        }
        return null;
    }

}
