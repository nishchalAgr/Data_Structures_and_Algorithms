def search(arr, ans):
	i = 0
	while i < len(arr):
		if(arr[i] == ans):
			return i

		i = i + 1
		
	return -1
	

arr = [1,2,3,4,5]

index = search(arr, 8)

if index == -1:
	print("element not found")
else:
	print("element found at index ")
	print(index)