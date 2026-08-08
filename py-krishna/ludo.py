import random
import time
board = [[] for _ in range(92)]
board[72].append("B1")
board[73].append("B2")
board[74].append("B3")
board[75].append("B4")
board[76].append("Y1")
board[77].append("Y2")
board[78].append("Y3")
board[79].append("Y4")
board[80].append("R1")
board[81].append("R2")
board[82].append("R3")
board[83].append("R4")
board[84].append("G1")
board[85].append("G2")
board[86].append("G3")
board[87].append("G4")

def colored_token(token):
    if token[0] == "B":
        return "\033[34m" + token + "\033[0m"
    elif token[0] == "Y":
        return "\033[33m" + token + "\033[0m"
    elif token[0] == "R":
        return "\033[31m" + token + "\033[0m"
    elif token[0] == "G":
        return "\033[32m" + token + "\033[0m"

def color(token= str):
    if token[0] == "B":
        return "Blue"
    elif token[0] == "Y":
        return "Yellow"
    elif token[0] == "R":
        return "Red"
    elif token[0] == "G":
        return "Green"

def actualposition(token, trackposition):
    if color(token) == "Blue":
        startingposition = 39
    elif color(token) == "Yellow":
        startingposition = 0
    elif color(token) == "Red":
        startingposition = 26
    elif color(token) == "Green":
        startingposition = 13

    if trackposition == -1:
        if token == "B1":
            return 72
        elif token == "B2":
            return 73
        elif token == "B3":
            return 74
        elif token == "B4":
            return 75
        elif token == "Y1":
            return 76
        elif token == "Y2":
            return 77
        elif token == "Y3":
            return 78
        elif token == "Y4":
            return 79
        elif token == "R1":
            return 80
        elif token == "R2":
            return 81
        elif token == "R3":
            return 82
        elif token == "R4":
            return 83
        elif token == "G1":
            return 84
        elif token == "G2":
            return 85
        elif token == "G3":
            return 86
        elif token == "G4":
            return 87
    elif trackposition == 56:
        if color(token) == "Yellow":
            return 88
        elif color(token) == "Green":
            return 89
        elif color(token) == "Red":
            return 90
        elif color(token) == "Blue":
            return 91
    elif trackposition in range(51, 56):
        if color(token) == "Yellow":
            return 52 + (trackposition - 51)
        elif color(token) == "Green":
            return 57 + (trackposition - 51)
        elif color(token) == "Blue":
            return 62 + (trackposition - 51)
        elif color(token) == "Red":
            return 67 + (trackposition - 51)
    else:
        return (startingposition + trackposition) % 52

