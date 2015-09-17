/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Interface;

/**
 *
 * @author bakamedi
 */
public class Main {
    public static void main(String [] args){
        Animal cat = new Cat("Persian cat", "misifu");
        Animal dog = new Dog("Dalmatian", "dobby");
        
        System.out.print("How is the name of the object cat? "); System.out.println("It name is "+cat.getName());
        System.out.print("Which is the race of your object cat? "); System.out.println("The race is the "+cat.getType());
        System.out.print("How is the name of the object dog? "); System.out.println("It name is "+dog.getName());
        System.out.print("which is the race of your the object dog? ");System.out.println("The race is the "+dog.getType());
        
        
    }
}
