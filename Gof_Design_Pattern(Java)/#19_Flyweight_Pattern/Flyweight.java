class Flyweight{
    Map<String, Subject> map = new HashMap<String, Subject>();
    public Subject getSubject(String name){
        Subject subject = map.get(name);
        if(subject == null){
            subject = new Subject(name);
            map.put(name, subject);
        }
        return subject;
    }
}