class ludo:
    def __init__(self):
        self.Blue= {
            "B1": -1,
            "B2": -1,
            "B3": -1,
            "B4": -1,
        }
        self.Yellow= {
            "Y1": -1,
            "Y2": -1,
            "Y3": -1,
            "Y4": -1,
        }
        self.Red= {
            "R1": -1,
            "R2": -1,
            "R3": -1,
            "R4": -1,
        }
        self.Green= {
            "G1": -1,
            "G2": -1,
            "G3": -1,
            "G4": -1,
        }
        self.Greenwin= {
            "G1": False,
            "G2": False,
            "G3": False,
            "G4": False
        }
        self.Redwin= {
            "R1": False,
            "R2": False,
            "R3": False,
            "R4": False
        }
        self.Yellowwin= {
            "Y1": False,
            "Y2": False,
            "Y3": False,
            "Y4": False
        }
        self.Bluewin= {
            "B1": False,
            "B2": False,
            "B3": False,
            "B4": False
        }
        self.positions = []
        self.kills = {
            "Blue": 0,
            "Yellow": 0,
            "Red": 0,
            "Green": 0
        }
        self.deaths = {
            "Blue": 0,
            "Yellow": 0,
            "Red": 0,
            "Green": 0
        }
        self.sixrolls = {
            "Blue": 0,
            "Yellow": 0,
            "Red": 0,
            "Green": 0
        }
        self.turns = {
            "Blue": 0,
            "Yellow": 0,
            "Red": 0,
            "Green": 0
        }
        self.distance_travelled = {
            "Blue": 0,
            "Yellow": 0,
            "Red": 0,
            "Green": 0    
        }
        self.achivements = {
            "Blue": [],
            "Yellow": [],
            "Red":[],
            "Green": []
        }


    def movable_tokens(self, color_dict, dice):
        movable = []

        for token, pos in color_dict.items():

            if pos == -1 and dice == 6:
                movable.append(token)

            elif 0 <= pos < 56 and pos + dice <= 56:
                movable.append(token)

        return movable

    def sendhome(self, token):
        if color(token) == "Blue":
            position = actualposition(token, self.Blue[token])
        elif color(token) == "Yellow":
            position = actualposition(token, self.Yellow[token])
        elif color(token) == "Red":
            position = actualposition(token, self.Red[token])
        elif color(token) == "Green":
            position = actualposition(token, self.Green[token])
        board[position].remove(token)
        board[actualposition(token, -1)].append(token)
        if color(token) == "Blue":
            self.Blue[token] = -1
            self.deaths["Blue"] += 1
        elif color(token) == "Yellow":
            self.Yellow[token] = -1
            self.deaths["Yellow"] += 1
        elif color(token) == "Red":
            self.Red[token] = -1
            self.deaths["Red"] += 1
        elif color(token) == "Green":
            self.Green[token] = -1
            self.deaths["Green"] += 1
        
            
    def move_token(self, token, dice, trackposition):
        tokencolor= color(token)
        target = trackposition + dice
        occupants = len(board[actualposition(token, target)])
        safezones = [0,8,13,21,26,34,39,47]
        old_pos = actualposition(token, trackposition)
        if trackposition == -1:
            if dice == 6:
                target = 0
                board[actualposition(token, target)].append(token)
                if tokencolor == "Blue":
                    self.Blue[token] = 0
                elif tokencolor == "Green":
                    self.Green[token] = 0
                elif tokencolor == "Red":
                    self.Red[token] = 0
                else:
                    self.Yellow[token] = 0
                board[old_pos].remove(token)
                return "", False, False
            else:
                return "Need 6 to escape home", False, False
        elif trackposition == 56:
            return "That token is already won", False, False
        elif trackposition + dice > 56:
            return "Need exact finish rolls", False, False
        elif trackposition + dice == 56:
            if color(token) == "Yellow":
                target = 88
                self.Yellow[token] = 56
                self.Yellowwin[token] = True
            elif color(token) == "Green":
                target = 89
                self.Green[token] = 56
                self.Greenwin[token] = True
            elif color(token) == "Red":
                target = 90
                self.Red[token] = 56
                self.Redwin[token] = True
            elif color(token) == "Blue":
                target = 91
                self.Blue[token] = 56
                self.Bluewin[token] = True
            board[target].append(token)
            board[old_pos].remove(token)
            return f"{token} has won", False, True
        elif occupants > 0:
            if actualposition(token, target) in safezones:
                board[actualposition(token, target)].append(token)
                if color(token) == "Blue":
                    self.Blue[token] = target
                elif color(token) == "Yellow":
                    self.Yellow[token] = target
                elif color(token) == "Red":
                    self.Red[token] = target
                elif color(token) == "Green":
                    self.Green[token] = target
                board[old_pos].remove(token)
                return "", False, False 
            elif actualposition(token, target) not in safezones:
                if occupants == 1:
                    if color(token) == color(board[actualposition(token, target)][0]):
                        board[actualposition(token, target)].append(token)
                        if color(token) == "Blue":
                            self.Blue[token] = target
                        elif color(token) == "Yellow":
                            self.Yellow[token] = target
                        elif color(token) == "Red":
                            self.Red[token] = target
                        elif color(token) == "Green":
                            self.Green[token] = target
                        board[old_pos].remove(token)
                        return "", False, False
                    else:
                        victim = board[actualposition(token, target)][0]
                        self.sendhome(board[actualposition(token, target)][0]) #1
                        board[actualposition(token, target)].append(token)
                        if color(token) == "Blue":
                            self.Blue[token] = target
                            self.kills["Blue"] += 1
                        elif color(token) == "Yellow":
                            self.Yellow[token] = target
                            self.kills["Yellow"] += 1
                        elif color(token) == "Red":
                            self.Red[token] = target
                            self.kills["Red"] += 1
                        elif color(token) == "Green":
                            self.Green[token] = target
                            self.kills["Green"] += 1
                        board[old_pos].remove(token)
                        return (token + " killed " + victim, True, False)
                elif occupants > 1:
                    all_same = True
                    for i in board[actualposition(token, target)]:
                        if color(i) != color(token):
                            all_same = False
                            break
                    if not(all_same):
                        victimlist = ""
                        for i in board[actualposition(token, target)][:]:
                            victimlist += (i + " ")
                        for i in board[actualposition(token, target)][:]:
                            self.sendhome(i) #2
                            if color(token) == "Blue":
                                self.Blue[token] = target
                                self.kills["Blue"] += 1
                            elif color(token) == "Yellow":
                                self.Yellow[token] = target
                                self.kills["Yellow"] += 1
                            elif color(token) == "Red":
                                self.Red[token] = target
                                self.kills["Red"] += 1
                            elif color(token) == "Green":
                                self.Green[token] = target
                                self.kills["Green"] += 1
                        board[actualposition(token, target)].append(token)
                        if color(token) == "Blue":
                            self.Blue[token] = target
                        elif color(token) == "Yellow":
                            self.Yellow[token] = target
                        elif color(token) == "Red":
                            self.Red[token] = target
                        elif color(token) == "Green":
                            self.Green[token] = target
                        board[old_pos].remove(token)
                        return (token + "killed " + victimlist, True, False)
                    elif all_same:
                        board[actualposition(token, target)].append(token)
                        if color(token) == "Blue":
                            self.Blue[token] = target
                        elif color(token) == "Yellow":
                            self.Yellow[token] = target
                        elif color(token) == "Red":
                            self.Red[token] = target
                        elif color(token) == "Green":
                            self.Green[token] = target
                        board[old_pos].remove(token)
                        return "", False, False
        else:
            board[actualposition(token, target)].append(token)
            if color(token) == "Blue":
                self.Blue[token] = target
            elif color(token) == "Yellow":
                self.Yellow[token] = target
            elif color(token) == "Red":
                self.Red[token] = target
            elif color(token) == "Green":
                self.Green[token] = target
            board[old_pos].remove(token)
            return "", False, False
    @staticmethod                   
    def tokensfinished(token1, token2, token3, token4):
        winnertokens = 0
        if token1:
            winnertokens += 1
        if token2:
            winnertokens += 1
        if token3:
            winnertokens += 1
        if token4:
            winnertokens += 1
        return winnertokens
    
    def player_finished(self, color_name):
        if color_name == "Blue":
            return self.tokensfinished(
                self.Bluewin["B1"],
                self.Bluewin["B2"],
                self.Bluewin["B3"],
                self.Bluewin["B4"]
            ) == 4

        elif color_name == "Yellow":
            return self.tokensfinished(
                self.Yellowwin["Y1"],
                self.Yellowwin["Y2"],
                self.Yellowwin["Y3"],
                self.Yellowwin["Y4"]
            ) == 4

        elif color_name == "Red":
            return self.tokensfinished(
                self.Redwin["R1"],
                self.Redwin["R2"],
                self.Redwin["R3"],
                self.Redwin["R4"]
            ) == 4

        elif color_name == "Green":
            return self.tokensfinished(
                self.Greenwin["G1"],
                self.Greenwin["G2"],
                self.Greenwin["G3"],
                self.Greenwin["G4"]
            ) == 4

    def text_checker(boardno):
        occupants= len(board[boardno])
        safe= [0,8,13,21,26,34,39,47]
        arrow= [11,24,37,50]
        home= [72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87]
        finish= [88,89,90,91]
        finishpath= [52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71]
        issafe= False
        isarrow= False
        ishome= False
        isfinish= False
        isfinishpath= False
        if boardno in safe:
            issafe = True
        elif boardno in arrow:
            isarrow = True
            if boardno == 11:
                arrowtype = "<"
            elif boardno == 24:
                arrowtype = "^"
            elif boardno == 37:
                arrowtype = ">"
            elif boardno == 50:
                arrowtype = "v"
        elif boardno in home:
            ishome = True
        elif boardno in finish:
            isfinish = True
        elif boardno in finishpath:
            isfinishpath = True
            if boardno == 56:
                arrowtype = "v"
            elif boardno == 71:
                arrowtype = "^"
        if issafe:
            if occupants > 1:
                return f"{occupants}T"
            elif occupants == 0:
                return "*_"
            else:
                return colored_token(board[boardno][0])
        elif isarrow:
            if occupants > 1:
                return f"{occupants}T"
            elif occupants == 0:
                return f"_{arrowtype}"
            else:
                return colored_token(board[boardno][0])
        elif ishome:
            if occupants > 1:
                return f"{occupants}T"
            elif occupants == 0:
                return "  "
            else:
                return colored_token(board[boardno][0])
        elif isfinish:
            if occupants == 0:
                return " "
            else:
                if boardno == 88:
                    return ludo.tokensfinished(game.Yellowwin["Y1"], game.Yellowwin["Y2"], game.Yellowwin["Y3"], game.Yellowwin["Y4"])
                elif boardno == 89:
                    return ludo.tokensfinished(game.Greenwin["G1"], game.Greenwin["G2"], game.Greenwin["G3"], game.Greenwin["G4"])
                elif boardno == 90:
                    return ludo.tokensfinished(game.Redwin["R1"], game.Redwin["R2"], game.Redwin["R3"], game.Redwin["R4"])
                elif boardno == 91:
                    return ludo.tokensfinished(game.Bluewin["B1"], game.Bluewin["B2"], game.Bluewin["B3"], game.Bluewin["B4"])
        elif isfinishpath:
                if occupants > 1:
                    return f"{occupants}T"
                elif occupants == 0:
                    if boardno == 56:
                        return f" {arrowtype}"
                    elif boardno == 71:
                        return f" {arrowtype}"
                    else:
                        return "  "
                else:
                    return colored_token(board[boardno][0])
        else:
            if occupants > 1:
                return f"{occupants}T"
            elif occupants == 0:
                return "__"
            else:
                    return colored_token(board[boardno][0])     

    def printboard(self, board):
        print("______________________________________________")
        print(f"|                 |{ludo.text_checker(49)}|{ludo.text_checker(50)}|{ludo.text_checker(51)}|                 |")
        print(f"|   {ludo.text_checker(72)}       {ludo.text_checker(73)}   |{ludo.text_checker(48)}|{ludo.text_checker(52)}|{ludo.text_checker(0)}    {ludo.text_checker(76)}       {ludo.text_checker(77)}   |")
        print(f"|                 |{ludo.text_checker(47)}|{ludo.text_checker(53)}|{ludo.text_checker(1)}|                 |")
        print(f"|   {ludo.text_checker(74)}       {ludo.text_checker(75)}   |{ludo.text_checker(46)}|{ludo.text_checker(54)}|{ludo.text_checker(2)}|   {ludo.text_checker(78)}       {ludo.text_checker(79)}   |")
        print(f"|                 |{ludo.text_checker(45)}|{ludo.text_checker(55)}|{ludo.text_checker(3)}|                 |")
        print(f"|---  ------------|{ludo.text_checker(44)}|{ludo.text_checker(56)}|{ludo.text_checker(4)}|-----------------|")
        print(f"|{ludo.text_checker(38)}|{ludo.text_checker(39)}|{ludo.text_checker(40)}|{ludo.text_checker(41)}|{ludo.text_checker(42)}|{ludo.text_checker(43)}| \\ {ludo.text_checker(88)}  / |{ludo.text_checker(5)}|{ludo.text_checker(6)}|{ludo.text_checker(7)}|{ludo.text_checker(8)}|{ludo.text_checker(9)}|{ludo.text_checker(10)}|")
        print(f"|{ludo.text_checker(37)}|{ludo.text_checker(62)}|{ludo.text_checker(63)}|{ludo.text_checker(64)}|{ludo.text_checker(65)}|{ludo.text_checker(66)}>{ludo.text_checker(91)} >--< {ludo.text_checker(89)}<{ludo.text_checker(61)}|{ludo.text_checker(60)}|{ludo.text_checker(59)}|{ludo.text_checker(58)}|{ludo.text_checker(57)}|{ludo.text_checker(11)}|")
        print(f"|{ludo.text_checker(36)}|{ludo.text_checker(35)}|{ludo.text_checker(34)}|{ludo.text_checker(33)}|{ludo.text_checker(32)}|{ludo.text_checker(31)}|_/_ {ludo.text_checker(90)}_\\_|{ludo.text_checker(17)}|{ludo.text_checker(16)}|{ludo.text_checker(15)}|{ludo.text_checker(14)}|{ludo.text_checker(13)}|{ludo.text_checker(12)}|")
        print(f"|-----------------|{ludo.text_checker(30)}|{ludo.text_checker(71)}|{ludo.text_checker(18)}|-------------  --|")
        print(f"|   {ludo.text_checker(80)}       {ludo.text_checker(81)}   |{ludo.text_checker(29)}|{ludo.text_checker(70)}|{ludo.text_checker(19)}|   {ludo.text_checker(84)}       {ludo.text_checker(85)}   |")
        print(f"|                 |{ludo.text_checker(28)}|{ludo.text_checker(69)}|{ludo.text_checker(20)}|                 |")
        print(f"|   {ludo.text_checker(82)}       {ludo.text_checker(83)}   |{ludo.text_checker(27)}|{ludo.text_checker(68)}|{ludo.text_checker(21)}|   {ludo.text_checker(86)}       {ludo.text_checker(87)}   |")
        print(f"|                  {ludo.text_checker(26)}|{ludo.text_checker(67)}|{ludo.text_checker(22)}|                 |")
        print(f"|-----------------|{ludo.text_checker(25)}|{ludo.text_checker(24)}|{ludo.text_checker(23)}|-----------------|")

