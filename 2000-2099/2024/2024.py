import re
pattern=re.compile(r'AB.*BA|BA.*AB')
while 1:
    try:
        print("yu ye sa wang dai xing" if pattern.search(input()) else "zhen shi ou ba")
    except:
        break