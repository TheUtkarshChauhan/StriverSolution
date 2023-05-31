
#brute force approach
def markRow(matrix, n, m, i):
    for j in range(m):
        if matrix[i][j]!=0:
            matrix[i][j] =-1

def markCol(matrix, n, m, j):
    for i in range(n):
        if matrix[i][j]!=0:
            matrix[i][j] = -1

def zeroMatrix(matrix,n,m):
    for i in range(n):
        for j in range(m):
            if matrix[i][j] ==0:
                markRow(matrix,n,m,i)
                markCol(matrix,n,m,j)
    for i in range(n):
        for j in range(m):
            if matrix[i][j] ==-1:
                matrix[i][j] = 0
    return matrix






if __name__ == "__main__":
    matrix = [[1,1,1],[1,0,1],[1,1,1,]]
    n = len(matrix)
    m = len(matrix)
    ans = zeroMatrix(matrix,n,m)
    
    print("The Final matrix is:")
    for row in ans:
        for ele in row:
            print(ele, end=" ")
        print()
            