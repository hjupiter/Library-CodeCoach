/*
El ejemplo siguiente define un evento con tres métodos asociados a él. 
Cuando se desencadena el evento, los métodos se ejecutan. A continuación, se quita 
un método del evento y se desencadena de nuevo el evento.
*/

// Declare the delegate handler for the event:
public delegate void MyEventHandler();

class TestEvent
{
    // Declare the event implemented by MyEventHandler.
    public event MyEventHandler TriggerIt;

    // Declare a method that triggers the event:
    public void Trigger()
    {
        TriggerIt();
    }
    // Declare the methods that will be associated with the TriggerIt event.
    public void MyMethod1()
    {
        System.Console.WriteLine("Hello!");
    }
    public void MyMethod2()
    {
        System.Console.WriteLine("Hello again!");
    }
    public void MyMethod3()
    {
        System.Console.WriteLine("Good-bye!");
    }

    static void Main()
    {
        // Create an instance of the TestEvent class.
        TestEvent myEvent = new TestEvent();

        // Subscribe to the event by associating the handlers with the events:
        myEvent.TriggerIt += new MyEventHandler(myEvent.MyMethod1);
        myEvent.TriggerIt += new MyEventHandler(myEvent.MyMethod2);
        myEvent.TriggerIt += new MyEventHandler(myEvent.MyMethod3);
        // Trigger the event:
        myEvent.Trigger();

        // Unsuscribe from the the event by removing the handler from the event:
        myEvent.TriggerIt -= new MyEventHandler(myEvent.MyMethod2);
        System.Console.WriteLine("\"Hello again!\" unsubscribed from the event."); 

        // Trigger the new event:
        myEvent.Trigger();
    }
}