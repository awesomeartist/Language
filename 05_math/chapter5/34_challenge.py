
import random


class Card:
    def __init__(self, suit, rank):
        self.suit = suit
        self.rank = rank

def new_cards():

    suits = ['spades', 'hearts', 'clubs', 'diamond']
    ranks = ['Ace', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'Jack', 'Queen', 'King']
    Cards = []

    for suit in suits:
        for rank in ranks:
            Cards.append(Card(suit, rank))
    Cards.append(Card('black', 'Joker'))
    Cards.append(Card('color', 'Joker'))

    return Cards


if __name__ == '__main__':

    Cards = new_cards()

    print('\nBefore Shuffle:')
    for idx, card in enumerate(Cards):
        print('Order:{0:^2}, {1:^5} of {2:^5}'.format(idx, card.rank, card.suit))

    random.shuffle(Cards)

    print('\nAfter Shuffle:')
    for idx, card in enumerate(Cards):
        print('Order:{0:^2}, {1:^5} of {2:^5}'.format(idx, card.rank, card.suit))
