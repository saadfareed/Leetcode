import random
list1=[4,3,1,4]
list2=[3,2,1,2]
list3=[1,2,3,4]
list4=[2,2,1,2]
board1=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]] 
board2=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]] 
board3=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]] 
board4=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]] 
indexes=[]
sort=[]
pairs=[]
qno=0
def Board(board):
    
    print("8 queen problem")
    for i in range(len(board)):
        for j in range(len(board)):
            print(board[i][j],end=" ")
        print("\n")
def fitness(board,list1):
    for i in range(0,4):
        x=list1[i]
        board[x-1][i]=i+1
    for i in range(len(board)):
        for j in range(len(board)):
            print(board[i][j],end=" ")
        print("\n")
    for i in range(0,4):
        indexes.append((list1[i]-1,i))
        print(indexes[i])
def IsAttack(indexes,qno, board):
    attack=0
    count=0
    n=0
    m=0
    i,j=indexes[qno]
    n=i
    m=0
    while m<4:
        if (n,m) in indexes and sorted((qno,board[n][m])) not in pairs:
            count=count+1
            pairs.append(sorted((qno,board[n][m])))
        m=m+1

    n=i+1
    m=j+1
    while n<4 and m<4:  #lower right
        if (n,m) in indexes and sorted((qno,board[n][m])) not in pairs:
            count=count+1
            pairs.append(sorted((qno,board[n][m])))
        n+=1
        m+=1
    n=i-1
    m=j+1
    while m<4 and n>=0: #upper right
        if (n,m) in indexes and sorted((qno,board[n][m])) not in pairs:
            count=count+1
            pairs.append(sorted((qno,board[n][m])))
        n-=1
        m+=1
    if count!=0:
        count=count-1
    print("count= ",count)
    attack=count
    return attack
def crossover(list1, list2):

    newl1=list1[:]
    list1[2]=list2[2]
    list1[3]=list2[3]
    list2[2]=newl1[2]
    list2[3]=newl1[3]
    print("list1= ",list1)
    print("list2= ",list2)



    
def mutate(list1):
    n=len(list1)
    c=random.randint(0,n-1)
    m=random.randint(0, n-1)
    list1[c]=m
    print("After mutation list is: ", list1)
    

    
    
   
            
Board(board1)
while 1:
    fitness(board1,list1)
    a=IsAttack(indexes,0,board1)
    b=IsAttack(indexes,1,board1)
    c=IsAttack(indexes,2,board1)
    d=IsAttack(indexes,3,board1)
    no_attack=6-(a+b+c+d)
    if no_attack==6:
        break
    print("non_attack= ",no_attack)
    print("\n")
    no_attack=0
    indexes=[]
    pairs=[]
    fitness(board2,list2)
    a=IsAttack(indexes,0,board2)
    b=IsAttack(indexes,1,board2)
    c=IsAttack(indexes,2,board2)
    d=IsAttack(indexes,3,board3)
    no_attack=6-(a+b+c+d)
    if no_attack==6:
        break
    print("non_attack= ",no_attack)
    print("\n")
    no_attack=0
    indexes=[]
    pairs=[]
    fitness(board3,list3)
    a=IsAttack(indexes,0,board3)
    b=IsAttack(indexes,1,board3)
    c=IsAttack(indexes,2,board3)
    d=IsAttack(indexes,3,board3)
    no_attack=6-(a+b+c+d)
    if no_attack==6:
        break
    print("non_attack= ",no_attack)
    print("\n")
    no_attack=0
    indexes=[]
    pairs=[]
    fitness(board4,list4)
    a=IsAttack(indexes,0,board4)
    b=IsAttack(indexes,1,board4)
    c=IsAttack(indexes,2,board4)
    d=IsAttack(indexes,3,board4)
    no_attack=6-(a+b+c+d)
    if no_attack==6:
        break
    print("non_attack= ",no_attack)
    print("\n")
    no_attack=0
    crossover(list1, list2)
    crossover(list3, list4)
    mutate(list1)
    mutate(list2)
    mutate(list3)
    mutate(list4)
    