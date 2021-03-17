str1 = 'I love bilibili.com'
print(str1[:7])

str1 = str1[:7] + 'insert char ' + str1[7:]
print(str1)


print('\nString Methods')
str2 = 'xiaoxie'
print(str2)
str2 = str2.capitalize() #return a new string
print(str2)

str3 = 'DAXIExiaoxie'
print(str3)
str3 = str3.casefold()
print(str3)

str3 = str3.center(40)
print(str3)

print(str2.count('a'))

print(str2.endswith('xie'))

str4 = 'I\tlove\tbilibili.com'
print(str4)
str4 = str4.expandtabs()
print(str4)

print(str4.find('bili'))
print(str4.isalpha())
print(str4.isalnum())
print(str4.isdigit())
print(str4.islower())
print(str4.istitle())
#...
