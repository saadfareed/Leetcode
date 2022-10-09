


def binarySearch(arr, targetVal):
    min = 0
    max = len(arr) - 1
    iter = 1
    while len(arr):
        if max < min:
            return -1
        guess = int((min + max)/2)
        if arr[guess] == targetVal:
            print("We are on iter: " + str(iter))
            print("The guess is " + str(arr[guess]))
            print("we found it!") 
            return guess
        elif arr[guess] < targetVal:
            min = guess + 1
        elif arr[guess] > targetVal:
            max = guess - 1
        
        print("We are on iter: " + str(iter))
        print("The guess is " + str(arr[guess]))
        iter += 1





values = [10, 20, 24, 25, 30, 56, 67, 68, 69, 73, 78, 80, 100, 140, 200, 205]

# the output will be the index where the target value is found
result = binarySearch(values, 20)
print("the index of target value is: " + str(result))
