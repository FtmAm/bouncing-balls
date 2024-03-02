#include <iostream>
#include<cmath>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL2_gfx.h>
#include <string>
#include <bits/stdc++.h>
#include<SDL2/SDL_mixer.h>
#include <vector>

using namespace std;

SDL_Renderer * m_renderer;

void texture(SDL_Renderer *Renderer,int xp,int yp,SDL_Texture* myTexture,int width,int height, SDL_Rect texr1);
void texture_avallie();
void tabeback(string s);
void aadad(int x, int y, string ad, int ww, int ll);
int find_pointy(int x);
int find_pointx(int x, int y);
void barkhord_partabe_be_toop(int komak);
void Union(int a, int b);
void hazf(int y_block, int x_block, int y_block2, int x_block2);
int Root(int idx);
int andis(int r, int g, int b);
int barkhord_kardan(int komak);
void oftadan(int x_block, int y_block);
void dfs(int v);
Uint32 timerCallback(Uint32 interval, void *param);
void sor();
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void draw_text(SDL_Renderer *renderer , string text , TTF_Font *font , int x , int y , Uint8 R , Uint8 G  , Uint8 B);
void bombb();
void leyzer();
Uint32 timerCallback2(Uint32 interval, void *param);
void restart();



struct ball{
    int colorr, colorg, colorb;
    int x, y;
    int i, j;
    string type;
};
void partabe_jadid_sakhtan(struct ball &partab, int indd);
SDL_Texture *Inputbox_norm = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/untitled3/input_box_norm.png");
SDL_Texture *Inputbox_selected = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/untitled3/input_box_selected.png");

struct Keyboard_handler
{
    bool is_down = false;
    bool is_anything = true;
    char curruntK = '!';
    int delay = 3;
    void keydown(SDL_Event *event)
    {

        is_down = true;
        if (event->key.keysym.sym == SDLK_SPACE)
            curruntK = ' ';
        else if (event->key.keysym.sym == SDLK_a)
            curruntK = 'a';
        else if (event->key.keysym.sym == SDLK_b)
            curruntK = 'b';
        else if (event->key.keysym.sym == SDLK_c)
            curruntK = 'c';
        else if (event->key.keysym.sym == SDLK_d)
            curruntK = 'd';
        else if (event->key.keysym.sym == SDLK_e)
            curruntK = 'e';
        else if (event->key.keysym.sym == SDLK_f)
            curruntK = 'f';
        else if (event->key.keysym.sym == SDLK_g)
            curruntK = 'g';
        else if (event->key.keysym.sym == SDLK_h)
            curruntK = 'h';
        else if (event->key.keysym.sym == SDLK_i)
            curruntK = 'i';
        else if (event->key.keysym.sym == SDLK_j)
            curruntK = 'j';
        else if (event->key.keysym.sym == SDLK_k)
            curruntK = 'k';
        else if (event->key.keysym.sym == SDLK_l)
            curruntK = 'l';
        else if (event->key.keysym.sym == SDLK_m)
            curruntK = 'm';
        else if (event->key.keysym.sym == SDLK_n)
            curruntK = 'n';
        else if (event->key.keysym.sym == SDLK_o)
            curruntK = 'o';
        else if (event->key.keysym.sym == SDLK_p)
            curruntK = 'p';
        else if (event->key.keysym.sym == SDLK_q)
            curruntK = 'q';
        else if (event->key.keysym.sym == SDLK_r)
            curruntK = 'r';
        else if (event->key.keysym.sym == SDLK_s)
            curruntK = 's';
        else if (event->key.keysym.sym == SDLK_t)
            curruntK = 't';
        else if (event->key.keysym.sym == SDLK_u)
            curruntK = 'u';
        else if (event->key.keysym.sym == SDLK_v)
            curruntK = 'v';
        else if (event->key.keysym.sym == SDLK_w)
            curruntK = 'w';
        else if (event->key.keysym.sym == SDLK_x)
            curruntK = 'x';
        else if (event->key.keysym.sym == SDLK_y)
            curruntK = 'y';
        else if (event->key.keysym.sym == SDLK_z)
            curruntK = 'z';
        else if (event->key.keysym.sym == SDLK_1 || event->key.keysym.sym == SDLK_KP_1)
            curruntK = '1';
        else if (event->key.keysym.sym == SDLK_2 || event->key.keysym.sym == SDLK_KP_2)
            curruntK = '2';
        else if (event->key.keysym.sym == SDLK_3 || event->key.keysym.sym == SDLK_KP_3)
            curruntK = '3';
        else if (event->key.keysym.sym == SDLK_4 || event->key.keysym.sym == SDLK_KP_4)
            curruntK = '4';
        else if (event->key.keysym.sym == SDLK_5 || event->key.keysym.sym == SDLK_KP_5)
            curruntK = '5';
        else if (event->key.keysym.sym == SDLK_6 || event->key.keysym.sym == SDLK_KP_6)
            curruntK = '6';
        else if (event->key.keysym.sym == SDLK_7 || event->key.keysym.sym == SDLK_KP_7)
            curruntK = '7';
        else if (event->key.keysym.sym == SDLK_8 || event->key.keysym.sym == SDLK_KP_8)
            curruntK = '8';
        else if (event->key.keysym.sym == SDLK_9 || event->key.keysym.sym == SDLK_KP_9)
            curruntK = '9';
        else if (event->key.keysym.sym == SDLK_0 || event->key.keysym.sym == SDLK_KP_0)
            curruntK = '0';
        else if (event->key.keysym.sym == SDLK_BACKSPACE)
            curruntK = '@';
        is_anything = true;
    }
    char get_current()
    {
        if (is_anything)
        {
            is_anything = false;
            return curruntK;
        }
        else
            return '!';
    }
    void keyup(SDL_Event *event)
    {
        is_down = false;
    }
};
struct Inputbox
{
    SDL_Texture *norm_tex;
    SDL_Texture *selected_tex;
    bool is_selected;
    string text;
    SDL_Rect rect;
    SDL_Color text_color;
    SDL_Rect text_rect;
    void create(SDL_Texture *norm_texture , SDL_Texture *selected_texture ,int x , int y , int w , int h , int margin , Uint8 R , Uint8 G , Uint8 B)
    {
        norm_tex = norm_texture;
        selected_tex = selected_texture;
        rect = {x , y , w , h};
        text_rect.x = x + margin;
        text_rect.y = y + margin;
        text = "";
        is_selected = false;
        text_color = {R , G , B};
    }
    bool select(SDL_Point *mouse)
    {
        if (rect.x <= mouse->x && rect.x + rect.w >= mouse->x && rect.y <= mouse->y && rect.y + rect.h >= mouse->y)
        {
            is_selected = true;
            return true;
        }
        return false;
    }
    void input(Keyboard_handler *keyboard)
    {
        if(is_selected)
        {
            //cout << "DDD" << endl;
            char current;
            current = keyboard->get_current();
            if(current == '@')
            {
                if(text.length() > 0)
                    text = text.substr(0 , text.length()-1);
            }
            else if(current != '!')
                text += current;
        }
    }
    void Draw(SDL_Renderer *renderer , TTF_Font *font)
    {
        if(is_selected)
            SDL_RenderCopy(renderer , selected_tex , NULL , &rect);
        else
            SDL_RenderCopy(renderer , norm_tex , NULL , &rect);
        if(text != "")
        {
            // text_surface = TTF_RenderText_Solid(font, text.c_str(), text_color);
            // text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);
            // text_rect.w = text_surface->w;
            // text_rect.h = text_surface->h;
            // SDL_RenderCopy(renderer, text_texture, NULL, &text_rect);
            draw_text(renderer , text , font , text_rect.x + 250 , text_rect.y , text_color.r , text_color.g , text_color.b );
        }
        else{
            // cout <<"khar hastam";
        }
    }
};

Keyboard_handler input_keyboard;
//input_keyboard.delay = 3;

vector <int> vec[1000];
vector <int> vecy[100];
bool boodan_dayere[1000][1000];
struct ball balls[100][100];
vector <ball> ball_component[1000];
struct ball partabe, new_partabe;
int id[1110], sz[1110];
int a[6] = {4, 2, 1, 5, 6, 0};
int tt[10];
bool visited[1000], hazfi[1000];
vector <int> edg[1000];
vector <struct ball> payini;
vector <string> asami;
vector <int> eemtiaz;
vector <int> b_l_m[3];
int boodan_dar_satr[1000];

bool start_play = false;
bool started = false;
bool partabe_jadid = true;
bool setting_state = false;
bool sound = true;
double x, y;
double mousex, mousey, shib;
bool dar_hal_partab = false;
int state_initial = 400;
int initi = 0, rafte = -6;
int payin = 0, sorat = 0;
string back_ground = "1";
bool seda_bashe=true;
bool yal[1000][1000];
int emtiaz;
int emtiaz_toop_khali=3;
int emtiaz_khoob_bazikardan=1;
int yec;
int dah;
int sad;
int yec_score_x=450,dah_score_x=400,sad_score_x=350,yec_score_y=700,dah_score_y=700,sad_score_y=700,score_w=50,scor_l=75;
string yec1= to_string(yec);
string dah1= to_string(dah);
string sad1= to_string(sad);
string user;
bool hast = 0;
int this_user = 0;
bool in_scoreboard = 0;
bool pakhsh=true;
bool normal_mode = 0, timer_mode = 0;
int timer = 0;
int pause_icon_x=25,pause_icon_y=25;
bool pause=false;
int soundon_icon_x = 200, soundon_icon_y = 400;
int start_icon_x = 150, start_icon_y = 200;
int setting_icon_x = 150, setting_icon_y = 300;
int up_icon_x = 375, down_icon_x = 25;
int volume_avalie = 64, change_volume = 32;
int icon_w = 200, icon_l = 100, icon2_w = 75, icon2_l = 75;
int music_icon_x = 200, music_icon_y = 475;
int left_icon_x = 51, right_icon_x = 350;
int choose_background_x = 140, choose_background_y = 550;
int scoreboard_y = 650;
int W = 520;
int L = 800;
bool quit = false;
bool flag = true;
int vv[5], uu[5], vv2[5], uu2[5];
bool pause_yakhi = false;
bool slow_yakhi = false;
int pb_x=10,pb_y=685,iconpb_w=200,iconpb_l=85;
int b_x=20,l_x=80,m_x=140,blm_y=690,iconblm_w=60,iconblm_l=60;
int bn_x=50,ln_x=110,mn_x=170,blmn_y=730,iconn_w=20,iconn_l=40;
string bnn="0",lnn="0",mnn="0";


