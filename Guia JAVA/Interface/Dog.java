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
public class Dog extends Animal implements IAnimal{

    public Dog(String type, String name) {
        super(type, name);
    }

    @Override
    public String play() {
        return "I play with the object DOG";
    }

    @Override
    public String communicate() {
        return  "The object DOG barks";
    }
    
}
