class Solution(object):
    def isValidSudoku(self, board):
        check = set()
        digit_amount = [{} for i in range(len(board))]

        #Check rows
        for row in board:
            check.clear()
            for val in row:
                if val == ".":
                    continue
                elif val in check:
                    print(False)
                    return False
                else:
                    check.add(val)
        
        #Check columns
        for i in range(9):
            check.clear()
            for row in board:
                if row[i] == ".":
                    continue
                elif row[i] in check:
                    print(False)
                    return False
                else:
                    check.add(row[i])


        for row in range(len(board)):
            digit_amount_counter =  (row//3)*3

            for column in range(len(board[0])):
                if column % 3 == 0 and column != 0:
                    digit_amount_counter += 1
                if board[row][column] in digit_amount[digit_amount_counter]:
                    digit_amount[digit_amount_counter][board[row][column]] += 1
                else:
                    digit_amount[digit_amount_counter][board[row][column]] = 1

        for cell in digit_amount:
            for el in cell:
                if el != "." and cell[el] > 1:
                    print(False)
                    return False
        print(True)
        return True