def color_text(colors):
    if colors == "Blue":
        return "\033[34m" + "It's " + colors+ " turn" + "\033[0m"
    elif colors == "Yellow":
        return "\033[33m" + "It's " + colors+ " turn" + "\033[0m"
    elif colors == "Red":
        return "\033[31m" + "It's " + colors+ " turn" + "\033[0m"
    elif colors == "Green":
        return "\033[32m" + "It's " + colors+ " turn" + "\033[0m"

def tokenname(colorno, tokenno):
    if colorno == 1:
        colors = "B"
    elif colorno == 2:
        colors = "Y"
    elif colorno == 3:
        colors = "R"
    elif colorno == 4:
        colors = "G"
    return f"{colors}{tokenno}"

def robot_move(game, movables, dice, colors):
    safezones = [0, 8, 13, 21, 26, 34, 39, 47]
    if colors == "Green":
        for token in movables:
            if game.Green[token] + dice == 56:
                return token

        for token in movables:
            pos = game.Green[token]

            if pos != -1:
                target = actualposition(token, pos + dice)

                if len(board[target]) == 1:
                    victim = board[target][0]

                    if color(victim) != color(token):
                        return token

        for token in movables:
            if game.Green[token] == -1:
                return token

        best = movables[0]

        for token in movables:
            if game.Green[token] > game.Green[best]:
                if game.Green[token] in safezones and (dice == 5 or dice == 6):
                    best = token
                elif (game.Green[token] + dice) in safezones:
                    best = token
                elif (game.Green[token] + dice) >= 51:
                    best = token
                elif game.Green[token] >= 23 and (dice == 5 or dice == 6):
                    best = token
    
        return best
    elif colors == "Blue":
        for token in movables:
            if game.Blue[token] + dice == 56:
                return token

        for token in movables:
            pos = game.Blue[token]

            if pos != -1:
                target = actualposition(token, pos + dice)

                if len(board[target]) == 1:
                    victim = board[target][0]

                    if color(victim) != color(token):
                        return token

        for token in movables:
            if game.Blue[token] == -1:
                return token

        best = movables[0]

        for token in movables:
            if game.Blue[token] > game.Blue[best]:
                if game.Blue[token] in safezones and (dice == 5 or dice == 6):
                    best = token
                elif (game.Blue[token] + dice) in safezones:
                    best = token
                elif (game.Blue[token] + dice) >= 51:
                    best = token
                elif game.Blue[token] >= 23 and (dice == 5 or dice == 6):
                    best = token
    
        return best
    elif colors == "Red":
        for token in movables:
            if game.Red[token] + dice == 56:
                return token

        for token in movables:
            pos = game.Red[token]

            if pos != -1:
                target = actualposition(token, pos + dice)

                if len(board[target]) == 1:
                    victim = board[target][0]

                    if color(victim) != color(token):
                        return token

        for token in movables:
            if game.Red[token] == -1:
                return token

        best = movables[0]

        for token in movables:
            if game.Red[token] > game.Red[best]:
                if game.Red[token] in safezones and (dice == 5 or dice == 6):
                    best = token
                elif (game.Red[token] + dice) in safezones:
                    best = token
                elif (game.Red[token] + dice) >= 51:
                    best = token
                elif game.Red[token] >= 23 and (dice == 5 or dice == 6):
                    best = token
    
        return best
    elif colors == "Yellow":
        for token in movables:
            if game.Yellow[token] + dice == 56:
                return token

        for token in movables:
            pos = game.Yellow[token]

            if pos != -1:
                target = actualposition(token, pos + dice)

                if len(board[target]) == 1:
                    victim = board[target][0]

                    if color(victim) != color(token):
                        return token

        for token in movables:
            if game.Yellow[token] == -1:
                return token

        best = movables[0]

        for token in movables:
            if game.Yellow[token] > game.Yellow[best]:
                if game.Yellow[token] in safezones and (dice == 5 or dice == 6):
                    best = token
                elif (game.Yellow[token] + dice) in safezones:
                    best = token
                elif (game.Yellow[token] + dice) >= 51:
                    best = token
                elif game.Yellow[token] >= 23 and (dice == 5 or dice == 6):
                    best = token
    
        return best


