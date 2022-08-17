
def getSubArray(arr, n, K):
    currSum = 0
    prevDif = 0
    currDif = 0
    result = [-1, -1, abs(K-abs(currSum))]
    resultTmp = result
    i = 0
    j = 0

    while(i<= j and j<n):

        # Add Last element tp currSum
        currSum += arr[j]

        # Save Difference of previous Iteration
        prevDif = currDif

        # Calculate new Difference
        currDif = K - abs(currSum)

        # When the Sum exceeds K
        if(currDif <= 0):
            if abs(currDif) < abs(prevDif):

            # Current Difference greater in magnitude
            # Store Temporary Result
                resultTmp = [i, j, currDif]
            else:

            # Diffence in Previous was lesser
            # In previous, Right index = j-1
                resultTmp = [i, j-1, prevDif]

            # In next iteration, Left Index Increases
            # but Right Index remains the Same
            # Update currSum and i Accordingly
            currSum -= (arr[i]+arr[j])

            i += 1

        # Case to simply increase Right Index
        else:
            resultTmp = [i, j, currDif]
            j += 1

        if(abs(resultTmp[2]) < abs(result[2])):
        # Check if lesser deviation found
            result = resultTmp

    return result

# Driver Code
def main():
    arr = [15, -3, 5, 2, 7, 6, 34, -6]

    n = len(arr)

    K = 50

    [i, j, minDev] = getSubArray(arr, n, K)

    if(i ==-1):
        print("The empty array shows minimum Deviation")
        return 0

    for i in range(i, j+1):
        print arr[i],


main()
