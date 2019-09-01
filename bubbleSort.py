def bubbleSort():
    toSort = [6, 3, 10, 2, 9, 7, 1]
    isSorted = False
    
    print("unsorted: ")
    for i in range(0, len(toSort)):
        print(toSort[i])
    print("\n")
    
    while (not isSorted):
        isSorted = True
        for i in range(0, len(toSort) - 1):
            if toSort[i] > toSort[i + 1]:
                #swap(toSort[i], toSort[i + 1])
                temp = toSort[i]
                toSort[i] = toSort[i + 1]
                toSort[i + 1] = temp
                
                isSorted = False
    
    
    print("isSorted")
    for i in range(0, len(toSort)):
        print(toSort[i])
    print("\n")

    
bubbleSort()


#Time: O(n^2)
#Space: O(n)
