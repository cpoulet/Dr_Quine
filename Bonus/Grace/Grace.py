# Welcome your Grace !

FILE = 'Grace_kid.py'
STRING = "# Welcome your Grace !\n\nFILE = 'Grace_kid.py'\nSTRING = {}\nCREATE = lambda X: print(X.format(repr(X)),file=open(FILE, 'w'))\n\nCREATE(STRING)"
CREATE = lambda X: print(X.format(repr(X)),file=open(FILE, 'w'))

CREATE(STRING)