game = ludo()
current = 1
robolegnth = int(input("enter how many robots you want:- "))
if robolegnth == 0:
    robots = []
elif robolegnth < 0 or robolegnth > 3:
    print("invalid number of robots")
    robots = []
else:
    robots = []
    colors = ["Red", "Green", "Yellow"]
    for i in range(robolegnth):
        robots.append(colors[i])
sixstreak = 0
game.printboard(board)
while len(game.positions) < 3:
    killed = False
    win = False
    if current == 1:
        currentc = "Blue"
    elif current == 2:
        currentc = "Yellow"
    elif current == 3:
        currentc = "Red"
    else:
        currentc = "Green"
    if currentc in game.positions:
        if current == 4:
            current = 1
        else:
            current += 1
        continue
    print(color_text(currentc))
    if currentc  not in robots:
        dicerolling = input("press enter to roll ")
    if currentc in robots:
        time.sleep(1.5)
    for _ in range(10):
        print(random.randint(1,6), end="\r")
        time.sleep(0.1)
    dice = random.randint(1, 6)
    print("Dice rolled:", dice)
    if dice == 6:
        sixstreak += 1
    elif dice != 6:
        sixstreak = 0
    if current == 1:
        movables = game.movable_tokens(game.Blue, dice)
    elif current == 2:
        movables = game.movable_tokens(game.Yellow, dice)
    elif current == 3:
        movables = game.movable_tokens(game.Red, dice)
    elif current == 4:
        movables = game.movable_tokens(game.Green, dice)
    if len(movables) == 0:
        print("No possible moves")
    elif len(movables) == 1:
        token = movables[0]
        print(f"Automatically moving {token}")
        if current == 1:
            message, killed, win = game.move_token(token, dice, game.Blue[token])
        elif current == 2:
            message, killed, win = game.move_token(token, dice, game.Yellow[token])
        elif current == 3:
            message, killed, win = game.move_token(token, dice, game.Red[token])
        elif current == 4:
            message, killed, win = game.move_token(token, dice, game.Green[token])
        if currentc == "Blue":
            game.distance_travelled["Blue"] += dice
        elif currentc == "Yellow":
            game.distance_travelled["Yellow"] += dice
        elif currentc == "Red":
            game.distance_travelled["Red"] += dice
        elif currentc == "Green":
            game.distance_travelled["Green"] += dice
        print(message)
    else:
        if currentc in robots:
            time.sleep(2)
            token = robot_move(game, movables, dice, currentc)
            print("Robot chooses:", token)
        else:
            token_choise = input("enter which token to move:-")
            if token_choise == str:
                if current == 4:
                    current = 1
                else: 
                    current += 1
                continue
            if token_choise > "4" or token_choise <= "0":
                print("invalid token choise")
                if current == 4:
                    current = 1
                else: 
                    current += 1
                continue
            token = tokenname(current, token_choise)
            if token not in movables:
                print("That token cannot move")
                if current == 4:
                    current = 1
                else:
                    current += 1
                continue

        if current == 1:
            message, killed, win = game.move_token(token, dice, game.Blue[token])
        elif current == 2:
            message, killed, win = game.move_token(token, dice, game.Yellow[token])
        elif current == 3:
            message, killed, win = game.move_token(token, dice, game.Red[token])
        elif current == 4:
            message, killed, win = game.move_token(token, dice, game.Green[token])
        if currentc == "Blue":
            game.distance_travelled["Blue"] += dice
        elif currentc == "Yellow":
            game.distance_travelled["Yellow"] += dice
        elif currentc == "Red":
            game.distance_travelled["Red"] += dice
        elif currentc == "Green":
            game.distance_travelled["Green"] += dice
        print(message)
    if game.player_finished(currentc) and currentc not in game.positions:
        game.positions.append(currentc)
    game.printboard(board)
    for i in board:
        if len(i) > 1:
            print(len(i), "T = ", i)
    if dice == 6:
        if currentc == "Blue":
            game.sixrolls["Blue"] += 1
        elif currentc == "Yellow":
            game.sixrolls["Yellow"] += 1
        elif currentc == "Red":
            game.sixrolls["Red"] += 1
        elif currentc == "Green":
            game.sixrolls["Green"] += 1
    if currentc == "Blue":
        game.turns["Blue"] += 1
    elif currentc == "Yellow":
        game.turns["Yellow"] += 1
    elif currentc == "Red":
        game.turns["Red"] += 1
    elif currentc == "Green":
        game.turns["Green"] += 1
    if sixstreak >= 3:
        if "Lucky Rollor(roll six 3 times in a row)" not in game.achivements[currentc]:
            game.achivements[currentc].append("Lucky Rollor(roll six 3 times in a row)")
            print("New Achivement unlocked: Lucky Rollor(roll six 3 times in a row)")
    if dice == 6 or killed or win:
        if killed:
            if "First Blood(kill a token)" not in game.achivements[currentc]:
                game.achivements[currentc].append("First Blood(kill a token)")
                print("New Achivement unlocked: First Blood(kill a token)")
            if game.kills[currentc] >= 10:
                if "Serial Killer(kill 10 tokens)" not in game.achivements[currentc]:
                    game.achivements[currentc].append("Serial Killer(kill 10 tokens)")
                    print("New Achivement unlocked: Serial Killer(kill 10 tokens)")
        if win:
            if "First Win(make a token win)" not in game.achivements[currentc]:
                game.achivements[currentc].append("First Win(make a token win)")
                print("New Achivement unlocked: First Win(make a token win)")
            if dice == 6:
                if "Sixer Finishing(win by a six roll)" not in game.achivements[currentc]:
                    game.achivements[currentc].append("Sixer Finishing(win by a six roll)")
                    print("New Achivement unlocked: Sixer Finishing(win by a six roll)")
        continue
    else:
        if current == 4:
            current = 1
        else:
            current += 1
