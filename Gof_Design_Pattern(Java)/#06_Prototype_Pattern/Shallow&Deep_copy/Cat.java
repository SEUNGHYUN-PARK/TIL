public class Cat implements Cloneable{
    private String name;
    private CatNameCard catNameCard;


    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
    public Cat copy() throws CloneNotSupportedException
    {
        Cat ret = (Cat)this.clone();
        //ret.setCatNameCard(new CatNameCard(this.catNameCard.getYear(),this.catNameCard.getAge()));
        return ret;
    }

    public CatNameCard getCatNameCard() {
        return catNameCard;
    }

    public void setCatNameCard(CatNameCard catNameCard) {
        this.catNameCard = catNameCard;
    }
}
