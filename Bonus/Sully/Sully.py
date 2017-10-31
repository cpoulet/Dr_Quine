import os
INT = 5
NAME = 'Sully_'
FILE = lambda N: NAME + str(N)
FNAME = lambda N: FILE(N) + '.py'
STRING = "import os\nINT = {}\nNAME = 'Sully_'\nFILE = lambda N: NAME + str(N)\nFNAME = lambda N: FILE(N) + '.py'\nSTRING = {}\nCREATE = lambda X,N: print(X.format(N,repr(X)),file=open(FNAME(N), 'w'))\n\nif INT >= 0:\n    INT -= 1\n    CREATE(STRING,INT)\n    os.system('python3 ' + FNAME(INT))"
CREATE = lambda X,N: print(X.format(N,repr(X)),file=open(FNAME(N), 'w'))

if INT >= 0:
    INT -= 1
    CREATE(STRING,INT)
    os.system('python3 ' + FNAME(INT))
