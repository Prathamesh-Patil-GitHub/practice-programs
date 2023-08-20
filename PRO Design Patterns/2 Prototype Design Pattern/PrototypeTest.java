// Author : Prathamesh Patil
// Prototype Design Pattern
import java.util.HashMap;

abstract class Color implements Cloneable{
    abstract void addColor();
    protected String color;
    
    @Override
    public Object clone(){
        Object clone = null;
        try{
            clone = super.clone();
        }
        catch(CloneNotSupportedException exp){
            System.out.println(exp.getMessage());
        }
        return clone;
    }
}

class BlueColor extends Color{
    
    public void addColor(){
        System.out.println("Added Blue Color");
    }
    
    public BlueColor(){
        this.color = "blue";
    }
}

class BlackColor extends Color{
    
    public void addColor(){
        System.out.println("Added Black Color");
    }
    
    public BlackColor(){
        this.color = "black";
    }
}

class ColorStore{
    static HashMap<String, Color> mp = new HashMap<String, Color>();
    
    static{
        mp.put("blue", new BlueColor());
        mp.put("black", new BlackColor());
    }
    
    static Color getColor(String col){
        return (Color) mp.get(col).clone();
    }
    
}

class PrototypeTest {
    public static void main(String[] args) {
        System.out.println(ColorStore.getColor("blue"));
        System.out.println(ColorStore.getColor("blue"));
        
    }
}
