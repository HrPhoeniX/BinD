import java.util.Random;
import java.util.Scanner;

class Game
{
    public int number;
    public int inputNumber;
    public int noOfGuesses;

    public int getNoOfGuesses()
    {
        return noOfGuesses;
    }

    public void setNoOfGuesses(int noOfGuesses)
    {
        this.noOfGuesses = noOfGuesses;
    }

    Game()
    {
        Random randm = new Random();
        this.number = randm.nextInt(100);
    }

    void takeUserInput()
    {
        System.out.println("Guess the number");
        Scanner sc = new Scanner(System.in);
        inputNumber = sc.nextInt();
    }

    boolean isCorrectNumber()
    {
        noOfGuesses++;

        if (inputNumber==number)
        {
            System.out.println("Yes you guessed it right, it was "+number+"\nYou guessed it in "+getNoOfGuesses()+" attempts...");
            return true;
        }

        else if(inputNumber<number)
        {
            System.out.println("Too low...");
        }

        else if(inputNumber>number)
        {
            System.out.println("Too high...");
        }
        return false;
    }

}

public class GuessTheNumber {

    public static void main(String[] args) {

        Game g = new Game();

        g.setNoOfGuesses(0);

        boolean b= false;

        while(!b)
        {
            g.takeUserInput();
            b = g.isCorrectNumber();
        }

    }
}