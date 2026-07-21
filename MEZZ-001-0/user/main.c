/******************************************************************/
/* 名称：LCD刷屏测试                                              */
/* 效果： 测试后刷出8种颜色                                     */
/*                                                                */
/* 作者：青风                                                     */
/*  （店址：	qfv5.taobao.com）                   */
/* 联系方式：QQ:157736309                                         */
/******************************************************************/
#include "stm32f0xx.h"
#include "ili9328.h"

void Delay()   //延迟函数
{
	int i,j;
  for(i=0;i<5000;i++)
	  {
			for(j=0;j<5000;j++);
		}
}

int main()
{
	
	SystemInit();	  // 时钟配置	
	LCD_init();		 // 液晶显示器初始化
  GLCD_Test();
	Delay(); 
	
	LCD_Clear(WHITE);	 // 全屏显示白色
	POINT_COLOR = BLACK; // 定义笔的颜色为黑色
	BACK_COLOR = WHITE;	 // 定义笔的背景色为白色
 
	
  LCD_DrawRectage(20, 20, 180, 210, DARKBLUE);  // 画一个深蓝色边框的矩形
	LCD_Fill(60, 20, 179, 209, PINK);	// 画填充矩形
	POINT_COLOR = LIGHTBLUE; // 定义笔的颜色为浅蓝色
	LCD_DrawCircle(100, 100, 25); // 画一个圆 
	LCD_ShowChar(120,20,'A');
	LCD_ShowString(140,20,"hello");
	while(1)
	{
		;
	}
}

