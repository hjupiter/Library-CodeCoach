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
public class Bird extends Animal{

    public Bird() {
        super();
        setNombre("Bird");
    }

    @Override
    public void move() {
        System.out.println("The bird is flying");
    }
    
}
