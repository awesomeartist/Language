#include <iostream>	

using namespace std;

class GameOf21Point
{
private:
    Card d[52];								// 一副扑克牌
    int dealPos;							// 发牌位置
    Card hands[8][21];	
    // hands[0]存储庄家手中的扑克牌，hands[1~7]存储各玩家手中的扑克牌			

    int numOfCard[8];		

    // 庄家(numOfCard[0])及玩家(numOfCard[1~7])手中的扑克牌数							
    char name[8][LEN_OF_MAX_NAME];			// 庄家及玩家姓名

    void Shuffle();	  // 洗牌，将扑克牌混在一起以便产生一种随机的排列

    int GetTotalScore(Card hand[21], int n);  // 返回一首扑克牌的总分值

    void ShowStatus(int num,bool hideFirstCardAndTotalScore=false);

    // 显示玩家(对应num=0)或玩家(对应num>0)的当前状态
    Card DealOneCard()
    {
        return d[dealPos++];				// 发一张扑克牌
    }

public:

    GameOf21Point();					// 无参数的构造函数
    virtual~GameOf21Point()	{};			// 析构函数
    void Game();						// 运行游戏

};


// 洗牌，将扑克牌混在一起以便产生一种随机的排列组合
void GameOf21Point::Shuffle()		
{
    srand(time(NULL));	//  设置当前时间为随机数种子

    for (int i = 51; i > 0; i--)
    {
        int pos = rand()%13+1;
        Card t;
        t = d[pos];
        d[pos] = d[i];
        d[i] = t;							//  交换d[pos]与d[i]
    }
}

//  返回一手扑克牌的总分值
int GameOf21Point::GetTotalScore(Card hand[21], int n)

{
    int p;							// 临时变量
    int totalScore = 0;				// 总分值
    for (p = 0; p < n; p++)				
    {
        if (hand[p].rank == ACE)
        {
            totalScore += 11;					// A的分值为11
        }        
        else if ((hand[p].rank == TEN) || (hand[p].rank == JACK) || 
                 (hand[p].rank==QUEEN) || (hand[p].rank == KING)
                )
        {
            totalScore += 10;					// J,Q,K的分值为10
        }  
        else
        {
            totalScore += (int)hand[p].rank;  // TWO~TEN的分值为2~10
        }
            
    }

    for (p = 0; (p < n) && (totalScore > 21); p++)	
    {
        if (hand[p].rank == ACE)
            totalScore-=10;					// A的值由11改为1
    }


    return totalScore;				// 返回总分值
}


/*   
    当num=0时，显示庄家当前状态，当num>0时，显示第num个玩家的当前状态，
    当hideFirstCardAndTotalScore为真时，将隐藏首张扑克牌与总分，分则
    将显示扑克牌与总分   
*/
void GameOf21Point::ShowStatus(int n, bool hideFirstCardAndTotalScore)
{
    cout << "\t\t" << name[n] << ":";				// 显示庄家与玩家姓名
    if (hideFirstCardAndTotalScore)			
        cout<<" <隐藏>";						// 隐藏首张扑克牌
    else
    {
        if (hands[n][0].suit == CLUBS)
            cout << " 梅花";
        else if (hands[n][0].suit == DIAMONDS)
            cout << " 方块";
        else if (hands[n][0].suit == HEARTS)
            cout << " 红桃";
        else if (hands[n][0].suit == SPADES)
            cout << " 黑桃";

        if (hands[n][0].rank == ACE)
            cout << "A";
        else if (hands[n][0].rank == JACK)
            cout << "J";
        else if (hands[n][0].rank == QUEEN)
            cout << "Q";
        else if (hands[n][0].rank == KING)
            cout << "K";
        else 
            cout << (int)hands[n][0].rank;
    }


    for(int i = 1; i < numOfCard[n]; i++)
    {
        if (hands[n][i].suit == CLUBS)
        cout << " 梅花";
        else if (hands[n][i].suit == DIAMONDS)
            cout << " 方块";
        else if (hands[n][i].suit == HEARTS)
            cout << " 红桃";
        else if (hands[n][i].suit == SPADES)
            cout << " 黑桃";

        if (hands[n][i].rank == ACE)
            cout << "A";
        else if (hands[n][i].rank == JACK)
            cout << "J";
        else if (hands[n][i].rank == QUEEN)
            cout << "Q";
        else if(hands[n][i].rank == KING)
            cout << "K";
        else 
            cout << (int)hands[n][i].rank;
    }

    if (!hideFirstCardAndTotalScore)
    {
        cout << " 总分数" << GetTotalScore(hands[n], numOfCard[n]);
        cout << endl;
    }    


    if (GetTotalScore(hands[n], numOfCard[n]) > 21)
        cout << "\t\t" << name[n]<<"引爆!" << endl << endl;
}

