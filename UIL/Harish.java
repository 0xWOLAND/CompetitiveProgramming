import java.util.*;
import java.io.*;

public class Harish
{
	public static void main(String[] args) throws FileNotFoundException
	{
		Scanner scan = new Scanner(new File("harish.dat"));
		int numlines = scan.nextInt();
		char[][] arr = new char[5][5];
		scan.nextLine();
		for(int i = 0; i < numlines; i++)
		{
			boolean valid = true;
			for(int r = 0; r < 5; r++)
			{
				String row = scan.nextLine();
				for(int c = 0; c < 5; c++)
					arr[r][c] = row.charAt(c);		
			}
			for(int r = 0; r < 5; r++)
			{
				for(int c = 0; c < 5; c++)
				{
					if(arr[r][c] == 'a')
					{
						if(r-2 >= 0 && c-2 >= 0 && arr[r-2][c-2] == 'a') valid = false;
						if(r-2 >= 0 && c+2 < 5 && arr[r-2][c+2] == 'a') valid = false;
						if(r+2 < 5 && c-2 >= 0 && arr[r+2][c-2] == 'a') valid = false;
						if(r+2 < 5 && c+2 < 5 && arr[r+2][c+2] == 'a') valid = false;
					}
				}		
			}
			if(valid) System.out.println("valid");
			else System.out.println("invalid");
			scan.nextLine();
		}
	}
}