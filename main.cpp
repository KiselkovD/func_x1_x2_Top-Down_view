#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

#include <sstream>  //include this to use string streams
#include <string>
unsigned char c[10]= {0};
int siz(int number)
{
    int i=0;
    while (number!=0)
    {
        number=number/10;
        i++;
    }
    return i;
}
unsigned char* num_to_str(int number)
{

    std::ostringstream ostr;
    ostr << number;
    std::string theNumberString = ostr.str();

    int i=0;
    if(number==0)
    {

        c[0]='0';
        c[1]='\0';
        return c;
    }
    while (number!=0)
    {
        number=number/10;
        c[i]=theNumberString[i];
        i++;
    }
    c[i]=theNumberString[i];

    /*while(theNumberString[i]!='\0')
    {
        c[i]=theNumberString[i];
        i++;
    }*/

    return c;
}

SDL_Window *win = NULL;
SDL_Renderer *ren = NULL;

SDL_Event event;

void arr_fuller(bool* arr,bool arr_0,bool arr_1,bool arr_2,bool arr_3,bool arr_4,bool arr_5,bool arr_6,bool arr_7,bool arr_8,bool arr_9,bool arr_10,bool arr_11,bool arr_12,bool arr_13,bool arr_14,bool arr_15,bool arr_16,bool arr_17,bool arr_18,bool arr_19,bool arr_20,bool arr_21,bool arr_22,bool arr_23,bool arr_24,bool arr_25,bool arr_26,bool arr_27,bool arr_28,bool arr_29,bool arr_30,bool arr_31,bool arr_32,bool arr_33,bool arr_34,bool arr_35,bool arr_36,bool arr_37,bool arr_38,bool arr_39,bool arr_40,bool arr_41)
{
    arr[0]=arr_0;arr[1]=arr_1;arr[2]=arr_2;arr[3]=arr_3;arr[4]=arr_4;arr[5]=arr_5;arr[6]=arr_6;arr[7]=arr_7;arr[8]=arr_8;arr[9]=arr_9;arr[10]=arr_10;arr[11]=arr_11;arr[12]=arr_12;arr[13]=arr_13;arr[14]=arr_14;arr[15]=arr_15;arr[16]=arr_16;arr[17]=arr_17;arr[18]=arr_18;arr[19]=arr_19;arr[20]=arr_20;arr[21]=arr_21;arr[22]=arr_22;arr[23]=arr_23;arr[24]=arr_24;arr[25]=arr_25;arr[26]=arr_26;arr[27]=arr_27;arr[28]=arr_28;arr[29]=arr_29;arr[30]=arr_30;arr[31]=arr_31;arr[32]=arr_32;arr[33]=arr_33;arr[34]=arr_34;arr[35]=arr_35;arr[36]=arr_36;arr[37]=arr_37;arr[38]=arr_38;arr[39]=arr_39;arr[40]=arr_40;arr[41]=arr_41;
}

int x_ptr_arr=42;
int y_ptr_arr=10;
bool **ptr_arr = new bool* [y_ptr_arr];

void finally_some_good_texter(unsigned char* text,int text_long,int x, int y,int text_siz,int color0,int color1,int color2)
{
    SDL_SetRenderDrawColor(ren, color0, color1, color2, 0x00);
    for(int i=0; i<text_long; i++) //длина текста
    {
        for(int iy=0; iy<7; iy++) //строки
        {
            for(int ix=0; ix<6; ix++) //столбцы
            {
                if (58 > (int)text[i]&&(int)text[i] > 47)//вин 1251
                {
                    if(ptr_arr[(int)text[i]-48/*+33*/][ix+iy*6])//проверка массива
                    {
                        SDL_Rect rect = {x+ix*text_siz+i*text_siz*7,(y+iy*text_siz),text_siz,text_siz};//рисование
                        SDL_RenderFillRect(ren, &rect);
                    }
                }

            }
        }

    }
}
double x_move=0,y_move=0;//перемещение по графику

