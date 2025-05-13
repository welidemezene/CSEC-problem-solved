s = input()
s = s.lower()
seen = set("aoyeui")
substr = ""
for ch in s:
    if ch not in seen:
        substr += ch
for ch in substr:
    print("."+ch, end="")        