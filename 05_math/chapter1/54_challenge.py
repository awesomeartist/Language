'''
#4: Fraction Calculator
'''

from fractions import Fraction

def frac_add(operand_1, operand_2):
    print('Result of Addition: {0}'.format(operand_1+operand_2))

def frac_sub(operand_1, operand_2):
    print('Result of Subtract: {0}'.format(operand_1-operand_2))

def frac_mul(operand_1, operand_2):
    print('Result of Multiple: {0}'.format(operand_1*operand_2))

def frac_div(operand_1, operand_2):
    print('Result of Subtract: {0}'.format(operand_1/operand_2))

def print_result(operand_1, operand_2, operator):
    if operator == 'add':
        frac_add(operand_1, operand_2)
    if operator == 'sub':
        frac_sub(operand_1, operand_2)
    if operator == 'mul':
        frac_mul(operand_1, operand_2)
    if operator == 'div':
        frac_div(operand_1, operand_2)

if __name__ == '__main__':
    operand_1 = Fraction(input('Enter first fraction:'))
    operand_2 = Fraction(input('Enter second fraction:'))
    operator = input('Operation to perform - add, sub, mul, div:')

    print_result(operand_1, operand_2, operator)