double n=0; //параметр
double func(double x,double y)
{
    x+=x_move;
    y+=y_move;
    y=-y;
    return /*sqrt*/((double) //10-x*x
                             //2*x*x*x + x*y*y + 5*x*x + y*y
                             //sin(x/2)*y
                             x*x*x+x*y+y*y-x-2*y

                   );
}

int SCREEN_WIDTH = 600;
int SCREEN_HEIGHT = 600;

int PIC_WIDTH = 400;
int PIC_HEIGHT = 400;




bool init()
{
    bool ok = true;

    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        cout << "Can't init SDL: " << SDL_GetError() << endl;
    }

    win = SDL_CreateWindow("Примитивы", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (win == NULL)
    {
        cout << "Can't create window: " << SDL_GetError() << endl;
        ok = false;
    }

    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    if (ren == NULL)
    {
        cout << "Can't create renderer: " << SDL_GetError() << endl;
        ok = false;
    }

    return ok;
}

void quit()
{
    SDL_DestroyWindow(win);
    win = NULL;

    SDL_DestroyRenderer(ren);
    ren = NULL;

    SDL_Quit;
}

int main(int arhc, char ** argv)
{
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < y_ptr_arr; i++)
        ptr_arr[i] = new bool [x_ptr_arr];
    arr_fuller(ptr_arr[0],0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[1],0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[2],0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[3],0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[4],0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[5],0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[6],0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[7],0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[8],0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    arr_fuller(ptr_arr[9],0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);//9*/



    double x,y;
    double ma=PIC_WIDTH/2,mi=-PIC_WIDTH/2,i; //колво пикселей
    double z_max=0,z_min=99999;//максимальное и минимальное значение функции
    double x0= (-mi),y0= (-mi);//сдвиг на центр
    double sensitivity=1000;
    double z_scale=0.1;//сколько пикселей на 1 z
    bool fl_setca=0,dont_exit=1;

    if (!init())//окно
    {
        quit();
        system("pause");
        return 1;
    }
    bool exit;
    while (!exit)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
            {
                exit = true;
                break;
            }
            case SDL_KEYDOWN:
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                    {
                        exit = true;
                        break;
                    }
                    case SDLK_1:
                    {
                        fl_setca=!fl_setca;
                        break;
                    }
                    case SDLK_2:
                    {
                        z_scale=0.001;
                        break;
                    }
                    case SDLK_3:
                    {
                        z_scale=z_scale*10;
                        break;
                    }
                    case SDLK_4:
                    {
                        z_scale=z_scale*10;
                        break;
                    }
                    case SDLK_5:
                    {
                        n--;
                        break;
                    }
                    case SDLK_6:
                    {
                        n++;
                        break;
                    }

                }
                break;
            }
            case SDL_MOUSEBUTTONDOWN:
            {
                if (event.button.button = SDL_BUTTON_LEFT)
                {
                    int x_mcord = event.button.x, y_mcord = event.button.y;
                    if (x_mcord < PIC_WIDTH && y_mcord < PIC_HEIGHT)
                        x_move+=(x_mcord-PIC_WIDTH/2)*z_scale;
                        y_move+=(y_mcord-PIC_HEIGHT/2)*z_scale;

                }
                break;
            }
        }

        z_max=0;
        z_min=0;
        for (y=mi; y<ma; y++)// расчет максимальное и минимальное значение функции
            for (x=mi; x<ma; x++)
            {
                if (z_max<func(x*z_scale,y*z_scale))z_max=func(x*z_scale,y*z_scale);
                if (z_min>func(x*z_scale,y*z_scale))z_min=func(x*z_scale,y*z_scale);
            }


        SDL_SetRenderDrawColor(ren, 0, 0, 0, 0x00);
        SDL_RenderClear(ren);

        //корды

        finally_some_good_texter((unsigned char*)num_to_str((int)x_move),siz(x_move)+1,PIC_WIDTH/2-siz(x_move)*3,PIC_HEIGHT+20,2,255,255,255);
        finally_some_good_texter((unsigned char*)num_to_str((int)y_move),siz(y_move)+1,PIC_WIDTH+100,PIC_HEIGHT/2,2,255,255,255);




