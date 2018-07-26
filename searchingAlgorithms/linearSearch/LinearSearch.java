import java.util.Scanner;

public class LinearSearch{

	public static int Search(int[] arr, int find){

		for(int i = 0; i < arr.length; i++){

			if(arr[i] == find){

				return i;

			}

		}

		return -1;

	}

	public static void main(String[] args){

		int[] arr = {6, 7, 1, 13, 6, 18, 20};

		Scanner reader = new Scanner(System.in);

		System.out.println("What number do you want to search for in the array");

		int find = reader.nextInt();
		reader.close();

		int ans = Search(arr, find);

		if(ans == -1){

			System.out.println("Integer was not found in array");

		}else{

			System.out.println("Integer was found at index " + ans);

		}

	}

}