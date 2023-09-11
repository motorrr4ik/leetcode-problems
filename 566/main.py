class Solution(object):
    def matrixReshape(self,mat, r, c):
        

        if r*c != len(mat)*len(mat[0]):
            return mat

        reshaped = [[None]*c for _ in range(r)]

        cur_pos = 0
        for i in range(len(mat)):
            for j in range(len(mat[0])):
                reshaped[cur_pos//c][cur_pos%c] = mat[i][j]
                cur_pos += 1
        return reshaped
        