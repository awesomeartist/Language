
while 1:
    score=int(input('Please input your score:'))
    if 100>=score>=90:
        print ("A")
    elif 90>score>=80:
        print('B')
    elif 80>score>=70:
        print('C')
    elif 70>score>=60:
        print('D')
    elif 60>score>=0:
        print('E')
    else:
        print('input false!')