SDL_Rect _0_rect;
SDL_Rect _1_rect;
SDL_Rect _2_rect;
SDL_Rect _3_rect;
SDL_Rect _4_rect;
SDL_Rect _5_rect;
SDL_Rect _6_rect;
SDL_Rect _7_rect;
SDL_Rect _8_rect;
SDL_Rect _9_rect;
SDL_Rect _down_icon_rect;
SDL_Rect _left_icon_rect;
SDL_Rect _leftflash_icon_rect;
SDL_Rect _music_icon_rect;
SDL_Rect _play_icon_rect;
SDL_Rect _puase_icon_rect;
SDL_Rect _quit_icon_rect;
SDL_Rect _right_icon_rect;
SDL_Rect _rightflash_icon_rect;
SDL_Rect _scoreboard_icon_rect;
SDL_Rect _up_icon_rect;
SDL_Rect b_rect;
SDL_Rect _background_icon_rect;
SDL_Rect bomb_rect;
SDL_Rect _exit_icon_rect;
SDL_Rect laser_rect;
SDL_Rect multicolor_ball_rect;
SDL_Rect _normal_mode_rect;
SDL_Rect pause_effect_rect;
SDL_Rect setting_icon_rect;
SDL_Rect silence_icon_rect;
SDL_Rect slow_effect_rect;
SDL_Rect soundon_icon_rect;
SDL_Rect start_icon_rect;
SDL_Rect t2_rect;
SDL_Rect _timer_mode_rect;
SDL_Rect b1_rect;
SDL_Rect b3_rect;
SDL_Rect b5_rect;
SDL_Rect scoreboard_rect;
SDL_Rect bord_rect;
SDL_Rect bakht_rect;
SDL_Rect w1_rect;






SDL_Texture* _0_ = NULL;
SDL_Texture* _1_ = NULL;
SDL_Texture* _2_ = NULL;
SDL_Texture* _3_ = NULL;
SDL_Texture* _4_ = NULL;
SDL_Texture* _5_ = NULL;
SDL_Texture* _6_ = NULL;
SDL_Texture* _7_ = NULL;
SDL_Texture* _8_ = NULL;
SDL_Texture* _9_ = NULL;
SDL_Texture* _down_icon = NULL;
SDL_Texture* _left_icon = NULL;
SDL_Texture* _leftflash_icon = NULL;
SDL_Texture* _music_icon = NULL;
SDL_Texture* _play_icon = NULL;
SDL_Texture* _puase_icon = NULL;
SDL_Texture* _quit_icon = NULL;
SDL_Texture* _right_icon = NULL;
SDL_Texture* _rightflash_icon = NULL;
SDL_Texture* _scoreboard_icon = NULL;
SDL_Texture* _up_icon = NULL;
SDL_Texture* b = NULL;
SDL_Texture* bomb = NULL;
SDL_Texture* _exit_icon = NULL;
SDL_Texture* laser = NULL;
SDL_Texture* multicolor_ball = NULL;
SDL_Texture* _normal_mode = NULL;
SDL_Texture* pause_effect = NULL;
SDL_Texture* setting_icon = NULL;
SDL_Texture* _silence_icon = NULL;
SDL_Texture* slow_effect = NULL;
SDL_Texture* _soundon_icon = NULL;
SDL_Texture* start_icon = NULL;
SDL_Texture* t2 = NULL;
SDL_Texture* _timer_mode = NULL;
SDL_Texture* b1 = NULL;
SDL_Texture* b3 = NULL;
SDL_Texture* b5 = NULL;
SDL_Texture* scoreboard = NULL;
SDL_Texture* bord = NULL;
SDL_Texture* bakht = NULL;
SDL_Texture* w1 = NULL;
SDL_Texture* _background_icon = NULL;