#eeeeeeeennnnnnnnddddddddd
all_players = ["Blue", "Yellow", "Red", "Green"]

for player in all_players:
    if player not in game.positions:
        game.positions.append(player)
        break
for player in all_players:
    if game.deaths[player] == 0:
        if "Untouchable(win without dying)" not in game.achivements[player]:
            game.achivements[player].append("Untouchable(win without dying)")
    if game.positions[0] == player:
        for i in game.deaths:
            if game.deaths[player] >= game.deaths[i]:
                comebakking = True
            else:
                comebackking = False
        if comebackking:
            if "Comeback King(win after most deaths)" not in game.achivements[player]:
                game.achivements[player].append("Comeback King(win after most deaths)")
    if game.sixrolls[player] >= 30:
        if "Master of Sixes(roll sixes 30 times)" not in game.achivements[player]:
            game.achivements[player].append("Master of Sixes(roll sixes 30 times)")
    if game.distance_travelled[player] >= 350:
        if "The Explorer(travel 350 steps)" not in game.achivements[player]:
            game.achivements[player].append("The Explorer(travel 350 steps)")
    if game.turns[player] <= 100: 
        if "The Thunderbolt(complete game in less than 100 turns)" not in game.achivements[player]:
            game.achivements[player].append("The Thunderbolt(complete game in less than 100 turns)")
    if game.turns[player] >= 175: 
        if "The Patient(complete game more than 175 turns)" not in game.achivements[player]:
            game.achivements[player].append("The Patient(complete game more than 175 turns)")
    if game.kills[player] == 0:
        if "The Chill One(complete the game without killing any token)" not in game.achivements[player]:
            game.achivements[player].append("The Chill One(complete the game without killing any token)")


