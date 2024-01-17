#include <iostream>		
#include <time.h>
#include <stdlib.h>
#include <string.h>				//包含类库中头文件
#include "card.h"
#include "GameOf21Point.h"		//引用自编头文件

using namespace std;

int main()						//主函数main()
{
char ch;
ch='y';
int k=0;
cout<<"\n\t\t\t"<<"这里是 56&78 21点游戏 欢迎您的使用! "<<endl<<endl;
cout<<"  ====================================================================="<<endl<<endl;
cout<<"\t\t****************欢迎进入21点纸牌游戏*******************\n"<<endl;
cout<<"\t\t*  游戏规则：                                         *\n"<<endl;
cout<<"\t\t*  1.可选择1至7人同时进行游戏                         *\n"<<endl;
cout<<"\t\t*  2.每位玩家最多可选择要5张牌                        *\n"<<endl;
cout<<"\t\t*  3.扑克牌的分值取其面值，A充当1分或11分（由系统智能 *\n"<<endl;
cout<<"\t\t*    选择），J、Q和K人头牌都是10分                    *\n"<<endl;
cout<<"\t\t*  4.当玩家点数之和大于21点则引爆                     *\n"<<endl;
cout<<"\t\t*  5.当玩家点数之和大于庄家则本轮胜利                 *\n"<<endl;
cout<<"\t\t*  6.游戏可下注（1~100），本轮胜利即可得到双倍赌注    *\n"<<endl;
cout<<"\t\t*  7.玩家团队总资产较初始多于团队一半则胜利，反之失败 *\n"<<endl;
cout<<"\t\t**************  Exting Time，Here we go! **************\n"<<endl<<endl;
cout<<endl<<"  =========================================================================="<<endl;
cout<<"\t\t\t\t温馨提示\n "<<endl;
cout<<"  获得最终胜利可得最后赌资及特殊荣耀，但你仍可在中途某轮结束后携带赌资离开游戏\n"<<endl;
cout<<"\t\t\t赌博有风险，下注需谨慎\n "<<endl;
cout<<"    为确保您的赌资安全，请配合确认您的用户名以保证您的财产安全，谢谢合作"<<endl;      
cout<<"  =========================================================================="<<endl<<endl;
cout<<"\t\t请输入加入游戏的人数<1~7>:";
cin>>numOfPlayer;
numOfPlayer1=numOfPlayer-48; 						//通过int与char的转换知道玩家人数
while(numOfPlayer1=numOfPlayer-48,numOfPlayer1<1||numOfPlayer1>7)   //有numOfPlayer1在while的循环避免出现逻辑错误
{
cout<<"\t\t玩家人数限定在1~7人之间，请重新输入人数<1~7>:";
cin>>numOfPlayer;
}
while(ch=='y')                           //通过选择语句实现部分功能
{
GameOf21Point game;						//21点游戏对象
game.Game();							//运行游戏
for(int i=0;i<=numOfPlayer1;i++)k+=a[i];
cout<<"\n\t\t玩家总资产为"<<k<<endl;
if(k<numOfPlayer1*400/2){cout<<"\t\t"<<"\n   庄家胜利，对不起，玩家团队失败...\n\n     胜败乃兵家常事，如破产请付清欠款，未破产请取出余额，如需继续请重新来过～"<<endl;
goto cc;}  //返回到"goto cc;"
else if(k>numOfPlayer1*400+numOfPlayer1*400/2){cout<<"\n\t\t"<<"   玩家团队胜利，恭喜击败庄家！\n\n\t\t你可以带走你的赌资，并获得赌王团队称号\n\t\t如想继续挑战请重新来过～"<<endl;
goto cc;}  //返回到"goto cc;"
else {cout<<"\t\t"<<"未达到胜负标准，不如再来一局～"<<endl;
k=0;
cout<<endl<<endl<<"\t\t"<<"您想再玩一次吗<y, n>?";
cin>>ch;
while(ch!='y'&&ch!='n')
{
cout<<"\t\t，你输入错误，请重新输入<y, n>?";
cin>>ch;
}
cout<<endl<<"  =========================================================================="<<endl;
if(ch=='y')cout<<"  感谢您再次回到56&78 21点，请再次输入您的姓名以便确定您的赌资归属，谢谢合作"<<endl;
if(ch=='n')cout<<"      即使未能与庄家分出最后胜负，你依旧可以带走你的现有赌资，无论增减"<<endl;
cout<<"  =========================================================================="<<endl<<endl;
}
}

cc:cout<<endl<<"     ====================================================================="<<endl<<endl;
cout<<"\t\t\t你已成功退出游戏，感谢你的使用!"<<endl<<endl;
cout<<"\t\t\t    这里是 56&78 21点游戏"<<endl<<endl;
cout<<"\t\t\t      期待你的下次使用~"<<endl<<endl;
cout<<"\t\t\t                  made by NEUQ 21251 7号团队——56&78"<<endl<<endl;
cout<<"     ====================================================================="<<endl<<endl;

return 0;					//返回值0，返回操作系统
}
