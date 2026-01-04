
import sys

n = int(sys.stdin.readline())
path = []

for _ in range(n):
    cmd = sys.stdin.readline().strip().split()
    
    if cmd[0] == "pwd" and not path:
        print("/" + "/".join(path))
    elif cmd[0] == "pwd":
        print("/" + "/".join(path) + "/")

    else:
       
        parts = cmd[1].split('/')
        
        
        if cmd[1].startswith('/'):
            path = []
            
        for p in parts:
            if p == "..":
                if path: path.pop()
            elif p != "" and p != ".":
                path.append(p)