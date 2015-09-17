/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Abstract;

/**
 *
 * @author bakamedi
 */
public abstract class Animal {
    private String name;
    
    public Animal(){}
    
    public abstract void move();
    
    public void eat(){
        System.out.println("The "+name+" is eating");
    }

    public String getName() {
        return name;
    }
    
    public void setNombre(String s){
        this.name = s;
    }
    
    
}
