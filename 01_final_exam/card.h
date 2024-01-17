#include <iostream>

#define LEN_OF_MAX_NAME 21

int a[8] = {0,400,400,400,400,400,400,400};
int b[8] = {0,0,0,0,0,0,0,0};
char numOfPlayer;	                        //定义char型实现与numOfPlayer的转换
int numOfPlayer1=numOfPlayer-48;			//玩家人数
typedef enum
{
//扑克牌面值：ACE(A),TWO(2)~TEN(10),JACK(J),QUEEN(Q),KING(K)
ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
}RankType;

typedef enum
{
//扑克牌的花色：CAUBS(梅花),DIAMONDS(方块),HEARTS(红桃),SPADES(黑桃)
CLUBS, DIAMONDS, HEARTS, SPADES
}SuitType;

struct Card    //扑克牌结构体
{
RankType rank;
SuitType suit;
};
ostream &operator<<(ostream &o,const Card &c) //操作结果：重载<<运算符
{                                             //输出花色
if(c.suit==CLUBS)							  
cout<<" 梅花";								  //CLUBS表示梅花
else if(c.suit ==DIAMONDS)
cout<<" 方块";								  //DIAMONDS表示方块
else if(c.suit==HEARTS)
cout<<" 红桃";								  //HEARTS表示红桃
else if(c.suit==SPADES)
cout<<" 黑桃";								  //SPADES表示黑桃

if(c.rank==ACE)
cout<<"A";									  //ACE表示A
else if(c.rank==JACK)
cout<<"J";									  //JACK表示J
else if(c.rank==QUEEN)
cout<<"Q";									  //QUEEN表示Q
else if(c.rank==KING)
cout<<"K";									  //KING表示K
else cout<<(int)c.rank;						  //(int)c.rank为分值

return o;
}
