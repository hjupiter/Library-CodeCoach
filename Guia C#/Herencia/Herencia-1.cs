/*
El código siguiente define una clase denominada CoOrds con dos variables miembro 
privadas x e y que representan la posición del punto. Se tiene acceso a estas variables 
mediante propiedades denominadas X e Y, respectivamente:
*/

public class CoOrds
{
    private int x, y;

    public CoOrds()  // constructor
    {
        x = 0;
        y = 0;
    }

    public int X
    {
        get { return x; }
        set { x = value; }
    }

    public int Y
    {
        get { return y; }
        set { y = value; }
    }
}