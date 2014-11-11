#include<stdio.h>
#include<termio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int getch(void)//getch 함수 구현
{
		int ch;

		struct termios buf;
		struct termios save;

		tcgetattr(0, &save);
		buf=save;

		buf.c_lflag&=~(ICANON|ECHO);
		buf.c_cc[VMIN]=1;
		buf.c_cc[VTIME]=0;

		tcsetattr(0, TCSAFLUSH, &buf);

		ch=getchar();
		tcsetattr(0,TCSAFLUSH, &save);

		return ch;
}



int shortsen(void)//짧은 글 연습 함수
{
		int n=0,cnt=0,ic=0;
		clock_t start_clock,end_clock,diff_clock,ex_time;
		char arr[30][200]={{Only I can change my life. No one can do it for me.},{Life's a voyage that's homeward bound.},{Life is a long lesson in humility.},{The journey is the reward.},{Only in the agony of parting do we look into the depths of love.},{Love is merely madness.},{{hate the sin, love the sinner.},{We can only learn to love by loving.},{If you would be loved, love and be lovable.},{To love is to receive a glimpse of heaven.},{Love is or it ain't. Thin love ain't love at all.},{Love is, above all else, the gift of oneself.},{The first duty of love is to listen.},{Learning to love yourself is the greatest love of all.},{Great loves too must be endured.},{Love is an exploding cigar we willingly smoke.},{There is no remedy for love but to love more.},{Love is the triumph of imagination over intelligence.},{Intense love does not measure, it just gives.},{Intense love does not measure, it just gives.},{The important thing was to love rather than to be loved.},{To love and be loved is to feel the sun from both sides.},{There's always one who loves and one who lets himself be loved.},{Real love is a permanently self-enlarging experience.},{To love someone is to identify with them.},{Love looks not with the eyes, but with the mind.},{Only I can change my life. No one can do it for me.},{Life is a zoo in a jungle.},{Life's a voyage that's homeward bound.},{Be gentle with the young.},{Life is a long lesson in humility.}}

		srand(time(NULL));//time의 seed 초기화

		n=rand()%30;//1부터 30까지의 수 랜덤화

		start_clock=clock();
		for(cnt=0; cnt<5; cnt++)
		{
				printf("%s", arr[n]);
				ic=getch();
				end_clock=clock();
				strcmp(arr[n],
		}
		diff_clock=end_clock-start_clock;
		ex_time=diff_clock/CLOCKS_PER_MIN;
}


int End();
{

int main(void)
{
		int ic=0, case=1;
		while(case)
		{
			printf(">>영문 타자 연습 프로그램<<
							1. 자리 연습 		 2. 낱말 연습
							3. 짧은 글 연습  4. 긴 글 연습
							5.프로그램 종료");
			printf("번호를 선택하세요 :");
			ic=getch();
			switch(ic)  
				{
					case'1':
						prop();
						break;
					case'2':
						words();
						break;
					case'3':
						shortsen();
						break;
					case'4':
						longsen();
						break;
					case'5':
						End();
						case=0;
						break;
				}
			system("clear");
		}
		return 0;
}

i
