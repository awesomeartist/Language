'''
#2: Enhanced Multiplication Table Generator

Our multiplication table generator is cool, but it prints only the first 10 multiples.
Enhance the generator so that the user can specify both the number and up to which multiple.
For example, I should be able to input that I want to see a table listing 
the first 15 multiples of 9.
'''

def multi_table(fNumber, nTableSize):
    for i in range(1, nTableSize+1):
        print('{0} * {1} = {2}'.format(fNumber, i, fNumber*i))

if __name__ == '__main__':
    try:
        fNumber = float(input('Enter a number:'))
        nTableSize = int(input('Enter the table size:'))
    except:
        print('Invalid input!')
    multi_table(fNumber, nTableSize)