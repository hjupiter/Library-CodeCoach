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
public class Dog extends Animal{

    public Dog() {
        super();
        setNombre("DOG");
    }

    @Override
    public void move() {
        System.out.println("The dog run in 4 legs");
    }
    
}