//*****************************************************************************************************************************
        //рисование координат

        SDL_SetRenderDrawColor(ren, 240, 240, 240, 0x00);
        SDL_Rect rect2 = {PIC_WIDTH+2,0,15,PIC_HEIGHT};/////////////////////
        SDL_RenderFillRect(ren, &rect2);
        //cout<<z_max<<"_"<<z_min<<" "<<num_to_str((int)(z_max))<<"\n";

        finally_some_good_texter((unsigned char*)num_to_str((int)z_max),siz(z_max)+1,PIC_WIDTH+20,((double)(0)/10)*(PIC_HEIGHT-25)-3+10,2,255,255,255);
        finally_some_good_texter((unsigned char*)num_to_str((int)0),1,PIC_WIDTH+20,((double)(5)/10)*(PIC_HEIGHT-25)-3+10,2,255,255,255);
        finally_some_good_texter((unsigned char*)num_to_str((int)-z_min),siz(z_min)+1,PIC_WIDTH+20,((double)(10)/10)*(PIC_HEIGHT-25)-3+10,2,255,255,255);
        system("cls");
        cout<<"максимум функции "<<z_max<<"\n минимум функции "<<z_min<<"\nz_scale "<<z_scale<<"\n";

        //for (int i=10; i>-1; i--)
        //{

            //y=((double)(10-i)/10)*(PIC_HEIGHT-25);
            //cout<<y<<"_"<<(z_max-z_min)*(y-10)/(PIC_HEIGHT-20)<<"\n";
            //finally_some_good_texter((unsigned char*)num_to_str((int)i),siz,PIC_WIDTH+20,y-3+10,2,255,255,255);
            /*
            if(i<0)
            {
                cout<<(i-5)<<" "<<(int)(z_max)/5*(i-5)<<"\n";
                finally_some_good_texter((unsigned char*)num_to_str((int)(z_max)/5*0),siz,PIC_WIDTH+20,y-3+10,2,255,255,255);
            }
            else
            {
                finally_some_good_texter((unsigned char*)num_to_str((int)(z_min)/5*i),siz,PIC_WIDTH+20,y-3+10,2,255,255,255);
            }*/

        //}

        //(z_max-z_min)*(y-10)/(PIC_HEIGHT-20)
//*****************************************************************************************************************************
        for (y=10; y<PIC_HEIGHT-10; y++)//рисование шкалы
        {
            for (x=PIC_WIDTH+5+2; x<PIC_WIDTH+10+2; x++)
            {

                if(y<PIC_HEIGHT/2)
                {

                    {
                        SDL_SetRenderDrawColor(ren, 250, 255-255*(y-PIC_HEIGHT/2)/((PIC_HEIGHT-20)/2), 0, 0x00); //кр-жел
                        SDL_RenderDrawPoint(ren,x,y);
                    }
                }
                else
                {

                    {
                        SDL_SetRenderDrawColor(ren, 0, 0, 255-255*(y-10)/((PIC_HEIGHT-20)/2), 0x00); //кр-жел
                        SDL_RenderDrawPoint(ren,x,y);
                    }
                }
            }

        }
#define FUNC 255*func(x*z_scale,y*z_scale)/(z_max)
#define FUNC_M 255*func(x*z_scale,y*z_scale)/(-z_min)
        //cout<<z_max<<" "<<z_min<<" \n";

        //func(x/z_scale,y/z_scale)/((z_max-z_min)/sensitivity)
