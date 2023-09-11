class Solution(object): 
    def searchMatrix(self, matrix, target):
        start = 0
        end = len(matrix[0])-1
        mid = start  + (end - start)//2

        for i in range(len(matrix)):
            start = 0
            end = len(matrix[0])-1
            while(start <= end):
                mid = start  + (end - start)//2
                if matrix[i][mid] == target:
                    return True
                elif target > matrix[i][mid]:
                    start = mid +1
                else:
                    end = mid-1

        return False