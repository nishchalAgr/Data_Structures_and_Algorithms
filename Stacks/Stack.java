import java.util.Scanner;


class StackArr{

	static final int MAX = 10;
	static int[] arr;

	StackArr(){

		arr = new int[MAX];

		for(int i = 0; i < MAX; i++){

			arr[i] = -1;

		}

	}

	public static void addElement(int value){

		for(int i = 0; i < MAX; i++){

			if(arr[i] == -1){

				arr[i] = value;
				break;

			}

		}

	}

	public static void display(){

		System.out.println("\n");

		for(int i = MAX - 1; i > -1; i--){

			if(arr[i] != -1){

				System.out.println(arr[i]);

			}

		}

		System.out.println("\n");

	}

	public static void pop(){

		for(int i = MAX - 1; i > -1; i--){

			if(arr[i] != -1){

				arr[i] = -1;
				break;

			}

		}

	}

}

public class Stack{
	
	public static void main(String[] args){
	
		StackArr stack = new StackArr();

		stack.addElement(4);
		stack.addElement(7);
		stack.addElement(0);
		stack.addElement(11);
		stack.addElement(3);
		stack.addElement(8);
		stack.addElement(2);

		stack.display();

		stack.pop();
		stack.pop();
		stack.pop();

		stack.display();
	
	}

}