//*****************************************************************************************************************************
        for (y=mi; y<ma; y++)//рисование вид сверху
        {
            for (x=mi; x<ma; x++)
            {
                //cout<<(int)FUNC<<"  ";
                if(255 > FUNC)//func(x,y) == 4) нормальные значения
                {
                    if(0 < FUNC)
                    {
                        SDL_SetRenderDrawColor(ren, 250, FUNC, 0, 0x00);//кр-жел
                        SDL_RenderDrawPoint(ren,x+x0,y+y0);
                    }
                    else
                    {
                        SDL_SetRenderDrawColor(ren, 0, 0, FUNC_M-1, 0x00);//син-чер
                        SDL_RenderDrawPoint(ren,x+x0,y+y0);
                    }
                }
                else //printf("%3d",0);
                {
                    SDL_SetRenderDrawColor(ren, 255, 255, FUNC, 0x00);//жел-бел
                    SDL_RenderDrawPoint(ren,x+x0,y+y0);
                }

                /*if(250 < FUNC && FUNC < 255)//границы высоты
                {
                    SDL_SetRenderDrawColor(ren, 0, 255, 0, 0x00);//зел
                    SDL_RenderDrawPoint(ren,x+x0,y+y0);
                }
                if(-255 < FUNC && FUNC < -250 )//границы высоты
                {
                    SDL_SetRenderDrawColor(ren, 0, 255, 0, 0x00);//зел
                    SDL_RenderDrawPoint(ren,x+x0,y+y0);
                }*/
                if (fl_setca)
                {
                    //упрощенный вар
                    for (int k=0; k<51; k++)
                        if(k*5 < FUNC && FUNC < 1+k*5)//границы высоты географичненько
                        {
                            SDL_SetRenderDrawColor(ren, 0, 255, 0, 0x00);//зел
                            SDL_RenderDrawPoint(ren,x+x0,y+y0);
                        }
                    for (int k=-51; k<0; k++)
                        if(-1+k*5 < FUNC_M-1 && FUNC_M-1 < k*5)//границы высоты географичненько
                        {
                            SDL_SetRenderDrawColor(ren, 0, 255, 0, 0x00);//зел
                            SDL_RenderDrawPoint(ren,x+x0,y+y0);
                        }



                    /*for (int k=-125; k<125; k++)
                        if(0+k*2 < FUNC && FUNC < 1+k*2)//границы высоты географичненько
                        {
                            SDL_SetRenderDrawColor(ren, 0, 255, 0, 0x00);//зел
                            SDL_RenderDrawPoint(ren,x+x0,y+y0);
                        }*/
                }



                if(0 == func(x,y))//func(x,y) == 4) нулевое
                {
                    SDL_SetRenderDrawColor(ren, 255, 0, 255, 0x00);//роз
                    SDL_RenderDrawPoint(ren,x+x0,y+y0);
                }

            }

            //cout<<"\n";
        }
        //cout<<"\n";
//finally_some_good_texter((unsigned char*)"11",2,5,5,3,222,222,222);


        /*float q;
        int x0=0, y0=0, grad=0,q_int;
        for (i=mi; i<ma; i++)
            for (q_int=1;q_int<301;q_int++)
            {
                q=q_int;
                //cout<<q/300.0<<"  ";
                SDL_SetRenderDrawColor(ren, 100, 100, 100, 0x00);
                //SDL_RenderDrawPoint(ren,222+i+q/300,222+func(x0+(i+q/300)*cos(grad),y0+(i+q/300)*sin(grad))+100);
            }
            //printf("%3d",func(x0+i*cos(grad),y0+i*sin(grad)));*/
        /*SDL_SetRenderDrawColor(ren, 0, 0, 0, 0x00);
        SDL_RenderClear(ren);
        SDL_SetRenderDrawColor(ren, 222, 222, 222, 0x00);
        double a=30 * 3.14 / 180;
        for(int i2=-300;i2<300;i2++)
            for(int i3=-400;i3<400;i3++)
            if((i2*cos(a)+i3*sin(a))*(i2*cos(a)+i3*sin(a))/4+(-i2*sin(a)+i3*cos(a))*(-i2*sin(a)+i3*cos(a))<200)SDL_RenderDrawPoint(ren,i2+100,i3+100);*/

        SDL_RenderPresent(ren);
        SDL_UpdateWindowSurface(win);
        SDL_Delay(10);

    }
    quit();
    return 0;
}