print("\nFINAL STANDINGS")

print("🥇 1st:", game.positions[0], ":")
print("     players killed: ", game.kills[game.positions[0]])
print("     6's rolled: ", game.sixrolls[game.positions[0]])
print("     turns taken: ", game.turns[game.positions[0]])
print("     deaths: ", game.deaths[game.positions[0]])
print("     distance travelled: ", game.distance_travelled[game.positions[0]])
print("     achivements: ")
for i in game.achivements[game.positions[0]]:
    print("         ", i, sep="")
print("🥈 2nd:", game.positions[1], ":")
print("     players killed: ", game.kills[game.positions[1]])
print("     6's rolled: ", game.sixrolls[game.positions[1]])
print("     turns taken: ", game.turns[game.positions[1]])
print("     deaths: ", game.deaths[game.positions[1]])
print("     distance travelled: ", game.distance_travelled[game.positions[1]])
print("     achivements: ")
for i in game.achivements[game.positions[1]]:
    print("         ", i, sep="")
print("🥉 3rd:", game.positions[2], ":")
print("     players killed: ", game.kills[game.positions[2]])
print("     6's rolled: ", game.sixrolls[game.positions[2]])
print("     turns taken: ", game.turns[game.positions[2]])
print("     deaths: ", game.deaths[game.positions[2]])
print("     distance travelled: ", game.distance_travelled[game.positions[2]])
print("     achivements: ")
for i in game.achivements[game.positions[2]]:
    print("         ", i, sep="")
print("4th:", game.positions[3], ":")
print("     players killed: ", game.kills[game.positions[3]])
print("     6's rolled: ", game.sixrolls[game.positions[3]])
print("     turns taken: ", game.turns[game.positions[3]])
print("     deaths: ", game.deaths[game.positions[3]])
print("     distance travelled: ", game.distance_travelled[game.positions[3]])
print("     achivements: ")
for i in game.achivements[game.positions[3]]:
    print("         ", i, sep="")