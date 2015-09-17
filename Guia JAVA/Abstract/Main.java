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
public class Main {
    public static void main(String [] args){
        Dog doggy = new Dog();
        doggy.eat();
        doggy.move();
        
        Bird burbu = new Bird();
        burbu.eat();
        burbu.move();
        
    }
}
