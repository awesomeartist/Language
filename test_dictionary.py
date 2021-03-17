
brand = ['lining','nike','adidas','liang']
slogan = ['Every is possible!','Just do it!','Impossible is nothing!','Make the world better!']

print('The slogan of liang is:',slogan[brand.index('liang')])

dict1 = {'lining':'Everything is passible!','nike':'Just do it!','adidas':'Impossible is nothing!','liang':'Make the world better!'}
dict2 = {1:'one',2:'two',3:'three',4:'four'}
dict3 = dict((('F',70),('i',105),('s',115),('h',104),('C',67)))
dict4 = dict(nike = 'Just do it!',liang = 'Make the world better!')
print('The slogan of nike is:',dict1['nike'])
print(dict2[1])
print(dict3['s'])
print(dict4['liang'])

dict4['lining'] = 'Everything is possible!'
print(dict4)
dict4['liang'] = 'To be or not to be!'
print('The slogan of liang is:',dict4['liang'])

