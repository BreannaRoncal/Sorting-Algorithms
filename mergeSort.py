##Merge sort

def mergeSort(arrayToSort):
    if len(arrayToSort) > 1:
        midIndex = len(arrayToSort) / 2

        leftSide = arrayToSort[:midIndex]
        rightSide = arrayToSort[midIndex:]
        
        mergeSort(leftSide)
        mergeSort(rightSide)

        ##merge the left and right side

        tempL = 0
        tempR = 0
        temparr = 0
        while tempL < len(leftSide) and tempR < len(rightSide):
            if leftSide[tempL] < rightSide[tempR]:
                arrayToSort[temparr] = leftSide[tempL]
                tempL += 1
            else:
                arrayToSort[temparr] = rightSide[tempR]
                tempR += 1
            temparr += 1

        while tempL < len(leftSide):
            arrayToSort[temparr] = leftSide[tempL]
            tempL += 1
            temparr += 1
            
        while tempR < len(rightSide):
            arrayToSort[temparr] = rightSide[tempR]
            tempR += 1
            temparr += 1

toSort = [3, 10, 17, 0, 4, -2, 5, 1]

print("Before mergeSort: ")
for i in range(len(toSort)):
    print(str(toSort[i]))
    

mergeSort(toSort)

print("After mergeSort: ")
for i in range(len(toSort)):
    print(str(toSort[i]))


#Time: Theta O(nLogn)
#Space: O(n)