GameOf21Point::GameOf21Point()
{
    int curPos = 0;
    dealPos = 0;
    int i = 0;

    for(int suitpos = 0; suitpos < 4; suitpos++)    
    {
        for(int rankPos = 1; rankPos <= 13; rankPos++)
        {
            d[curPos].suit = (SuitType)suitpos;
            d[curPos].rank = (RankType)rankPos;
            curPos++;
        }
    }

    cout << endl;

    for (i = 0; i <= numOfPlayer1; i++)
        numOfCard[i] = 0;

    strcpy(name[0],"庄家");
    cout << endl;
    for (i = 1; i <= numOfPlayer1; i++)
    {
        cout << "\t\t输入第"<<i<<"位玩家的姓名:";
        cin >> name[i];
    }
    cout << endl;
    cout << "\t\t\t\tGame Start!" << endl << endl;
}


void GameOf21Point::Game()   // 游戏的进行
{
    int i, j;
    Shuffle();

    for(i = 1; i <= 2; i++)   // 使首次发俩张纸牌
    {
        hands[0][numOfCard[0]]=DealOneCard();
        numOfCard[0]++;
    }

    ShowStatus(0,true);

    for(i = 1; i <= numOfPlayer1; i++)                   // 依次查看每位玩家
    {
        for(j = 0; j < 2; j++)
        {
            hands[i][numOfCard[i]] = DealOneCard();
            numOfCard[i]++;
        }
    }


    for (i=1;i<=numOfPlayer1;i++)					  // 依次查看每位玩家
        ShowStatus(i);

    cout << endl;
    for (i = 1; i <= numOfPlayer1; i++)
    {   
        cout << "\t\t" << name[i] 
        << "你现在的资产为" << a[i] 
        << ",请确定你的此轮的赌注为(1~100)";
        cin >> b[i];

        while ((b[i] < 0) || (b[i] > 100))
        {
            cout << "\t\t"<<"你的赌注不在范围内，请重新输入"<<endl;
            cout << "\t\t"<<"重新确认你的赌注为";
            cin >> b[i];
        }
        char ch;
        cout << "\t\t"<<name[i] << "，你想要一张牌吗<y, n>?";
        cin >> ch;
        if(ch == 'n')cout<<endl;

        while((ch != 'y') && (ch != 'n'))
        {
            cout << "\t\t"<<name[i] << "，你输入错误，请重新输入<y, n>?";
            cin >> ch;
            if (ch == 'n')
                cout << endl;
        }

        while ((GetTotalScore(hands[i], numOfCard[i]) <= 21) && (ch == 'y')) // 未引爆
        {
            hands[i][numOfCard[i]] = DealOneCard();
            numOfCard[i]++;
            ShowStatus(i);

            if (GetTotalScore(hands[i], numOfCard[i]) > 21)
                break;

            cout << "\t\t" << name[i] << "，你还想再要一张牌吗<y, n>?";
            cin >> ch;

            if(ch == 'n')
                cout << endl;
        }
    }

    ShowStatus(0);
    while (GetTotalScore(hands[0], numOfCard[0]) <= 16)
    {
        hands[0][numOfCard[0]] = DealOneCard();
        numOfCard[0]++;
        ShowStatus(0);
    }
    cout << endl;

    if (GetTotalScore(hands[0], numOfCard[0]) > 21)
    {
        for (i = 1; i <= numOfPlayer1; i++)
        {
            if (GetTotalScore(hands[i], numOfCard[i]) <= 21)
            {
                cout << "\t\t"<<name[i] << "，恭喜你，你赢了!你的资产增加" << b[i]<<endl;
                a[i] += b[i];
                cout << "\t\t您的本轮结束，现在您的资产为" << a[i] << endl << endl;
            }
            else 
                cout << "\t\t" << name[i] << "，你们打成了平局。你的资产不变" << endl;
                cout << "\t\t" << "您的本轮结束，现在您的资产为" << a[i] << endl << endl;
        }
    }
    else
    {
        for (i = 1;i <= numOfPlayer1; i++)
        {
            if (GetTotalScore(hands[i], numOfCard[i]) <= 21 && 
                GetTotalScore(hands[i], numOfCard[i]) > GetTotalScore(hands[0], numOfCard[0])
               )
            {
                cout << "\t\t"<<name[i] << "，恭喜你，你赢了!你的资产增加" << b[i] << endl;
                a[i] += b[i];
                cout << "\t\t您的本轮结束，现在您的资产为" << a[i] << endl << endl;
            }
            else if (GetTotalScore(hands[i], numOfCard[i]) == GetTotalScore(hands[0], numOfCard[0]))
            {
                cout << "\t\t"<<name[i] << "，你们打成了平局。您的资产不变" <<endl;
                cout << "\t\t您的本轮结束，现在您的资产为" << a[i] << endl << endl;
            }
            else
            {
                cout << "\t\t" << name[i] << "，对不起，你输了。你的资产减去" << b[i] << endl;
                a[i] -=b [i];
                cout << "\t\t"<<"您的本轮结束，现在您的资产为" << a[i] << endl << endl;
            }
        }
    }
}

