public class BinarySearch{

	public static int BinSearch(int[] arr, int value){

		int low = 0;
		int high = arr.length - 1;
		int mid;

		do{

			mid = low/2 + high/2;

			if(arr[mid] == value){

				return mid;

			}
			else if(value > arr[mid]){

				low = mid + 1;

			}
			else if(value < arr[mid]){

				high = mid;

			}

//			System.out.println("low: " + low + " high: " + high);

		}while(high - low > 0);

		if(arr[high] == value){

			return high;

		}

		return -1;

	}

	public static void main(String[] args){

		int[] arr = {3, 4, 6, 17, 20, 77};

		int index = BinSearch(arr, 6);

		System.out.println(index);

	}

}