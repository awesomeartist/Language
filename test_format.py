str1 = "{a} love {b}.{c}".format(a = 'I',b = 'bilibli',c='com')
print(str1)
str1 = "{0} love {b}.{c}".format('I',b = 'bilibli',c = 'com')
print(str1)

str2 = '{0:.1f}{1}'.format(33.567,'GB')
print(str2)

print('%c' % 97)
print('%d + %d = %d' %(4 ,5 ,4 + 5))
print('%#x' % 10)
print('%+.3e' %23.563)