int main(int argc, char* args[]) {
    srand(time(0));

    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN ;//| SDL_WINDOW_FULLSCREEN_DESKTOP;//SDL_WINDOW_BORDERLESS ;
    SDL_Window * m_window;

    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( W, L, WND_flags, &m_window, &m_renderer );
    SDL_RaiseWindow(m_window);
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);
    SDL_Init(SDL_INIT_AUDIO);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    SDL_Init(SDL_INIT_AUDIO);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    int which_music=1;
    int music_play=1;
    int which_background=1;
    // Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3") ,-1);
    SDL_TimerID timerID = SDL_AddTimer(5000, timerCallback, NULL);
    TTF_Init();
    Uint32 interval = 1000;
    SDL_TimerID timer2ID = SDL_AddTimer(interval, timerCallback2, NULL);
    _up_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_up_icon.png");
    _down_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_down_icon.png");
    _soundon_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_soundon_icon.png");
    _silence_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_silence_icon.png");
    _left_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_left_icon.png");
    _right_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_right_icon.png");
    _leftflash_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_leftflash_icon.png");
    _rightflash_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_rightflash_icon.png");
    _music_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_music_icon.png");
    _play_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_play_icon.png");
    _puase_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_puase_icon.png");
    _0_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_0_.png");
    _1_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_1_.png");
    _2_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_2_.png");
    _3_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_3_.png");
    _4_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_4_.png");
    _5_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_5_.png");
    _6_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_6_.png");
    _7_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_7_.png");
    _8_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_8_.png");
    _9_ = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_9_.png");
    _background_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_background_icon.png");
    _quit_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_quit_icon.png");
    _scoreboard_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_scoreboard_icon.png");
    b = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/b.png");
    bomb = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/bomb.png");
    _exit_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/exit_icon.png");
    laser = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/laser.png");
    multicolor_ball = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/multicolor_ball.png");
    _normal_mode = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_normal_mode.png");
    pause_effect = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/pause_effect.png");
    setting_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/setting_icon.png");
    _silence_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/silence_icon.png");
    slow_effect = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/slow_effect.png");
    _soundon_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/soundon_icon.png");
    start_icon = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/start_icon.png");
    t2  = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/t2.png");
    _timer_mode = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/icon/_timer_mode.png");
    w1 = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/w1.jpeg");
    b1 = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/1.jpg");
    b3 = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/3.jpg");
    b5 = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/5.jpg");
    scoreboard = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/scoreboard.png");
    bord = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/bord.jpeg");
    bakht = IMG_LoadTexture(m_renderer, "C:/Users/USER/Desktop/project/background/bakht.jpeg");
    Inputbox username_input;
    username_input.create(Inputbox_norm , Inputbox_selected , 600/2 - 300 , 150 , 600 , 100 , 30 , 0 , 0 , 0 );

    TTF_Font* font = TTF_OpenFont("C:/Users/USER/Desktop/project/Honk.ttf", 36);
    TTF_Font* font2 = TTF_OpenFont("C:/Users/USER/Desktop/project/Honk.ttf", 48);

    // start

    ifstream fin("C:\\Users\\USER\\Desktop\\project\\emtiaz.txt", ios::in);

    ifstream fin2("C:\\Users\\USER\\Desktop\\project\\esami.txt", ios::in);
    ifstream fin3("C:\\Users\\USER\\Desktop\\project\\b_l_m.txt", ios::in);
    string gerefte;
    int score;
    bool logged = 1;
    while(true){
        string back = gerefte;
        fin2 >> gerefte;
        if (gerefte == back){
            break;
        }
        int a, b, c;
        fin3 >> a >> b >> c;
        fin >> score;
        asami.push_back(gerefte);
        // asami[this_user] = username hal hazer
        eemtiaz.push_back(score);
        // tedad bomb
        b_l_m[0].push_back(a);
        //tedad leyzer
        b_l_m[1].push_back(b);
        //tedad multicolor
        b_l_m[2].push_back(c);

    }

    sor();
    SDL_Event *event = new SDL_Event();
    //nahve gharar giri avalie toop ha
    texture_avallie();
    for (int k = 0; k < 86; k++) {
        if (k >= 43){
            vec[k].push_back(25 + k - 43);

        }
        for (int i = 0; i < 30; i++) {
            vecy[k].push_back(i * 43 + 25 + k);
        }
    }
    int tit = 0;
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            int row = 50, shif = 0, row2 = 25;
            if (i % 2 == 1) {
                shif = 25;
            }
            vec[i].push_back(j * 50 + 25 + shif);
        }
    }
    for (int i = 0; i < 30; i++){
        sort(vec[i].begin(), vec[i].end());
    }
    for (int i = 0; i < 86; i++){
        sort(vecy[i].begin(), vecy[i].end());
    }
    texture(m_renderer, 0, 0, w1, W, L,w1_rect);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(1000);

    partabe.x = 210, partabe.y = 700;

    while (!quit) {

        if (!start_play) {



            SDL_Event event;
            if (in_scoreboard == 0) {
                tabeback(back_ground);
                texture(m_renderer, start_icon_x, start_icon_y, start_icon,
                        icon_w,
                        icon_l,start_icon_rect);

                texture(m_renderer, setting_icon_x, setting_icon_y,
                        setting_icon,
                        icon_w, icon_l,setting_icon_rect);
            }
            if (in_scoreboard) {
                texture(m_renderer, 420, 700, _rightflash_icon, icon2_w,
                        icon2_l,_rightflash_icon_rect);
            }
            if (in_scoreboard == 0 and setting_state) {
                //cout << "30\n";
                if (sound)
                    texture(m_renderer, soundon_icon_x, soundon_icon_y,
                            _soundon_icon, icon2_w, icon2_l,soundon_icon_rect);
                else
                    texture(m_renderer, soundon_icon_x, soundon_icon_y,
                            _silence_icon, icon2_w, icon2_l,silence_icon_rect);
                texture(m_renderer, music_icon_x, music_icon_y,
                        _music_icon, icon2_w, icon2_l,_music_icon_rect);
                texture(m_renderer, left_icon_x + 50, music_icon_y,
                        _right_icon, icon2_w, icon2_l,_right_icon_rect);
                texture(m_renderer, right_icon_x - 50, music_icon_y,
                        _left_icon, icon2_w, icon2_l,_left_icon_rect);
                texture(m_renderer, choose_background_x, choose_background_y,
                        _background_icon, icon_w, icon_l,_background_icon_rect);
                texture(m_renderer, left_icon_x + 25, choose_background_y,
                        _leftflash_icon, icon2_w, icon2_l,_leftflash_icon_rect);
                texture(m_renderer, right_icon_x - 15, choose_background_y + 3,
                        _rightflash_icon, icon2_w, icon2_l,_rightflash_icon_rect);
                texture(m_renderer, choose_background_x, scoreboard_y,
                        _scoreboard_icon, icon_w, icon_l,_scoreboard_icon_rect);
                texture(m_renderer, down_icon_x, music_icon_y,
                        _down_icon, icon2_w, icon2_l,_down_icon_rect);
                texture(m_renderer, up_icon_x, music_icon_y,
                        _up_icon, icon2_w, icon2_l,_up_icon_rect);
                texture(m_renderer, left_icon_x + 50, soundon_icon_y,
                        _down_icon, icon2_w, icon2_l,_down_icon_rect);
                texture(m_renderer, right_icon_x - 50, soundon_icon_y,
                        _up_icon, icon2_w, icon2_l,_up_icon_rect);

            }
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_MOUSEBUTTONDOWN) {
                    int mouseX = event.button.x;
                    int mouseY = event.button.y;
                    if (in_scoreboard == 0 and mouseX > start_icon_x and mouseX < start_icon_x + icon_w and
                        mouseY > start_icon_y and
                        mouseY < start_icon_y + icon_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        start_play = true;
                    }
                    if (in_scoreboard == 0 and mouseX > setting_icon_x and mouseX < setting_icon_x + icon_w and
                        mouseY > setting_icon_y and
                        mouseY < setting_icon_y + icon_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        if (!setting_state) {
                            setting_state = true;
                        } else {
                            setting_state = false;
                        }
                    }
                    if (in_scoreboard) {
                        if (mouseX > 420 and mouseX < 420 + icon_w and mouseY > 700 and mouseY < 700 + icon_l) {
                            in_scoreboard = 0;

                        }
                    }
                    if (in_scoreboard == 0 and setting_state == true) {
                        if (mouseX > soundon_icon_x and mouseX < soundon_icon_x + icon2_w and mouseY > soundon_icon_y and
                            mouseY < soundon_icon_y + icon2_l) {
                            if (sound) {
                                sound = false;
                                pakhsh = false;
                            } else {
                                sound = true;
                                pakhsh = true;
                            }

                        }
                        if (mouseX > music_icon_x and mouseX < music_icon_x + icon2_w and mouseY > music_icon_y and
                            mouseY < music_icon_y + icon2_l) {
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                            music_play++;
                            if (music_play % 2 == 0) {
                                if (which_music % 3 == 0) {
                                    Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                                    Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                                }
                                if (which_music % 3 == 1 || which_music % 3 == -2) {
                                    Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                                    Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                                }
                                if (which_music % 3 == 2 || which_music % 3 == -1) {
                                    Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                                    Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                                }

                            } else {
                                Mix_HaltMusic();
                            }
                        }
                        if (mouseX > right_icon_x - 50 and mouseX < right_icon_x + icon2_w - 50 and
                            mouseY > music_icon_y and
                            mouseY < music_icon_y + icon2_l) {
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                            which_music++;
                            if (which_music % 3 == 0) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                            }
                            if (which_music % 3 == 1 || which_music % 3 == -2) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                            }
                            if (which_music % 3 == 2 || which_music % 3 == -1) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                            }

                        }
                        if (mouseX > left_icon_x + 50 and mouseX < left_icon_x + icon2_w + 50 and
                            mouseY > music_icon_y and
                            mouseY < music_icon_y + icon2_l) {
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                            which_music--;
                            which_music += 3;
                            if (which_music % 3 == 0) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                            }
                            if (which_music % 3 == 1 || which_music % 3 == -2) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                            }
                            if (which_music % 3 == 2 || which_music % 3 == -1) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                            }

                        }
                        if (mouseX > left_icon_x + 25 and mouseX < left_icon_x + icon2_w + 25 and
                            mouseY > choose_background_y and mouseY < choose_background_y + icon2_l) {
                            which_background++;
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                        }
                        if (mouseX > right_icon_x and mouseX < right_icon_x + icon2_w and
                            mouseY > choose_background_y + 3 and mouseY < choose_background_y + icon2_l + 3) {
                            which_background--;
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                        }

                        if (which_background % 3 == 0) {
                            back_ground = "3";
                            //texture(m_renderer, 0, 0, "C:/Users/USER/Desktop/project/background/3.jpg", W, L);
                        }
                        if (which_background % 3 == 1 || which_background % 3 == -2) {
                            back_ground = "1";
                            //texture(m_renderer, 0, 0, "C:/Users/USER/Desktop/project/background/1.jpg", W, L);
                        }
                        if (which_background % 3 == 2 || which_background % 3 == -1) {
                            back_ground = "5";
                            //texture(m_renderer, 0, 0, "C:/Users/USER/Desktop/project/background/5.jpg", W, L);
                        }
                        if (mouseX > choose_background_x and mouseX < choose_background_x + icon_w and
                            mouseY > scoreboard_y and mouseY < scoreboard_y + icon_l) {
                            texture(m_renderer, 0, 0, scoreboard, W, L,scoreboard_rect);
                            for (int i = 0; i < min(13, (int)asami.size()); i++) {
                                draw_text(m_renderer, asami[i], font, 50, 100 + 50 * i, 0, 0, 0);
                                draw_text(m_renderer, to_string(eemtiaz[i]), font, 300, 100 + 50 * i, 0, 0, 0);
                                if (pakhsh) {
                                    Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                                }
                            }
                            in_scoreboard = 1;
                        }
                    }
                    if (mouseX > up_icon_x and mouseX < up_icon_x + icon2_w and mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {
                        volume_avalie += change_volume;
                        Mix_VolumeMusic(volume_avalie);
                        if (which_music % 3 == 0) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);

                        }
                        if (which_music % 3 == 1 || which_music % 3 == -2) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                        }
                        if (which_music % 3 == 2 || which_music % 3 == -1) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                        }
                    }
                    if (mouseX > down_icon_x and mouseX < down_icon_x + icon2_w and mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        volume_avalie -= change_volume;
                        Mix_VolumeMusic(volume_avalie);
                        if (which_music % 3 == 0) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                        }
                        if (which_music % 3 == 1 || which_music % 3 == -2) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                        }
                        if (which_music % 3 == 2 || which_music % 3 == -1) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                        }
                    }
                    if (mouseX > right_icon_x-50 and mouseX < right_icon_x + icon2_w -50 and mouseY > soundon_icon_y and
                        mouseY < soundon_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        volume_avalie += change_volume;
                        Mix_VolumeMusic(volume_avalie);

                    }
                    if (mouseX > left_icon_x+50 and mouseX < left_icon_x + icon2_w+50 and mouseY > soundon_icon_y and
                        mouseY < soundon_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        volume_avalie -= change_volume;
                        Mix_VolumeMusic(volume_avalie);

                    }





                }

            }
        }
        else{
            if (timer_mode == 0 and normal_mode == 0) {
                SDL_Event event2;
                tabeback(back_ground);
                int normal_mode_x = 150, normal_mode_y = 200;
                int timer_mode_x = 150, timer_mode_y = 450;
                int icon_l = 100, icon_w = 200;
                tabeback(back_ground);
                texture(m_renderer, normal_mode_x, normal_mode_y,
                        _normal_mode, icon_w, icon_l,_normal_mode_rect);
                texture(m_renderer, timer_mode_x, timer_mode_y,
                        _timer_mode, icon_w, icon_l,_timer_mode_rect);
                while (SDL_PollEvent(&event2)) {
                    if (event2.type == SDL_MOUSEBUTTONDOWN) {
                        int mouseX = event2.button.x;
                        int mouseY = event2.button.y;
                        if (mouseX > normal_mode_x and mouseX < normal_mode_x + icon_w and mouseY > normal_mode_y and
                            mouseY < normal_mode_y + icon_l) {
                            normal_mode = true;
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                        }
                        if (mouseX > timer_mode_x and mouseX < timer_mode_x + icon_w and mouseY > timer_mode_y and
                            mouseY < timer_mode_y + icon_l) {
                            timer_mode = true;
                            if (pakhsh) {
                                Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                            }
                        }
                    }
                }
            }

            if (pause == 0 and (timer_mode or normal_mode)) {
                tit += 1;
                tit %= 2;
                if (pause_yakhi == 0 and logged == 0 and !tit) {
                    if (slow_yakhi)
                        initi += 1;
                    else
                        initi += payin;
                }
                rafte += (initi / 86) * 2;
                initi %= 86;
                for (int i = 0; i < 400; i++) {
                    for (auto &one_ball: ball_component[i]) {
                        if (pause_yakhi == 0 and logged == 0 and !tit) {
                            if (slow_yakhi){
                                one_ball.y += 1;
                                balls[one_ball.i][one_ball.j].y += 1;
                            }
                            else {
                                one_ball.y += payin;
                                balls[one_ball.i][one_ball.j].y += payin;
                            }


                        }

                    }
                }
                if (pause_yakhi == 0 and logged == 0 and !tit) {
                    for (int i = 0; i < 400; i++) {
                        for (auto &one_ball: ball_component[i]) {
                            if (one_ball.y > 650) {
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/sedabakht.mp3"), 1);
                                texture(m_renderer, 0, 0, bakht, W, L,bakht_rect);
                                ofstream fout3("C:\\Users\\USER\\Desktop\\project\\b_l_m.txt", ios::out);
                                for (int i = 0; i < b_l_m[0].size(); i++){
                                    fout3 << b_l_m[0][i] << " " << b_l_m[1][i] << " " <<  b_l_m[2][i] <<"\n";
                                }
                                SDL_RenderPresent(m_renderer);
                                SDL_Delay(4000);
                                return 0;
                            }

                        }
                    }
                }

                for (auto &one_ball: payini) {
                    one_ball.y += 10;

                }/*
                for (auto it = payini.begin(); it != payini.end();++it) {
                    struct ball one_ball = *it;
                    if (one_ball.y > 840) {
                        payini.erase(it);
                    }
                }*/

                if (!started) {

                    if (logged == 1) {


                        tabeback(back_ground);
                        rect(m_renderer, 50, 150, 400, 100, 255, 255, 255, 1);
                        username_input.input(&input_keyboard);
                        username_input.Draw(m_renderer, font);
                        username_input.is_selected = true;
                        draw_text(m_renderer, "Username :", font, 100, username_input.text_rect.y, 0, 0, 0);
                    } else {
                        payin = 0;
                        user = username_input.text;
                        hast = 0;

                        for (int i = 0; i < asami.size(); i++) {
                            if (user == asami[i]) {
                                hast = 1;
                                this_user = i;
                            }
                        }

                        if (hast == 0) {
                            asami.push_back(user);
                            eemtiaz.push_back(0);
                            b_l_m[0].push_back(0);
                            b_l_m[2].push_back(0);
                            b_l_m[1].push_back(0);
                            this_user = asami.size() - 1;
                        }
                        tabeback(back_ground);

                        for (int i = 0; i < 10; i++) {
                            for (int j = 0; j < 15; j++) {
                                int row = 50, shif = 0, row2 = 25;
                                if (j % 2 == 1) {
                                    shif = row / 2;
                                }

                                filledEllipseRGBA(m_renderer, balls[i][j].x, balls[i][j].y, 25, 25, balls[i][j].colorr,
                                                  balls[i][j].colorg, balls[i][j].colorb, 255);
                            }
                        }
                        timer = 0;
                        started = true;
                    }
                } else {
                    if (partabe_jadid) {
                        flag = true;
                        if (new_partabe.y == 0) {
                            partabe_jadid_sakhtan(partabe, 0);
                            partabe_jadid_sakhtan(new_partabe, 1);
                        }
                        else{
                            //halati ke 0 beshan baraye new_partabe

                            if (tt[andis(new_partabe.colorr, new_partabe.colorg, new_partabe.colorb)] == 0){
                                partabe_jadid_sakhtan(new_partabe, 1);
                            }
                            partabe = new_partabe;
                            partabe.x = 240;
                            partabe.y = 750;
                            partabe_jadid_sakhtan(new_partabe, 1);

                        }
                    }
                    else {
                        tabeback(back_ground);
                        if (partabe.type == "bomb") {
                            texture(m_renderer, partabe.x - 50, partabe.y - 50,
                                    bomb, 100, 100,bomb_rect);
                        }
                        else if (partabe.type == "leyzer") {

                        }
                        else if(partabe.type == "chandrang"){
                            texture(m_renderer, partabe.x - 25, partabe.y - 35,
                                    multicolor_ball, 60, 60,multicolor_ball_rect);
                        }
                        else {
                            filledEllipseRGBA(m_renderer, partabe.x, partabe.y, 25, 25, partabe.colorr, partabe.colorg,
                                              partabe.colorb, 255);
                            filledEllipseRGBA(m_renderer, new_partabe.x, new_partabe.y, 25, 25, new_partabe.colorr, new_partabe.colorg,new_partabe.colorb, 255);
                        }

                        //rect(m_renderer, 90, 700, 40, 35, , 255, 255, 1);
                        for (int i = 0; i < 400; i++) {
                            for (auto &one_ball: ball_component[i]) {

                                filledEllipseRGBA(m_renderer, one_ball.x, one_ball.y, 25, 25, one_ball.colorr,
                                                  one_ball.colorg, one_ball.colorb, 255);
                                if (one_ball.type == "pause_effect"){

                                    //cout << one_ball.i << " " << one_ball.j << endl;
                                    texture(m_renderer, one_ball.x - 15, one_ball.y - 14,
                                            pause_effect, 30, 30,pause_effect_rect);
                                }
                                if (one_ball.type == "slow_effect"){
                                    texture(m_renderer, one_ball.x - 15, one_ball.y - 14,
                                            slow_effect, 30, 30,slow_effect_rect);
                                }
                            }
                        }

                        rect(m_renderer, 460, 20, 60, 28, 255, 255, 255, 1);
                        draw_text(m_renderer, to_string(timer), font2, 460, 5, 0, 0, 0);
                        texture(m_renderer, pause_icon_x, pause_icon_y, _puase_icon, icon2_w,
                                icon2_l,_puase_icon_rect);
                        rect(m_renderer, pb_x, pb_y, iconpb_w, iconpb_l, 255, 255, 255, 1);
                        texture(m_renderer, b_x, blm_y, bomb, iconblm_w,
                                iconblm_l,bomb_rect);
                        texture(m_renderer, l_x, blm_y, laser, iconblm_w,
                                iconblm_l,laser_rect);
                        texture(m_renderer, m_x, blm_y, b, iconblm_w,
                                iconblm_l,b_rect);

                        aadad(bn_x, blmn_y, bnn, iconn_w, iconn_l);
                        aadad(mn_x, blmn_y, mnn, iconn_w, iconn_l);
                        aadad(ln_x, blmn_y, lnn, iconn_w, iconn_l);
                        bnn= to_string(b_l_m[0][this_user]);
                        mnn= to_string(b_l_m[1][this_user]);
                        lnn= to_string(b_l_m[2][this_user]);


                        for (auto one_ball: payini) {
                            if (one_ball.type == "chandrang"){
                                texture(m_renderer, one_ball.x - 25, one_ball.y - 35,
                                        multicolor_ball, 60, 60,multicolor_ball_rect);
                            }
                            else
                                filledEllipseRGBA(m_renderer, one_ball.x, one_ball.y, 25, 25, one_ball.colorr,
                                                  one_ball.colorg, one_ball.colorb, 255);
                        }
                        thickLineRGBA(m_renderer, 0, 675, 600, 675, 5, 255, 0, 0, 255);
                        if (dar_hal_partab) {
                            if (partabe.y < - 25){
                                dar_hal_partab = 0;
                                partabe_jadid = 1;
                            }
                            if (pause_yakhi){
                                pause_yakhi = 0;
                                payin = 2;
                            }
                            if (slow_yakhi){
                                slow_yakhi = 0;
                                payin = 2;
                            }
                            if (partabe.type == "leyzer") {
                                double yy = y, xx = x, shibb = shib;
                                if (shibb > 0) {
                                    thickLineRGBA(m_renderer, xx, yy, 0, -1 * xx * shibb + yy, 10, 255, 0, 0, 255);


                                    yy = -1 * xx * shibb + yy;
                                    xx = 0;
                                    shibb *= -1;
                                } else {
                                    thickLineRGBA(m_renderer, xx, yy, W, (W - xx) * shibb + yy, 10, 255, 0, 0, 255);

                                    yy = (W - xx) * shibb + yy;
                                    xx = W;
                                    shibb *= -1;

                                }
                                dar_hal_partab = false;
                                partabe_jadid = true;
                                leyzer();

                                continue;
                            }
                            if (shib < 0) {
                                if (shib < -10000){
                                    partabe.y -= 20;
                                }
                                else {
                                    double xxx = sqrt(500 / (1 + shib * shib));
                                    partabe.x += xxx;
                                    partabe.y += xxx * shib;
                                }
                            } else {
                                if (shib > 10000){
                                    partabe.y -= 20;
                                }
                                else {
                                    double xxx = sqrt(500 / (1 + shib * shib));
                                    partabe.x += -1 * xxx;
                                    partabe.y += -1 * xxx * shib;
                                }
                            }
                            if (partabe.x + 25 >= W) {
                                shib *= -1;
                                partabe.x = W - 25;
                            }
                            if (partabe.x - 25 <= 0) {
                                shib *= -1;
                                partabe.x = 25;
                            }
                            int komak = 0;
                            komak = barkhord_kardan(komak);
                            komak = barkhord_kardan(komak);


                        }
                        else {
                            double yy = y, xx = x, shibb = shib;
                            if (partabe.type == "leyzer") {
                                if (shib > 100 or shib < -100){
                                    thickLineRGBA(m_renderer, xx, yy, xx, yy - 800, 10, 255, 0, 0, 255);
                                }
                                else {
                                    if (shibb > 0) {
                                        thickLineRGBA(m_renderer, xx, yy, 0, -1 * xx * shibb + yy, 10, 255, 0, 0, 255);
                                        yy = -1 * xx * shibb + yy;
                                        xx = 0;
                                        shibb *= -1;
                                    } else {
                                        thickLineRGBA(m_renderer, xx, yy, W, (W - xx) * shibb + yy, 10, 255, 0, 0, 255);

                                        yy = (W - xx) * shibb + yy;
                                        xx = W;
                                        shibb *= -1;

                                    }
                                }
                            }
                            else {
                                yy = y, xx = x, shibb = shib;
                                if (shib > 100 or shib < -100){
                                    thickLineRGBA(m_renderer, xx, yy, xx, yy - 800, 2, 255, 255, 255,255);
                                }
                                else {
                                    while (yy > 0) {
                                        if (shibb > 0) {
                                            thickLineRGBA(m_renderer, xx, yy, 0, -1 * xx * shibb + yy, 2, 255, 255, 255,
                                                          255);
                                            yy = -1 * xx * shibb + yy;
                                            xx = 0;
                                            shibb *= -1;
                                        } else {
                                            thickLineRGBA(m_renderer, xx, yy, W, (W - xx) * shibb + yy, 2, 255, 255,
                                                          255,
                                                          255);
                                            yy = (W - xx) * shibb + yy;
                                            xx = W;
                                            shibb *= -1;

                                        }
                                    }
                                }
                            }
                        }
                        yec = emtiaz % 10;
                        dah = (emtiaz / 10) % 10;
                        sad = (emtiaz / 100) % 10;
                        yec1 = to_string(yec);
                        dah1 = to_string(dah);
                        sad1 = to_string(sad);
                        aadad( yec_score_x, yec_score_y, yec1, score_w, scor_l);
                        aadad(dah_score_x, dah_score_y,dah1, score_w, scor_l);
                        aadad(sad_score_x, sad_score_y,sad1, score_w, scor_l);
                    }


                }
            }
            else if (timer_mode or normal_mode){
                if(pause) {
                    tabeback(back_ground);
                    texture(m_renderer, pause_icon_x, pause_icon_y,
                            _play_icon, icon2_w,
                            icon2_l,_play_icon_rect);
                    if (sound)
                        texture(m_renderer, soundon_icon_x, soundon_icon_y,
                                _soundon_icon, icon2_w, icon2_l,soundon_icon_rect);
                    else
                        texture(m_renderer, soundon_icon_x, soundon_icon_y,
                                _silence_icon, icon2_w, icon2_l,silence_icon_rect);
                    texture(m_renderer, music_icon_x, music_icon_y,
                            _music_icon, icon2_w, icon2_l,_music_icon_rect);
                    texture(m_renderer, left_icon_x + 50, music_icon_y,
                            _right_icon, icon2_w, icon2_l,_right_icon_rect);
                    texture(m_renderer, right_icon_x - 50, music_icon_y,
                            _left_icon, icon2_w, icon2_l,_left_icon_rect);
                    texture(m_renderer, choose_background_x, choose_background_y,
                            _background_icon, icon_w, icon_l,_background_icon_rect);
                    texture(m_renderer, left_icon_x + 25, choose_background_y,
                            _leftflash_icon, icon2_w, icon2_l,_leftflash_icon_rect);
                    texture(m_renderer, right_icon_x - 15, choose_background_y + 3,
                            _rightflash_icon, icon2_w, icon2_l,_rightflash_icon_rect);
                    texture(m_renderer, down_icon_x, music_icon_y,
                            _down_icon, icon2_w, icon2_l,_down_icon_rect);
                    texture(m_renderer, up_icon_x, music_icon_y,
                            _up_icon, icon2_w, icon2_l,_up_icon_rect);
                    texture(m_renderer, choose_background_x, scoreboard_y,
                            _exit_icon, icon_w, icon_l,_exit_icon_rect);
                    texture(m_renderer, left_icon_x + 50, soundon_icon_y,
                            _down_icon, icon2_w, icon2_l,_down_icon_rect);
                    texture(m_renderer, right_icon_x - 50, soundon_icon_y,
                            _up_icon, icon2_w, icon2_l,_up_icon_rect);
                }
            }
            if(timer_mode == true){
                if (timer == 60){
                    Mix_PlayMusic( Mix_LoadMUS("C:/Users/USER/Desktop/project/sedabord.mp3"),1);

                    texture(m_renderer, 0, 0, bord, W, L,bomb_rect);

                    aadad( 280, 375,yec1, score_w, scor_l);
                    aadad( 230, 375,dah1, score_w, scor_l);
                    aadad( 180, 375,sad1, score_w, scor_l);
                    SDL_RenderPresent(m_renderer);
                    SDL_Delay(4000);
                    eemtiaz[this_user] = max(eemtiaz[this_user], emtiaz);
                    ofstream fout2("C:\\Users\\USER\\Desktop\\project\\esami.txt", ios::out);
                    ofstream fout("C:\\Users\\USER\\Desktop\\project\\emtiaz.txt", ios::out);
                    ofstream fout3("C:\\Users\\USER\\Desktop\\project\\b_l_m.txt", ios::out);
                    for (auto esm: asami) fout2 << esm << " ";
                    for (auto score: eemtiaz) fout << score << " ";
                    for (int i = 0; i < b_l_m[0].size(); i++){
                        fout3 << b_l_m[0][i] << " " << b_l_m[1][i] << " " <<  b_l_m[2][i] <<"\n";
                    }
                    return 0;
                }
            }



        }
        while (SDL_PollEvent(event) != 0) {
            if (event->type == SDL_QUIT) {
                quit = true;
            }
            if (dar_hal_partab == false and event -> type == SDL_MOUSEMOTION){
                x = partabe.x, y = partabe.y;
                mousex = event->motion.x;
                mousey = event->motion.y;
                shib = (mousey - y) / (mousex - x);
            }
            if (pause == 0 and event -> type == SDL_MOUSEBUTTONDOWN){
                int mouseX = event->button.x;
                int mouseY = event->button.y;
                if (mouseX > pause_icon_x and mouseX < pause_icon_x + icon2_w and
                    mouseY > pause_icon_y and
                    mouseY < pause_icon_y + icon2_l) {

                }  else if (mouseX > b_x and mouseX < b_x + iconblm_w and mouseY > blm_y and
                            mouseY < blm_y + iconblm_l){
                }
                else if (mouseX > l_x and mouseX < l_x + iconblm_w and mouseY > blm_y and
                         mouseY < blm_y + iconblm_l){
                }
                else if (mouseX > m_x and mouseX < m_x + iconblm_w and mouseY > blm_y and
                         mouseY < blm_y + iconblm_l){
                }
                else
                    dar_hal_partab = true;
            }
            if(event -> type == SDL_KEYDOWN and logged and event->key.keysym.sym == SDLK_TAB)
            {
                logged = 0;
                input_keyboard.curruntK = '!';
            }
            if (logged and event -> type == SDL_KEYDOWN){
                input_keyboard.keydown(event);
            }
            if ((timer_mode or normal_mode) and event->type == SDL_MOUSEBUTTONDOWN) {
                int mouseX = event->button.x;
                int mouseY = event->button.y;
                if (mouseX > pause_icon_x and mouseX < pause_icon_x + icon2_w and
                    mouseY > pause_icon_y and
                    mouseY < pause_icon_y + icon2_l) {

                    if (!pause) {
                        pause = true;
                    }
                    else  pause = false;
                }
            }
            if ((timer_mode or normal_mode) and pause == 1){
                if (event->type == SDL_MOUSEBUTTONDOWN) {
                    int mouseX = event->button.x;
                    int mouseY = event->button.y;
                    if (in_scoreboard == 0 and mouseX > start_icon_x and mouseX < start_icon_x + icon_w and
                        mouseY > start_icon_y and
                        mouseY < start_icon_y + icon_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        start_play = true;
                    }
                    if (in_scoreboard == 0 and mouseX > setting_icon_x and mouseX < setting_icon_x + icon_w and
                        mouseY > setting_icon_y and
                        mouseY < setting_icon_y + icon_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        if (!setting_state) {
                            setting_state = true;
                        } else {
                            setting_state = false;
                        }
                    }
                    if (in_scoreboard) {
                        if (mouseX > 420 and mouseX < 420 + icon_w and mouseY > 700 and mouseY < 700 + icon_l) {
                            in_scoreboard = 0;

                        }
                    }

                    if (mouseX > soundon_icon_x and mouseX < soundon_icon_x + icon2_w and mouseY > soundon_icon_y and
                        mouseY < soundon_icon_y + icon2_l) {
                        if (sound) {
                            sound = false;
                            pakhsh = false;
                        } else {
                            sound = true;
                            pakhsh = true;
                        }

                    }
                    if (mouseX > music_icon_x and mouseX < music_icon_x + icon2_w and mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        music_play++;
                        if (music_play % 2 == 0) {
                            if (which_music % 3 == 0) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                            }
                            if (which_music % 3 == 1 || which_music % 3 == -2) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                            }
                            if (which_music % 3 == 2 || which_music % 3 == -1) {
                                Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                                Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                            }

                        } else {
                            Mix_HaltMusic();
                        }
                    }
                    if (mouseX > right_icon_x - 50 and mouseX < right_icon_x + icon2_w - 50 and
                        mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {

                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        which_music++;
                        if (which_music % 3 == 0) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                        }
                        if (which_music % 3 == 1 || which_music % 3 == -2) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                        }
                        if (which_music % 3 == 2 || which_music % 3 == -1) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                        }

                    }
                    if (mouseX > left_icon_x + 50 and mouseX < left_icon_x + icon2_w + 50 and
                        mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        which_music--;
                        which_music += 3;
                        if (which_music % 3 == 0) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                        }
                        if (which_music % 3 == 1 || which_music % 3 == -2) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                        }
                        if (which_music % 3 == 2 || which_music % 3 == -1) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                        }

                    }
                    if (mouseX > left_icon_x + 25 and mouseX < left_icon_x + icon2_w + 25 and
                        mouseY > choose_background_y and mouseY < choose_background_y + icon2_l) {
                        which_background++;
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                    }
                    if (mouseX > right_icon_x and mouseX < right_icon_x + icon2_w and
                        mouseY > choose_background_y + 3 and mouseY < choose_background_y + icon2_l + 3) {
                        which_background--;
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                    }

                    if (which_background % 3 == 0) {
                        back_ground = "3";
                        //texture(m_renderer, 0, 0, "C:/Users/USER/Desktop/project/background/3.jpg", W, L);
                    }
                    if (which_background % 3 == 1 || which_background % 3 == -2) {
                        back_ground = "1";
                        //texture(m_renderer, 0, 0, "C:/Users/USER/Desktop/project/background/1.jpg", W, L);
                    }
                    if (which_background % 3 == 2 || which_background % 3 == -1) {
                        back_ground = "5";
                        //texture(m_renderer, 0, 0, "C:/Users/USER/Desktop/project/background/5.jpg", W, L);
                    }


                    if (mouseX > up_icon_x and mouseX < up_icon_x + icon2_w and mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {
                        volume_avalie += change_volume;
                        Mix_VolumeMusic(volume_avalie);
                        if (which_music % 3 == 0) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);

                        }
                        if (which_music % 3 == 1 || which_music % 3 == -2) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                        }
                        if (which_music % 3 == 2 || which_music % 3 == -1) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                        }
                    }
                    if (mouseX > down_icon_x and mouseX < down_icon_x + icon2_w and mouseY > music_icon_y and
                        mouseY < music_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        volume_avalie -= change_volume;
                        Mix_VolumeMusic(volume_avalie);
                        if (which_music % 3 == 0) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"), -1);
                        }
                        if (which_music % 3 == 1 || which_music % 3 == -2) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_1.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"), -1);
                        }
                        if (which_music % 3 == 2 || which_music % 3 == -1) {
                            Mix_FreeMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_2.mp3"));
                            Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/music_3.mp3"), -1);
                        }
                    }
                    if (mouseX > right_icon_x-50 and mouseX < right_icon_x + icon2_w -50 and mouseY > soundon_icon_y and
                        mouseY < soundon_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        volume_avalie += change_volume;
                        Mix_VolumeMusic(volume_avalie);

                    }
                    if (mouseX > left_icon_x+50 and mouseX < left_icon_x + icon2_w+50 and mouseY > soundon_icon_y and
                        mouseY < soundon_icon_y + icon2_l) {
                        if (pakhsh) {
                            Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedaclick.mp3"), 0);
                        }
                        volume_avalie -= change_volume;
                        Mix_VolumeMusic(volume_avalie);

                    }




                    if (mouseX > choose_background_x and mouseX < choose_background_x + icon_w and
                        mouseY > scoreboard_y and mouseY < scoreboard_y + icon_l)
                        return 0;

                }
            }
            if (event->type == SDL_KEYDOWN and event -> key.keysym.sym == SDLK_SPACE){
                struct ball x_partabe = partabe;
                partabe = new_partabe;

                partabe.x = 240;
                partabe.y = 750;



                new_partabe = x_partabe;
                new_partabe.x = 240;
                new_partabe.y = 775;
            }
            if (event->type == SDL_MOUSEBUTTONDOWN and (normal_mode==1 or timer_mode==1)) {
                int mouseX = event->button.x;
                int mouseY = event->button.y;
                if (mouseX > b_x and mouseX < b_x + iconblm_w and mouseY > blm_y and
                    mouseY < blm_y + iconblm_l){
                    if(b_l_m[0][this_user]>0){
                        partabe.type = "bomb";
                        b_l_m[0][this_user]--;
                    }

                }
                if (mouseX > l_x and mouseX < l_x + iconblm_w and mouseY > blm_y and
                    mouseY < blm_y + iconblm_l){
                    if(b_l_m[2][this_user]>0){
                        partabe.type = "leyzer";
                        b_l_m[2][this_user]--;
                    }
                }
                if (mouseX > m_x and mouseX < m_x + iconblm_w and mouseY > blm_y and
                    mouseY < blm_y + iconblm_l){
                    if(b_l_m[1][this_user]>0){
                        partabe.type = "chandrang";
                        b_l_m[1][this_user]--;
                    }
                }
            }



        }
        SDL_RenderPresent(m_renderer);
        SDL_Delay(70);

    }


}

