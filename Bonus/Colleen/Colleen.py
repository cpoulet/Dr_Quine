# I am Dr Quine !

def main():
    # Main comment
    s = string()
    print(s.format(repr(s)))

def string():
    return '# I am Dr Quine !\n\ndef main():\n    # Main comment\n    s = string()\n    print(s.format(repr(s)))\n\ndef string():\n    return {}\n\nmain()'

main()
