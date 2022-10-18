import copy

# Required Goal
Goal = [[1, 2, 3], [4, 5, 6], [7, 8, 0]]
Row, Col = (3, 3)
# Initialize Empty Board
Box = [[0]*Col]*Row

# Enter Your Board Shape
Board = [[1, 2, 3], [0, 5, 6], [4,7,8]] 
Sign = []

# ====================================


def FreeSlot(TempBoard):
    for i in range(Row):
        for j in range(Col):
            if (TempBoard[i][j] == 0):
                return i, j


def MoveUp(TempBoard):
    I1, I2 = FreeSlot(TempBoard)

    I3 = I1-1
    I4 = I2-0

    if I3 >= 0 and I4 >= 0:
        NewBoard = copy.deepcopy(TempBoard)
        NewBoard[I1][I2] = TempBoard[I3][I4]
        NewBoard[I3][I4] = 0

        return NewBoard
    else:
        return False


def MoveDown(TempBoard):
    I1, I2 = FreeSlot(TempBoard)

    I3 = I1+1
    I4 = I2+0

    if I3 < 3 and I4 < 3:
        NewBoard = copy.deepcopy(TempBoard)
        NewBoard[I1][I2] = TempBoard[I3][I4]
        NewBoard[I3][I4] = 0

        return NewBoard
    else:
        return False


def MoveLeft(TempBoard):
    I1, I2 = FreeSlot(TempBoard)

    I3 = I1-0
    I4 = I2-1

    if I3 >= 0 and I4 >= 0:
        NewBoard = copy.deepcopy(TempBoard)
        NewBoard[I1][I2] = TempBoard[I3][I4]
        NewBoard[I3][I4] = 0

        return NewBoard
    else:
        return False


def MoveRight(TempBoard):
    I1, I2 = FreeSlot(TempBoard)

    I3 = I1+0
    I4 = I2+1

    if I3 < 3 and I4 < 3:
        NewBoard = copy.deepcopy(TempBoard)
        NewBoard[I1][I2] = TempBoard[I3][I4]
        NewBoard[I3][I4] = 0

        return NewBoard
    else:
        return False


# Game Start Here

def StartGame(Board):

    Sign.append(Board)

    while Goal not in Sign:
        for I in range(len(Sign)):
            Beetle = MoveUp(Sign[I])
            if (Beetle):
                if Beetle not in Sign:
                    Sign.append(Beetle)
                    if Goal in Sign:
                        break

            Beetle2 = MoveDown(Sign[I])
            if (Beetle2):
                if Beetle2 not in Sign:
                    Sign.append(Beetle2)
                    if Goal in Sign:
                        break

            Beetle3 = MoveLeft(Sign[I])
            if (Beetle3):
                if Beetle3 not in Sign:
                    Sign.append(Beetle3)
                    if Goal in Sign:
                        break
            Beetle4 = MoveRight(Sign[I])
            if (Beetle4):
                if Beetle4 not in Sign:
                    Sign.append(Beetle4)
                    if Goal in Sign:
                        break
    # Sign.append(Goal)


StartGame(Board)

for I in Sign:
    print(I)
    print("=========")