void texture(SDL_Renderer *Renderer,int xp,int yp,SDL_Texture* myTexture,int width,int height, SDL_Rect texr1)
{
    texr1.x = xp;
    texr1.y = yp;
    texr1.w = width;
    texr1.h = height;
    SDL_RenderCopy( Renderer, myTexture, NULL, &texr1);
    /*
    void draw(SDL_Renderer* m_renderer, SDL_Texture* m_img, SDL_Rect img_rect, int x, int y, int w, int h)
    {
        //Get the width and height of the texture
        //SDL_QueryTexture(m_img, NULL, NULL, &img_w, &img_h);
        img_rect.x = x;
        img_rect.y = y;
        img_rect.w = w;
        img_rect.h = h;
        // copy the texture to the rendering context
        SDL_RenderCopy(m_renderer, m_img, NULL, &img_rect);
    }
    */
}

int find_pointy(int x){
    int l = 0, r = vecy[initi].size() - 1;
    while (l <= r) {
        /// havaset bashe inja bugi nazane
        int m = l + (r - l) / 2;
        if (vecy[initi][m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    if (r != -1) {
        if (abs(vecy[initi][l] - x) > abs(vecy[initi][r] - x))
            return r;
        else {
            return l;
        }
    }
    else{
        return l;
    }
}

int find_pointx(int y, int x){
    int l = 0, r = vec[y].size() - 1;
    while (l <= r) {
        //havaset bashe inja bugi nazane
        int m = l + (r - l) / 2;

        if (vec[y][m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    if (r != -1) {
        if (abs(vec[y][l] - x) > abs(vec[y][r] - x)) {
            return r;
        } else {
            return l;
        }
    }
    else{
        return l;
    }
}

void texture_avallie(){
    for (int i = 0; i < 1000; i++){
        id[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            int row = 50, shif = 0, row2 = 25;

            if (j % 2 == 1) {
                shif = row / 2;
            }
            balls[i][j].x = i * row + row2 + shif;
            balls[i][j].y = j * 43 + row2 - 258;
            balls[i][j].i = i;
            balls[i][j].j = j;
        }
    }
    for (int j = 0; j < 15; j++){
        for (int i = 0; i < 10; i++){
            int rand1 = 0, rand2 = 0, rand3 = 0, t = 6, x1 = -1, x2 = -1, x3 = -1;
            //
            if (i > 0){
                rand1 = 2;

                x1 = (balls[i - 1][j].colorr / 255) * 4 + (balls[i - 1][j].colorg / 255) * 2 + (balls[i - 1][j].colorb / 255);
                if (x1 == 0){
                    rand1 = 0;
                }
                t--;
            }
            if (j % 2 == 1){
                if (i < 9 and j > 0){
                    // i + 1 , j - 1
                    rand2 = 2;

                    x2 = (balls[i + 1][j - 1].colorr / 255) * 4 + (balls[i + 1][j - 1].colorg / 255) * 2 + (balls[i + 1][j - 1].colorb / 255);
                    t--;
                    if (x2 == 0){
                        rand2 = 0;
                    }
                }
            }
            else{
                if (i > 0 and j > 0){
                    rand2 = 2;
                    x2 = (balls[i - 1][j - 1].colorr / 255) * 4 + (balls[i - 1][j - 1].colorg / 255) * 2 + (balls[i -1][j  -1].colorb / 255);
                    t--;
                    if (x2 == 0){
                        rand2 = 0;
                    }
                }
            }
            if (j > 0){
                rand3 = 2;
                x3 = (balls[i][j - 1].colorr / 255) * 4 + (balls[i][j - 1].colorg / 255) * 2 + (balls[i][j - 1].colorb / 255);
                t--;
                if (x3 == 0){
                    rand3 = 0;
                }
            }
            int rangasli = rand() % (rand1 + rand2 + rand3 + t);
            if (rangasli < rand1){

                balls[i][j].colorr = balls[i - 1][j].colorr;
                balls[i][j].colorg = balls[i - 1][j].colorg;
                balls[i][j].colorb = balls[i - 1][j].colorb;

                ball_component[j * 10 + i].push_back(balls[i][j]);
            }
            else if (rangasli < rand1 + rand2){

                if (j % 2 == 1){

                    balls[i][j].colorr = balls[i + 1][j - 1].colorr;
                    balls[i][j].colorg = balls[i + 1][j - 1].colorg;
                    balls[i][j].colorb = balls[i + 1][j - 1].colorb;
                    ball_component[j * 10 + i].push_back(balls[i][j]);
                }
                else{

                    balls[i][j].colorr = balls[i - 1][j - 1].colorr;
                    balls[i][j].colorg = balls[i - 1][j - 1].colorg;
                    balls[i][j].colorb = balls[i - 1][j - 1].colorb;
                    ball_component[j * 10 + i].push_back(balls[i][j]);
                }
            }
            else if (rangasli < rand1 + rand2 + rand3){

                balls[i][j].colorr = balls[i][j - 1].colorr;
                balls[i][j].colorg = balls[i][j - 1].colorg;
                balls[i][j].colorb = balls[i][j - 1].colorb;
                ball_component[j * 10 + i].push_back(balls[i][j]);

            }
            else{
                int p = 0;
                rangasli -= rand1 + rand2 + rand3;
                for (int k = 0; k < 6; k++){
                    if (a[k] != x1 and a[k] != x2 and a[k] != x3){

                        if (rangasli == p) {
                            balls[i][j].colorr = (a[k] / 4) * 255;
                            balls[i][j].colorg = (a[k] / 2) % 2 * 255;
                            balls[i][j].colorb = a[k] % 2 * 255;
                        }
                        p++;
                    }
                }
                ball_component[j * 10 + i].push_back(balls[i][j]);

            }
            int pp = (balls[i][j].colorr / 255) * 4 + (balls[i][j].colorg / 255) * 2 + (balls[i][j].colorb / 255);

            if (i > 0){
                x1 = (balls[i - 1][j].colorr / 255) * 4 + (balls[i - 1][j].colorg / 255) * 2 + (balls[i - 1][j].colorb / 255);
                if (pp == x1){
                    Union(j * 10 + i, j * 10 + i - 1);
                }
            }
            if (j % 2 == 1){
                if (i < 9 and j > 0){
                    x2 = (balls[i + 1][j - 1].colorr / 255) * 4 + (balls[i + 1][j - 1].colorg / 255) * 2 + (balls[i + 1][j - 1].colorb / 255);
                    if (pp == x2){
                        Union(j * 10 + i, (j - 1)* 10 + i + 1);
                    }
                }
            }
            else{
                if (i > 0 and j > 0){
                    x2 = (balls[i - 1][j - 1].colorr / 255) * 4 + (balls[i - 1][j - 1].colorg / 255) * 2 + (balls[i -1][j  -1].colorb / 255);
                    if (pp == x2){
                        Union(j * 10 + i, (j - 1) * 10 + i - 1);
                    }
                }
            }
            if (j > 0){
                x3 = (balls[i][j - 1].colorr / 255) * 4 + (balls[i][j - 1].colorg / 255) * 2 + (balls[i][j - 1].colorb / 255);
                if (pp == x3){
                    Union(j * 10 + i, (j - 1) * 10 + i);
                }
            }
            tt[andis(balls[i][j].colorr, balls[i][j].colorg, balls[i][j].colorb)]++;
            boodan_dayere[balls[i][j].i][balls[i][j].j] = true;
            boodan_dar_satr[balls[i][j].j]++;
        }


    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 15; j++){
            //cout << Root((j - rafte) * 10 + i) << endl;
            oftadan(i, j);
        }
    }
    for (int i = 0; i < 10; i++){
        edg[978].push_back(Root( i));
        yal[978][Root(i)] = 1;
        yal[Root(i)][978] = 1;
        //cout << Root(i) << " ";
        edg[Root(i)].push_back(500);
    }
}
void barkhord_partabe_be_toop(int komak){

    int y_block = find_pointy(partabe.y);
    int x_block = find_pointx(y_block, partabe.x);
    if(pakhsh) Mix_PlayChannel(1, Mix_LoadWAV("C:/Users/USER/Desktop/project/sedatoop.mp3"),0);


    partabe.i = x_block;
    partabe.j = y_block - rafte;
    partabe.y = vecy[initi][find_pointy(partabe.y)];
    partabe.x = vec[y_block][find_pointx(y_block, partabe.x)];
    if (komak){
        return;
    }
    dar_hal_partab = false;
    partabe_jadid = true;
    if (partabe.type == "chandrang"){
        return;
    }
    ball_component[(y_block - rafte) * 10 + x_block].push_back(partabe);
    id[(y_block - rafte) * 10 + x_block] = (y_block - rafte) * 10 + x_block;
    balls[x_block][y_block - rafte]  = partabe;
    tt[andis(partabe.colorr, partabe.colorg, partabe.colorb)]++;
    boodan_dayere[partabe.i][partabe.j] = true;
    boodan_dar_satr[partabe.j]++;
    oftadan(partabe.i, partabe.j);


    //cout << boodan_dayere[partabe.i][partabe.j] << endl;
}

int Root(int idx){
    int i = idx;
    while(i != id[i]) {
        id[i] = id[id[i]], i = id[i];
    }

    return i;
}

void Union(int a, int b){
    int i = Root(a), j = Root(b);
    if (i != j){
        if(ball_component[i].size() >= ball_component[j].size()){
            for (int k = 0; k < ball_component[j].size(); k++){
                ball_component[i].push_back(ball_component[j][k]);
            }ball_component[j].clear();
            for (int k = 0; k < edg[j].size(); k++){
                edg[i].push_back(edg[j][k]);
                yal[j][edg[j][k]] = 0;
                yal[edg[j][k]][j] = 0;
                yal[i][edg[j][k]] = 1;
                yal[edg[j][k]][i] = 1;
                edg[edg[j][k]].push_back(i);hazfi[j] = 1;

            }
            edg[j].clear();

            id[j] = i;
        }
        else{
            for (int k = 0; k < ball_component[i].size(); k++){
                ball_component[j].push_back(ball_component[i][k]);
            }ball_component[i].clear();
            for (int k = 0; k < edg[i].size(); k++){
                yal[j][edg[i][k]] = 1;
                yal[edg[i][k]][j] = 1;
                yal[i][edg[i][k]] = 0;
                yal[edg[i][k]][i] = 0;
                edg[j].push_back(edg[i][k]);
                edg[edg[i][k]].push_back(j);hazfi[i] = 1;

            }
            edg[i].clear();

            id[i] = j;
        }
    }
}

void hazf(int y_block, int x_block, int y_block2, int x_block2){
    int rr = 0;
    int x = Root(y_block2 * 10 + x_block2);
    int a = (ball_component[x].size() - 1) / 3;
    int b = (ball_component[x].size()) * emtiaz_toop_khali + a * emtiaz_khoob_bazikardan;
    if (partabe.type != "chandrang") {
        Union(y_block * 10 + x_block, (y_block2) * 10 + x_block2);
    }
    else{
        rr = 1;
        if (ball_component[x].size() + rr > 2) {
            flag = false;
        }
    }
    if (ball_component[x].size() + rr > 2) {
        for (int i = 0; i < 979; i++) {
            yal[x][i] = 0;
            yal[i][x] = 0;
        }
        emtiaz += b;

        for (auto one_ball: ball_component[x]) {
            boodan_dayere[one_ball.i][one_ball.j] = false;
            boodan_dar_satr[one_ball.j]--;
            if (balls[one_ball.i][one_ball.j].type == "pause_effect"){
                pause_yakhi = true;
            }
            if (balls[one_ball.i][one_ball.j].type == "slow_effect"){
                slow_yakhi = true;
            }
            tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
            texture(m_renderer, one_ball.x - 25, one_ball.y - 25, t2, 50,
                    50,t2_rect);
        }
        for (auto one_ball: ball_component[x]) {
            boodan_dayere[one_ball.i][one_ball.j] = false;
            // tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
            hazfi[x] = 1;

            /*
            int i = help_array[one_ball.x][one_ball.y][0];
            int j = help_array[one_ball.x][one_ball.y][1];
            id[j * 10 + i] = j * 10 + i;
            struct ball a;
            balls[i][j] = a;*/
        }


        ball_component[x].clear();
    }
}

int andis(int r, int g, int b){
    return (r / 255) * 4 + (g / 255) * 2 + b /255;
}

int barkhord_kardan(int komak){
    int y_block = find_pointy(partabe.y);
    int x_block = find_pointx(y_block, partabe.x);



    int array[6][2] = {{y_block - 1, x_block + 0},
                       {y_block + 1, x_block + 0},
                       {y_block + 1, x_block + 1},
                       {y_block + 0, x_block + 1},
                       {y_block - 1, x_block + 1},
                       {y_block + 0, x_block - 1}};
    int array2[6][2] = {{y_block + 1, x_block - 1},
                        {y_block + 0, x_block - 1},
                        {y_block - 1, x_block - 1},
                        {y_block + 0, x_block + 1},
                        {y_block - 1, x_block + 0},
                        {y_block + 1, x_block + 0}};

    if (y_block % 2 == 1){
        for (int i = 0; i < 6; i++){
            if (array[i][0] >= 0 and array[i][0] - rafte <= 22 and array[i][1] >= 0 and array[i][1] <= 9){
                int xt = array[i][1], yt = array[i][0];

                double dis = (partabe.x - vec[yt][xt]) * (partabe.x - vec[yt][xt]) + (partabe.y - vecy[initi][yt]) * (partabe.y - vecy[initi][yt]);
                if (dis <= 50 * 50 and boodan_dayere[xt][yt - rafte]){
                    barkhord_partabe_be_toop(komak);
                    komak++;
                    if (partabe.type == "bomb"){
                        bombb();
                        cout << "bommmb!!!";

                    }
                    else if (partabe.type == "leyzer"){
                        leyzer();
                    }
                    else if (partabe.type == "chandrang" or(partabe.colorr == balls[xt][yt - rafte].colorr and partabe.colorg == balls[xt][yt - rafte].colorg and partabe.colorb == balls[xt][yt - rafte].colorb)){
                        hazf(y_block - rafte, x_block, yt - rafte, xt);
                        for (int i = 0; i < 10; i++){
                            dfs(Root(i));
                        }
                        for (int i = 0; i < 980; i++){
                            if (visited[i] == 0){
                                for (int j = 0; j < 980; j++){
                                    yal[i][j] = 0;
                                    yal[j][i] = 0;
                                }
                                for (auto one_ball : ball_component[i]){
                                    boodan_dayere[one_ball.i][one_ball.j] = false;hazfi[i] = 1;
                                    boodan_dar_satr[one_ball.j]--;
                                    payini.push_back(one_ball);
                                    tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
                                }
                                edg[i].clear();
                                ball_component[i].clear();
                            }
                        }
                        for (int i = 0; i < 980; i++){
                            visited[i] = 0;
                        }

                    }

                }
            }
        }
    }
    else{
        for (int i = 0; i < 6; i++) {
            if (array2[i][0] >= 0 and array2[i][0] - rafte <= 22 and array2[i][1] >= 0 and array2[i][1] <= 9) {
                int xt = array2[i][1], yt = array2[i][0];
                double dis = (partabe.x - vec[yt][xt]) * (partabe.x - vec[yt][xt]) +
                             (partabe.y - vecy[initi][yt]) * (partabe.y - vecy[initi][yt]);
                if (dis <= 50 * 50 and boodan_dayere[xt][yt - rafte]) {
                    barkhord_partabe_be_toop(komak);
                    komak++;
                    if (partabe.type == "bomb"){
                        cout << "bommmb!!!";
                        bombb();
                    }
                    else if (partabe.type == "leyzer"){
                        leyzer();
                    }
                    else if (partabe.type == "chandrang" or(partabe.colorr == balls[xt][yt - rafte].colorr and partabe.colorg == balls[xt][yt - rafte].colorg and partabe.colorb == balls[xt][yt - rafte].colorb)) {
                        hazf(y_block - rafte, x_block, yt - rafte, xt);
                        for (int i = 0; i < 10; i++){
                            dfs(Root(i));
                        }
                        for (int i = 0; i < 980; i++){
                            if (visited[i] == 0){
                                for (int j = 0; j < 980; j++){
                                    yal[i][j] = 0;
                                    yal[j][i] = 0;
                                }
                                for (auto one_ball : ball_component[i]){
                                    boodan_dayere[one_ball.i][one_ball.j] = false;hazfi[i] = 1;
                                    boodan_dar_satr[one_ball.j]--;
                                    payini.push_back(one_ball);
                                    tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
                                }
                                edg[i].clear();
                                ball_component[i].clear();
                            }
                        }
                        for (int i = 0; i < 980; i++){
                            visited[i] = 0;
                        }
                    }

                }
            }
        }
    }
    if (flag == true and partabe_jadid == true){
        if (partabe.type == "chandrang"){
            payini.push_back(partabe);
        }
    }

    return komak;
}

Uint32 timerCallback(Uint32 interval, void *param) {
    if (payin != 0){
        payin = 0;
        for (int i = 0; i < 3; i++){
            balls[vv[i]][uu[i]].type = "";
            for (auto &one_ball : ball_component[Root(uu[i] * 10 + vv[i])]){
                if (one_ball.i == vv[i] and one_ball.j == uu[i]){
                    one_ball.type = "";
                }
            }
            balls[vv2[i]][uu2[i]].type = "";
            for (auto &one_ball : ball_component[Root(uu2[i] * 10 + vv2[i])]){
                if (one_ball.i == vv2[i] and one_ball.j == uu2[i]){
                    one_ball.type = "";
                }
            }
        }

    }
    else{
        sorat++;
        sorat %= 3;
        if (sorat== 0) {
            payin = 2;
            for (int i = 0; i < 3; i++){
                vv[i] = (int)(rand() % 10), uu[i] = ((int)rand() % 15);
                balls[vv[i]][uu[i]].type = "pause_effect";

                for (auto &one_ball : ball_component[Root(uu[i] * 10 + vv[i])]){
                    if (one_ball.i == vv[i] and one_ball.j == uu[i]){
                        one_ball.type = "pause_effect";
                    }
                }
            }

            for (int i = 0; i < 3; i++){
                vv2[i] = (int)(rand() % 10), uu2[i] = ((int)rand() % 15);
                balls[vv2[i]][uu2[i]].type = "slow_effect";
                //cout  << vv[i] << " " << uu[i] << endl;
                for (auto &one_ball : ball_component[Root(uu2[i] * 10 + vv2[i])]){
                    if (one_ball.i == vv2[i] and one_ball.j == uu2[i]){
                        one_ball.type = "slow_effect";
                    }
                }
            }

        }
    }
    return interval;
}
int ti2 = 0;
Uint32 timerCallback2(Uint32 interval, void *param) {
    if (pause == 0 and pause_yakhi == false) {
        timer++;
        ti2++;
        if (ti2 == 15 and emtiaz > 0){
            emtiaz -= 1;
            ti2 = 0;
        }
    }
    //cout << t<< endl;


    return interval; // بازگشت مقدار زمانی بر حسب میلی‌ثانیه برای فعال بودن تایمر
}


void oftadan(int x_block, int y_block){
    int array[6][2] = {{y_block - 1, x_block + 0},
                       {y_block + 1, x_block + 0},
                       {y_block + 1, x_block + 1},
                       {y_block + 0, x_block + 1},
                       {y_block - 1, x_block + 1},
                       {y_block + 0, x_block - 1}};
    int array2[6][2] = {{y_block + 1, x_block - 1},
                        {y_block + 0, x_block - 1},
                        {y_block - 1, x_block - 1},
                        {y_block + 0, x_block + 1},
                        {y_block - 1, x_block + 0},
                        {y_block + 1, x_block + 0}};

    if (y_block % 2 == 1){
        for (int i = 0; i < 6; i++){
            int xt = array[i][1], yt = array[i][0];
            if (array[i][0] >= 0  and array[i][1] >= 0 and array[i][1] <= 9 and boodan_dayere[xt][yt]){

                if (Root(y_block * 10 + x_block) !=  Root(yt * 10 + xt)){



                    edg[Root(y_block * 10 + x_block)].push_back(Root(yt * 10 + xt));
                    edg[Root(yt * 10 + xt)].push_back(Root(y_block * 10 + x_block));
                    yal[Root(y_block * 10 + x_block)][Root(yt * 10 + xt)] = 1;
                    yal[Root(yt * 10 + xt)][Root(y_block * 10 + x_block)] = 1;


                }
            }
        }
    }
    else{
        for (int i = 0; i < 6; i++){
            int xt = array2[i][1], yt = array2[i][0];
            if (array2[i][0] >= 0 and array2[i][1] >= 0 and array2[i][1] <= 9 and boodan_dayere[xt][yt]){

                if ((y_block * 10 + x_block) !=  Root(yt * 10 + xt)){




                    edg[Root(y_block * 10 + x_block)].push_back(Root(yt * 10 + xt));
                    edg[Root(yt * 10 + xt)].push_back(Root(y_block * 10 + x_block));
                    yal[Root(y_block * 10 + x_block)][Root(yt * 10 + xt)] = 1;
                    yal[Root(yt * 10 + xt)][Root(y_block * 10 + x_block)] = 1;
                }
            }
        }
    }
}

void dfs(int v){

    visited[v] = 1;
    for (auto u : edg[v]){
        if (!visited[u] and yal[u][v]){
            dfs(u);
        }
    }
}

void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian )
{
    SDL_Rect rectangle ;
    rectangle.x = x;
    rectangle.y = y;
    rectangle.w = w;
    rectangle.h = h;
    SDL_SetRenderDrawColor(Renderer, R, G, B, 255);
    if (fill_boolian==1)
        SDL_RenderFillRect(Renderer, &rectangle);
    SDL_RenderDrawRect(Renderer, &rectangle);
}

void draw_text(SDL_Renderer *renderer , string text , TTF_Font *font , int x , int y , Uint8 R , Uint8 G  , Uint8 B )
{
    SDL_Surface *text_surface;
    SDL_Texture *text_texture;
    SDL_Color text_color = {R, G, B};
    SDL_Rect text_rect = {x, y, 0, 0};

    text_surface = TTF_RenderText_Solid(font, text.c_str(), text_color);
    text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);
    text_rect.w = text_surface->w * 1;
    text_rect.h = text_surface->h * 1;
    SDL_RenderCopy(renderer, text_texture, NULL, &text_rect);

    SDL_FreeSurface(text_surface);
    SDL_DestroyTexture(text_texture);
}

void sor(){
    for (int i = 0; i < asami.size(); i++){
        for (int j = i; j < asami.size(); j++){
            if (eemtiaz[i] < eemtiaz[j]){
                swap(asami[i], asami[j]);
                swap(eemtiaz[i], eemtiaz[j]);
                swap(b_l_m[0][i], b_l_m[0][j]);
                swap(b_l_m[1][i], b_l_m[1][j]);
                swap(b_l_m[2][i], b_l_m[2][j]);

            }
        }
    }
}

void bombb(){
    for (int i = 0; i < 400; i++){
        for (auto &one_ball: ball_component[i]){
            int dis = (one_ball.x - partabe.x) *  (one_ball.x - partabe.x) +
                      (one_ball.y - partabe.y) * (one_ball.y - partabe.y);
            if (dis < 100 * 100){
                boodan_dayere[one_ball.i][one_ball.j] = 0;
                boodan_dar_satr[one_ball.j]--;
                tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
                texture(m_renderer, one_ball.x-25, one_ball.y-25, t2, 50, 50,t2_rect);



            }
        }
    }

    for (int i = 0; i < 900; i++){
        for (int j = 0; j < 980; j++){
            yal[i][j] = 0;
        }
        edg[i].clear();
        ball_component[i].clear();
    }
    for (int i = 0; i < 1000; i++){
        id[i] = i;
    }
    for (int j = 0; j < 25; j++){
        for (int i = 0; i < 10; i++){
            if (boodan_dayere[i][j] == 1) {
                int x1, x2, x3;
                //cout << i << " " << j << endl;
                ball_component[j * 10 + i].push_back(balls[i][j]);
                int pp = (balls[i][j].colorr / 255) * 4 + (balls[i][j].colorg / 255) * 2 + (balls[i][j].colorb / 255);

                if (i > 0 and boodan_dayere[i - 1][j] == 1) {
                    x1 = (balls[i - 1][j].colorr / 255) * 4 + (balls[i - 1][j].colorg / 255) * 2 +
                         (balls[i - 1][j].colorb / 255);
                    if (pp == x1) {
                        Union(j * 10 + i, j * 10 + i - 1);
                    }
                }
                if (j % 2 == 1) {
                    if (i < 9 and j > 0 and boodan_dayere[i + 1][j- 1] == 1) {
                        x2 = (balls[i + 1][j - 1].colorr / 255) * 4 + (balls[i + 1][j - 1].colorg / 255) * 2 +
                             (balls[i + 1][j - 1].colorb / 255);
                        if (pp == x2) {
                            Union(j * 10 + i, (j - 1) * 10 + i + 1);
                        }
                    }
                } else {
                    if (i > 0 and j > 0 and boodan_dayere[i - 1][j - 1] == 1) {
                        x2 = (balls[i - 1][j - 1].colorr / 255) * 4 + (balls[i - 1][j - 1].colorg / 255) * 2 +
                             (balls[i - 1][j - 1].colorb / 255);
                        if (pp == x2) {
                            Union(j * 10 + i, (j - 1) * 10 + i - 1);
                        }
                    }
                }
                if (j > 0 and boodan_dayere[i][j - 1] == 1) {
                    x3 = (balls[i][j - 1].colorr / 255) * 4 + (balls[i][j - 1].colorg / 255) * 2 +
                         (balls[i][j - 1].colorb / 255);
                    if (pp == x3) {
                        Union(j * 10 + i, (j - 1) * 10 + i);
                    }
                }
            }
        }


    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 15; j++){
            if (boodan_dayere[i][j] == 1)
                oftadan(i, j);
        }
    }
    for (int i = 0; i < 10; i++){
        dfs(Root(i));
    }
    for (int i = 0; i < 980; i++){
        if (visited[i] == 0){
            for (int j = 0; j < 980; j++){
                yal[i][j] = 0;
                yal[j][i] = 0;
            }
            for (auto one_ball : ball_component[i]){
                boodan_dayere[one_ball.i][one_ball.j] = false;hazfi[i] = 1;
                boodan_dar_satr[one_ball.j]--;
                payini.push_back(one_ball);
                tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
            }
            edg[i].clear();
            ball_component[i].clear();
        }
    }
    for (int i = 0; i < 980; i++){
        visited[i] = 0;
    }
    partabe.type = "";
}

void leyzer(){

    double shibb = (mousex - x) / (mousey - y);
    double b = -1 * shibb * y;
    for (int i = 0; i < 400; i++){
        for (auto &one_ball: ball_component[i]){
            if (shib > 1000 or shib < -1000){
                double dis = abs(one_ball.x - x);
                if (dis <= 25 and one_ball.y > -25) {
                    boodan_dayere[one_ball.i][one_ball.j] = 0;
                    boodan_dar_satr[one_ball.j]--;
                    tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
                    texture(m_renderer, one_ball.x - 25, one_ball.y - 25, t2,
                            50, 50,t2_rect);
                }
            }
            else if ((shibb < 0 and one_ball.x + 28 > one_ball.y * shibb + b + x) or (shibb > 0 and one_ball.x - 28 < one_ball.y * shibb + b + x)){
                double dis = abs(one_ball.y * shibb + b+ x - one_ball.x)/ sqrt(1 + shibb * shibb);
                if (dis <= 25 and one_ball.y > -25) {


                    boodan_dayere[one_ball.i][one_ball.j] = 0;
                    boodan_dar_satr[one_ball.j]--;
                    tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
                    texture(m_renderer, one_ball.x - 25, one_ball.y - 25, t2,
                            50, 50,t2_rect);
                }



            }
        }
    }
    for (int i = 0; i < 900; i++){
        for (int j = 0; j < 980; j++){
            yal[i][j] = 0;
        }
        edg[i].clear();
        ball_component[i].clear();
    }
    for (int i = 0; i < 1000; i++){
        id[i] = i;
    }
    for (int j = 0; j < 25; j++){
        for (int i = 0; i < 10; i++){
            if (boodan_dayere[i][j] == 1) {
                int x1, x2, x3;
                //cout << i << " " << j << endl;
                ball_component[j * 10 + i].push_back(balls[i][j]);
                int pp = (balls[i][j].colorr / 255) * 4 + (balls[i][j].colorg / 255) * 2 + (balls[i][j].colorb / 255);

                if (i > 0 and boodan_dayere[i - 1][j] == 1) {
                    x1 = (balls[i - 1][j].colorr / 255) * 4 + (balls[i - 1][j].colorg / 255) * 2 +
                         (balls[i - 1][j].colorb / 255);
                    if (pp == x1) {
                        Union(j * 10 + i, j * 10 + i - 1);
                    }
                }
                if (j % 2 == 1) {
                    if (i < 9 and j > 0 and boodan_dayere[i + 1][j- 1] == 1) {
                        x2 = (balls[i + 1][j - 1].colorr / 255) * 4 + (balls[i + 1][j - 1].colorg / 255) * 2 +
                             (balls[i + 1][j - 1].colorb / 255);
                        if (pp == x2) {
                            Union(j * 10 + i, (j - 1) * 10 + i + 1);
                        }
                    }
                } else {
                    if (i > 0 and j > 0 and boodan_dayere[i - 1][j - 1] == 1) {
                        x2 = (balls[i - 1][j - 1].colorr / 255) * 4 + (balls[i - 1][j - 1].colorg / 255) * 2 +
                             (balls[i - 1][j - 1].colorb / 255);
                        if (pp == x2) {
                            Union(j * 10 + i, (j - 1) * 10 + i - 1);
                        }
                    }
                }
                if (j > 0 and boodan_dayere[i][j - 1] == 1) {
                    x3 = (balls[i][j - 1].colorr / 255) * 4 + (balls[i][j - 1].colorg / 255) * 2 +
                         (balls[i][j - 1].colorb / 255);
                    if (pp == x3) {
                        Union(j * 10 + i, (j - 1) * 10 + i);
                    }
                }
            }
        }


    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 25; j++){
            if (boodan_dayere[i][j] == 1)
                oftadan(i, j);
        }
    }
    for (int i = 0; i < 10; i++){
        dfs(Root(i));
    }
    for (int i = 0; i < 980; i++){
        if (visited[i] == 0){
            for (int j = 0; j < 980; j++){
                yal[i][j] = 0;
                yal[j][i] = 0;
            }

            for (auto one_ball : ball_component[i]){

                boodan_dayere[one_ball.i][one_ball.j] = false;hazfi[i] = 1;
                boodan_dar_satr[one_ball.j]--;
                payini.push_back(one_ball);
                tt[andis(one_ball.colorr, one_ball.colorg, one_ball.colorb)]--;
            }
            edg[i].clear();
            ball_component[i].clear();
        }
    }
    for (int i = 0; i < 980; i++){
        visited[i] = 0;
    }
    partabe.type = "";
}

void partabe_jadid_sakhtan(struct ball &partab, int indd){
    int v = 5;
    for (int i = 0; i < 5; i++) {
        if (tt[a[i]] == 0) {
            v--;
        }
    }

    if (v == 0) {
        Mix_PlayMusic(Mix_LoadMUS("C:/Users/USER/Desktop/project/sedabord.mp3"), 1);

        texture(m_renderer, 0, 0, bord, W, L,bord_rect);
        aadad( 280, 375, yec1,
               score_w, scor_l);
        aadad(230, 375, dah1,
              score_w, scor_l);
        aadad(180, 375, sad1,
              score_w, scor_l);

        eemtiaz[this_user] = max(eemtiaz[this_user], emtiaz);
        int randd = rand() % 3;
        if (randd == 0){
            //bomb
            texture(m_renderer, 190, 200, bomb,150, 150,bomb_rect);
            b_l_m[0][this_user]++;
        }
        else if (randd == 1){
            //leyzer
            texture(m_renderer, 190, 200, laser,150, 150,laser_rect);
            b_l_m[2][this_user]++;

        }
        else{
            //chandrang
            texture(m_renderer, 200, 200, multicolor_ball,100, 100,multicolor_ball_rect);
            b_l_m[1][this_user] ++;

        }
        ofstream fout2("C:\\Users\\USER\\Desktop\\project\\esami.txt", ios::out);
        ofstream fout("C:\\Users\\USER\\Desktop\\project\\emtiaz.txt", ios::out);
        ofstream fout3("C:\\Users\\USER\\Desktop\\project\\b_l_m.txt", ios::out);
        for (auto esm: asami) fout2 << esm << " ";
        for (auto score: eemtiaz) fout << score << " ";
        for (int i = 0; i < b_l_m[0].size(); i++){
            fout3 << b_l_m[0][i] << " " << b_l_m[1][i] << " " <<  b_l_m[2][i] <<"\n";
        }
        SDL_RenderPresent(m_renderer);
        SDL_Delay(4000);

        quit = 1;
        SDL_Quit();
    }
    int rangasli = 0;
    if (v != 0)
        rangasli = rand() % v;
    int p = 0;
    for (int k = 0; k < 6; k++) {
        if (tt[a[k]] != 0) {
            if (rangasli == p) {
                partab.colorr = (a[k] / 4) * 255;
                partab.colorg = (a[k] / 2) % 2 * 255;
                partab.colorb = a[k] % 2 * 255;
            }
            p++;
        }
    }
    if (indd == 0) {
        partab.x = 240;
        partab.y = 750;
    }
    else{
        partab.x = 240;
        partab.y = 775;
    }

    partabe_jadid = false;
}


void aadad(int x, int y, string ad, int ww, int ll){
    if (ad == "0"){
        texture(m_renderer, x, y,_0_, ww, ll, _0_rect);
    }
    if (ad == "1"){
        texture(m_renderer, x, y,_1_, ww, ll, _1_rect);
    }
    if (ad == "2"){
        texture(m_renderer, x, y,_2_, ww, ll, _2_rect);

    }
    if (ad == "3"){
        texture(m_renderer, x, y,_3_, ww, ll, _3_rect);

    }
    if (ad == "4"){
        texture(m_renderer, x, y,_4_, ww, ll, _4_rect);

    }
    if (ad == "5"){
        texture(m_renderer, x, y,_5_, ww, ll, _5_rect);

    }
    if (ad == "6"){
        texture(m_renderer, x, y,_6_, ww, ll, _6_rect);

    }
    if (ad == "7"){
        texture(m_renderer, x, y,_7_, ww, ll, _7_rect);

    }
    if (ad == "8"){
        texture(m_renderer, x, y,_8_, ww, ll, _8_rect);

    }
    if (ad == "9"){
        texture(m_renderer, x, y,_9_, ww, ll, _9_rect);

    }
}

void tabeback(string s){
    if(s=="1"){
        texture(m_renderer,0,0,b1,W,L,b1_rect);
    }
    if(s=="3"){
        texture(m_renderer,0,0,b3,W,L,b3_rect);
    }
    if(s=="5"){
        texture(m_renderer,0,0,b5,W,L,b5_rect);
    }
}
