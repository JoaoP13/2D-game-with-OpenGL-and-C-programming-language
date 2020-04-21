GLuint texturaBolinha;
GLuint texturaFundo;
GLuint texturaBarras;
GLuint texturaConfirmacao;
GLuint texturaMenu;
GLuint texturaInstrucoes;
GLuint texturaBotaoSair;
GLuint texturaPlayer1;
GLuint texturaPlayer2;
GLuint texturaBotaoPausar;
GLuint texturaRestart;
GLuint texturaGameOver;

float controleAumentoVelocidade = 0;

float velocidade_bolinhaX;
float velocidade_bolinhaY;

bool mostraDebug = false;
bool vaiAdois = false;
bool pausar = true;
bool keyW = false;
bool keyS = false;
bool keyO = false;
bool keyL = false;
bool aparecerESC = false;
bool colisaoBarraEsquerda = false;
bool colisaoBarraDireita = false;
bool invertePlayer = false;
bool comecar = false;
bool reinicia = false;

enum telasDeJogo {MENU, JOGO, INSTRUCOES, GAMEOVER};
enum jogadores {NINGUEM, PLAYER1, PLAYER2};

int controleTelas = MENU;

void inicializaVariaveis();