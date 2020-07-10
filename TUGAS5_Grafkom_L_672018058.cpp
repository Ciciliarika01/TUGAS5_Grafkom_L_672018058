#include <windows.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x,int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("CICILIA RIKA IRIANTO - 672018058");
    init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
	glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 1.0, 1.0, 0.1);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void tampil(void)
{
	if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

    //////////////////////////RUMAH DEPAN //////////////////////////////////////
    //halaman
    glBegin(GL_QUADS);
    glColor3ub(47, 112, 50);
    glVertex3f(-50, -15.0, 50.0);
    glVertex3f(50, -15.0, 50.0);
    glVertex3f(50, -15.0, -50.0);
    glVertex3f(-50, -15.0, -50.0);
    glEnd();
     //depan
    glBegin(GL_QUADS);
    glColor3ub(232, 232, 227);
    glVertex3f(-20.0, -15.0, 15.0);
    glVertex3f(-20.0, 15.0, 15.0);
    glVertex3f(10.0, 15.0, 15.0);
    glVertex3f(10.0, -15.0, 15.0);
    glEnd();

    //pintu atas1
    glBegin(GL_POLYGON);
    glColor3ub(176, 118, 114);
    glVertex3f(-10, -15, 15.001);
    glVertex3f(2, -15, 15.001);
    glVertex3f(2, 8, 15.001);
    glVertex3f(-2, 11, 15.001);
    glVertex3f(-7, 11, 15.001);
    glVertex3f(-10, 8, 15.001);
    glEnd();
    //pintu atas2
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(-9.5, -14, 15.002);
    glVertex3f(-5, -14, 15.002);
    glVertex3f(-5, 3, 15.002);
    glVertex3f(-9.5, 3, 15.002);
    glEnd();
    //pintu atas3
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(1.5, -14, 15.002);
    glVertex3f(-3, -14, 15.002);
    glVertex3f(-3, 3, 15.002);
    glVertex3f(1.5, 3, 15.002);
    glEnd();
    //pintu atas4
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(-9.5, 4, 15.002);
    glVertex3f(-5, 4, 15.002);
    glVertex3f(-5, 7, 15.002);
    glVertex3f(-9.5, 7, 15.002);
    glEnd();
    //pintu atas5
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(1.5, 4, 15.002);
    glVertex3f(-3, 4, 15.002);
    glVertex3f(-3, 7, 15.002);
    glVertex3f(1.5, 7, 15.002);
    glEnd();
    //pintu atas1
    glBegin(GL_POLYGON);
    glColor3ub(26, 9, 8);
    glVertex3f(-4.5, -15, 15.02);
    glVertex3f(-3.5, -15, 15.002);
    glVertex3f(-3.5, 11, 15.002);
    glVertex3f(-4.5, 11, 15.002);
    glEnd();
        //jendela
    glBegin(GL_QUADS);
    glColor3ub(250, 248, 247);
    glVertex3f(-18, -5, 15.002);
    glVertex3f(-13, -5, 15.002);
    glVertex3f(-13, 10, 15.002);
    glVertex3f(-18, 10, 15.002);
    glEnd();
     //garis jendela2
    glBegin(GL_QUADS);
    glColor3ub(250, 248, 247);
    glVertex3f(8, 10, 15.002);
    glVertex3f(3, 10, 15.002);
    glVertex3f(3, -5, 15.002);
    glVertex3f(8, -5, 15.002);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3ub(232, 232, 227);
    glVertex3f(-20.0, -15.0, -15.0);
    glVertex3f(-20.0, 15.0, -15.0);
    glVertex3f(10.0, 15.0, -15.0);
    glVertex3f(10.0, -15.0, -15.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 240);
    glVertex3f(10.0, 15.0, 15.0);
    glVertex3f(10.0, -15.0, 15.0);
    glVertex3f(10.0, -15.0, -15.0);
    glVertex3f(10.0, 15.0, -15.0);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 240);
    glVertex3f(-20.0, 15.0, 15.0);
    glVertex3f(-20.0, -15.0, 15.0);
    glVertex3f(-20.0, -15.0, -15.0);
    glVertex3f(-20.0, 15.0, -15.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3ub(240, 206, 245);
    glVertex3f(-20, -15.0, 15.0);
    glVertex3f(10, -15.0, 15.0);
    glVertex3f(10, -15.0, -15.0);
    glVertex3f(-20, -15.0, -15.0);
    glEnd();

    //sofa 1a
    glBegin(GL_QUADS);
    glColor3ub(166, 10, 18);
    glVertex3f(-15, -14, -13.0);
    glVertex3f(1, -14, -13.0);
    glVertex3f(1, -14, -3.0);
    glVertex3f(-15, -14, -3.0);
    glEnd();
    //sofa 1b
    glBegin(GL_QUADS);
    glColor3ub(166, 10, 18);
    glVertex3f(-15, -10, -13.0);
    glVertex3f(1, -10, -13.0);
    glVertex3f(1, -10, -3.0);
    glVertex3f(-15, -10, -3.0);
    glEnd();
    //sofa 1c
    glBegin(GL_QUADS);
    glColor3ub(135, 31, 35);
    glVertex3f(-15, -10, -13.0);
    glVertex3f(1, -10, -13.0);
    glVertex3f(1, -14, -13.0);
    glVertex3f(-15, -14, -13.0);
    glEnd();
    //sofa 1d
    glBegin(GL_QUADS);
    glColor3ub(135, 31, 35);
    glVertex3f(-15, -10, -3.0);
    glVertex3f(1, -10, -3.0);
    glVertex3f(1, -14, -3.0);
    glVertex3f(-15, -14, -3.0);
    glEnd();
     //sofa 1e
    glBegin(GL_QUADS);
    glColor3ub(107, 12, 16);
    glVertex3f(-15, -10, -3.0);
    glVertex3f(-15, -10, -13.0);
    glVertex3f(-15, -14, -13.0);
    glVertex3f(-15, -14, -3.0);
    glEnd();
    //sofa 1f
    glBegin(GL_QUADS);
    glColor3ub(107, 12, 16);
    glVertex3f(1, -10, -3.0);
    glVertex3f(1, -10, -13.0);
    glVertex3f(1, -14, -13.0);
    glVertex3f(1, -14, -3.0);
    glEnd();
    //sofa 1a
     glBegin(GL_QUADS);
    glColor3ub(212, 55, 63);
    glVertex3f(-14, -10, -12.0);
    glVertex3f(0, -10, -12.0);
    glVertex3f(0, -4, -12.0);
    glVertex3f(-14, -4, -12.0);
    glEnd();

    //meja 1a
    glBegin(GL_QUADS);
    glColor3ub(201, 132, 46);
    glVertex3f(-12, -7, 8.0);
    glVertex3f(-2, -7, 8.0);
    glVertex3f(-2, -7, 2.0);
    glVertex3f(-12, -7, 2.0);
    glEnd();
    //meja 1b
    glBegin(GL_QUADS);
    glColor3ub(201, 132, 46);
    glVertex3f(-12, -9, 8.0);
    glVertex3f(-2, -9, 8.0);
    glVertex3f(-2, -9, 2.0);
    glVertex3f(-12, -9, 2.0);
    glEnd();
    //meja 1c
    glBegin(GL_QUADS);
    glColor3ub(240, 190, 127);
    glVertex3f(-2, -9, 8.0);
    glVertex3f(-2, -7, 8.0);
    glVertex3f(-2, -7, 2.0);
    glVertex3f(-2, -9, 2.0);
    glEnd();
    //meja 1d
    glBegin(GL_QUADS);
    glColor3ub(240, 190, 127);
    glVertex3f(-12, -9, 8.0);
    glVertex3f(-12, -7, 8.0);
    glVertex3f(-12, -7, 2.0);
    glVertex3f(-12, -9, 2.0);
    glEnd();
    //meja 1e
    glBegin(GL_QUADS);
    glColor3ub(240, 190, 127);
    glVertex3f(-12, -9, 8.0);
    glVertex3f(-12, -7, 8.0);
    glVertex3f(-2, -7, 8.0);
    glVertex3f(-2, -9, 8.0);
    glEnd();
    //meja 1f
    glBegin(GL_QUADS);
    glColor3ub(240, 190, 127);
    glVertex3f(-12, -9, 2.0);
    glVertex3f(-12, -7, 2.0);
    glVertex3f(-2, -7, 2.0);
    glVertex3f(-2, -9, 2.0);
    glEnd();
    //kaki meja1a
    glBegin(GL_QUADS);
    glColor3ub(250, 87, 5);
    glVertex3f(-6, -15, 6.0);
    glVertex3f(-6, -7, 6.0);
    glVertex3f(-6, -7, 4.0);
    glVertex3f(-6, -15, 4.0);
    glEnd();
    //kaki meja1b
    glBegin(GL_QUADS);
    glColor3ub(250, 87, 5);
    glVertex3f(-8, -15, 6.0);
    glVertex3f(-8, -7, 6.0);
    glVertex3f(-8, -7, 4.0);
    glVertex3f(-8, -15, 4.0);
    glEnd();
    //kaki meja1c
    glBegin(GL_QUADS);
    glColor3ub(166, 58, 3);
    glVertex3f(-6, -15, 4.0);
    glVertex3f(-6, -7, 4.0);
    glVertex3f(-8, -7, 4.0);
    glVertex3f(-8, -15, 4.0);
    glEnd();
    //kaki meja1d
    glBegin(GL_QUADS);
    glColor3ub(166, 58, 3);
    glVertex3f(-6, -15, 6.0);
    glVertex3f(-6, -7, 6.0);
    glVertex3f(-8, -7, 6.0);
    glVertex3f(-8, -15, 6.0);
    glEnd();

//////////////////////////////////RUMAH SAMPING///////////////////////////////////////

    //bawah
    glBegin(GL_QUADS);
    glColor3ub(193, 213, 247);
    glVertex3f(10, -15.0, 15.0);
    glVertex3f(40, -15.0, 15.0);
    glVertex3f(40, -15.0, -15.0);
    glVertex3f(10, -15.0, -15.0);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(247, 247, 235);
    glVertex3f(10.0, -15.0, 15.0);
    glVertex3f(10.0, 15.0, 15.0);
    glVertex3f(40.0, 15.0, 15.0);
    glVertex3f(40.0, -15.0, 15.0);
    glEnd();
        //belakang
    glBegin(GL_QUADS);
    glColor3ub(252, 252, 235);
    glVertex3f(10, -15.0, -15.0);
    glVertex3f(10, 15.0, -15.0);
    glVertex3f(40, 15.0, -15.0);
    glVertex3f(40, -15.0, -15.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3ub(232, 232, 227);
    glVertex3f(40, 15.0, 15.0);
    glVertex3f(40, -15.0, 15.0);
    glVertex3f(40, -15.0, -15.0);
    glVertex3f(40, 15.0, -15.0);
    glEnd();

     //atap depan
    glBegin(GL_QUADS);
    glColor3ub(161, 25, 166);
    glVertex3f(10.0, 13.0, 18);
    glVertex3f(10.0, 28.0, 0);
    glVertex3f(40.0, 28.0, 0);
    glVertex3f(40.0, 13.0, 18.0);
    glEnd();
    //atap belakang
    glBegin(GL_QUADS);
    glColor3ub(116, 10, 120);
    glVertex3f(10, 13.0, -18);
    glVertex3f(10, 28.0, 0);
    glVertex3f(40, 28.0, 0);
    glVertex3f(40, 13.0, -18);
    glEnd();
    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(106, 67, 107);
    glVertex3f(40, 28.0, 0);
    glVertex3f(40, 15.0, 16.0);
    glVertex3f(40, 15.0, -16.0);
    glEnd();
    //pintu depan
    glBegin(GL_QUADS);
    glColor3ub(240, 177, 77);
    glVertex3f(15.0, -15.0, 15.01);
    glVertex3f(15.0, 7.0, 15.01);
    glVertex3f(35.0, 7.0, 15.01);
    glVertex3f(35.0, -15.0, 15.01);
    glEnd();
    //Garage Door Strip
    glBegin(GL_QUADS);
	glColor3ub(30, 31, 30);
    glVertex3f(15.0, -12.0, 15.02);
    glVertex3f(15.0, -11.0, 15.02);
    glVertex3f(35.0, -11.0, 15.02);
    glVertex3f(35.0, -12.0, 15.02);
    glEnd();
    //Garage Door Strip2
    glBegin(GL_QUADS);
	glColor3ub(30, 31, 30);
    glVertex3f(15.0, -6.0, 15.02);
    glVertex3f(15.0, -5.0, 15.02);
    glVertex3f(35.0, -5.0, 15.02);
    glVertex3f(35.0, -6.0, 15.02);
    glEnd();
    //Garage Door Strip2
    glBegin(GL_QUADS);
	glColor3ub(30, 31, 30);
    glVertex3f(15.0, 0, 15.02);
    glVertex3f(15.0, 1, 15.02);
    glVertex3f(35.0, 1, 15.02);
    glVertex3f(35.0, 0, 15.02);
    glEnd();






    //////////////////////////////RUMAH ATAS ////////////////////////////////////////

    //tmpt tidur 1
    glBegin(GL_QUADS);
    glColor3ub(154, 186, 237);
    glVertex3f(29.09, -14.9, 5.0);
    glVertex3f(20, -14.9, 5.0);
    glVertex3f(20, -14.9, -14.09);
    glVertex3f(29.09, -14.9, -14.09);
    glEnd();
    //tmpt tidur 2
    glBegin(GL_QUADS);
    glColor3ub(154, 186, 237);
    glVertex3f(29.09, -10, 5.0);
    glVertex3f(20, -10, 5.0);
    glVertex3f(20, -10, -14.09);
    glVertex3f(29.09, -10, -14.09);
    glEnd();

    //tmpt tidur 3
    glBegin(GL_QUADS);
    glColor3ub(167, 178, 196);
    glVertex3f(29.09, -10, 5.0);
    glVertex3f(29.09, -14.9, 5.0);
    glVertex3f(29.09, -14.9, -14.09);
    glVertex3f(29.09, -10, -14.09);
    glEnd();
    //tmpt tidur 4
    glBegin(GL_QUADS);
    glColor3ub(167, 178, 196);
    glVertex3f(20, -10, 5.0);
    glVertex3f(20, -14.9, 5.0);
    glVertex3f(20, -14.9, -14.09);
    glVertex3f(20, -10, -14.09);
    glEnd();
    //tmpt tidur 5
    glBegin(GL_QUADS);
    glColor3ub(235, 241, 252);
    glVertex3f(29.09, -14.9, 5.0);
    glVertex3f(20, -14.9, 5.0);
    glVertex3f(20, -10, 5.0);
    glVertex3f(29.09, -10, 5.0);
    glEnd();
    //tmpt tidur 6
    glBegin(GL_QUADS);
    glColor3ub(235, 241, 252);
    glVertex3f(29.09, -14.9, -14.09);
    glVertex3f(20, -14.9, -14.09);
    glVertex3f(20, -10, -14.09);
    glVertex3f(29.09, -10, -14.09);
    glEnd();
    //bantal
    glBegin(GL_QUADS);
    glColor3ub(52, 108, 209);
    glVertex3f(27, -10.01, -10.0);
    glVertex3f(22, -10.01, -10.0);
    glVertex3f(22, -10.01, -14);
    glVertex3f(27, -10.01, -14);
    glEnd();

    // TV
    glBegin(GL_QUADS);
    glColor3ub(0, 3, 8);
    glVertex3f(-11.0, 10.0, 13.5);
    glVertex3f(-11.0, 5.0, 13.5);
    glVertex3f(-18.0, 5.0, 13.5);
    glVertex3f(-18.0, 10.0, 13.5);
    glEnd();
    //TV1
    glBegin(GL_QUADS);
    glColor3ub(50, 50, 51);
    glVertex3f(-13.0, 7.5, 13.5);
    glVertex3f(-13.0, 7.5, 14.09);
    glVertex3f(-15.5, 7.5, 14.09);
    glVertex3f(-15.5, 7.5, 13.5);
    glEnd();
    //lemari
    glBegin(GL_QUADS);
    glColor3ub(135, 245, 171);
    glVertex3f(8.0, -14.9, 5.0);
    glVertex3f(8.0, 0, 5.0);
    glVertex3f(8.0, 0, -3.0);
    glVertex3f(8.0, -14.9, -3.0);
    glEnd();
    //lemari2
    glBegin(GL_QUADS);
    glColor3ub(135, 245, 171);
    glVertex3f(3.0, -14.9, 5.0);
    glVertex3f(3.0, 0, 5.0);
    glVertex3f(3.0, 0, -3.0);
    glVertex3f(3.0, -14.9, -3.0);
    glEnd();
    //lemari3
    glBegin(GL_QUADS);
    glColor3ub(176, 247, 199);
    glVertex3f(3.0, -14.9, -3.0);
    glVertex3f(3.0, 0, -3.0);
    glVertex3f(8.0, 0, -3.0);
    glVertex3f(8.0, -14.9, -3.0);
    glEnd();
    //lemari4
    glBegin(GL_QUADS);
    glColor3ub(176, 247, 199);
    glVertex3f(3.0, -14.9, 5.0);
    glVertex3f(3.0, 0, 5.0);
    glVertex3f(8.0, 0, 5.0);
    glVertex3f(8.0, -14.9, 5.0);
    glEnd();
    //lemari5
    glBegin(GL_QUADS);
    glColor3ub(133, 171, 146);
    glVertex3f(3.0, -14.9, 5.0);
    glVertex3f(3.0, -14.9, -3.0);
    glVertex3f(8.0, -14.9, -3.0);
    glVertex3f(8.0, -14.9, 5.0);
    glEnd();
    //lemari5
    glBegin(GL_QUADS);
    glColor3ub(133, 171, 146);
    glVertex3f(3.0, 0, 5.0);
    glVertex3f(3.0, 0, -3.0);
    glVertex3f(8.0, 0, -3.0);
    glVertex3f(8.0, 0, 5.0);
    glEnd();
    //motif lemari1
    glBegin(GL_QUADS);
    glColor3ub(5, 130, 48);
    glVertex3f(2.09, -1, 0.5);
    glVertex3f(2.09, -13.1, -2.5);
    glVertex3f(2.09, -1, -2.5);
    glVertex3f(2.09, -13.1, 0.5);
    glEnd();
    //motif lemari1
    glBegin(GL_QUADS);
    glColor3ub(5, 130, 48);
    glVertex3f(2.09, -13.1, 4.5);
    glVertex3f(2.09, -1, 4.5);
    glVertex3f(2.09, -13.1, 1.5);
    glVertex3f(2.09, -1, 1.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 240);
    glVertex3f(-20, 45.0, 15.0);
    glVertex3f(10, 45.0, 15.0);
    glVertex3f(10, 45, -15.0);
    glVertex3f(-20, 45.0, -15.0);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(217, 253, 255);
    glVertex3f(-20.0, 15.0, 15.0);
    glVertex3f(-20.0, 45.0, 15.0);
    glVertex3f(10.0, 45.0, 15.0);
    glVertex3f(10.0, 15.0, 15.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(232, 232, 227);
    glVertex3f(10.0, 45.0, 15.0);
    glVertex3f(10.0, 15.0, 15.0);
    glVertex3f(10.0, 15.0, -15.0);
    glVertex3f(10.0, 45.0, -15.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(232, 232, 227);
    glVertex3f(-20.0, 45.0, 15.0);
    glVertex3f(-20.0, 15.0, 15.0);
    glVertex3f(-20.0, 15.0, -15.0);
    glVertex3f(-20.0, 45.0, -15.0);
    glEnd();

    //balkon atas
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 23);
    glVertex3f(-25, 15.0, 25.0);
    glVertex3f(10, 15.0, 25.0);
    glVertex3f(10, 15, -15.0);
    glVertex3f(-25, 15.0, -15.0);
    glEnd();
    //atap atas1
    glBegin(GL_QUADS);
    glColor3ub(46, 39, 84);
    glVertex3f(-25, 45.0, 20.0);
    glVertex3f(15, 45.0, 20.0);
    glVertex3f(15, 45, -20.0);
    glVertex3f(-25, 45.0, -20.0);
    glEnd();
    //atap atas2
    glBegin(GL_QUADS);
    glColor3ub(82, 70, 148);
    glVertex3f(-25, 47.0, 20.0);
    glVertex3f(15, 47.0, 20.0);
    glVertex3f(15, 47, -20.0);
    glVertex3f(-25, 47.0, -20.0);
    glEnd();
    //atap depan
    glBegin(GL_QUADS);
    glColor3ub(114, 106, 161);
    glVertex3f(-25, 45, 20);
    glVertex3f(-25, 47, 20);
    glVertex3f(15, 47, 20);
    glVertex3f(15, 45,20);
    glEnd();
    //atap kiri
    glBegin(GL_QUADS);
    glColor3ub(114, 106, 161);
    glVertex3f(-25, 45, 20);
    glVertex3f(-25, 47, 20);
    glVertex3f(-25, 47, -20);
    glVertex3f(-25, 45, -20);
    glEnd();

       //atap belakang
    glBegin(GL_QUADS);
    glColor3ub(114, 106, 161);
    glVertex3f(-25, 45, -20);
    glVertex3f(-25, 47, -20);
    glVertex3f(15, 47, -20);
    glVertex3f(15, 45,-20);
    glEnd();
     //atap kanan
    glBegin(GL_QUADS);
    glColor3ub(114, 106, 161);
    glVertex3f(10, 45, 20);
    glVertex3f(10, 47, 20);
    glVertex3f(10, 47, -20);
    glVertex3f(10, 45, -20);
    glEnd();
    //pintu atas1
    glBegin(GL_POLYGON);
    glColor3ub(176, 118, 114);
    glVertex3f(-10, 15, 15.001);
    glVertex3f(1, 15, 15.001);
    glVertex3f(1, 33, 15.001);
    glVertex3f(-2, 35, 15.001);
    glVertex3f(-7, 35, 15.001);
    glVertex3f(-10, 33, 15.001);
    glEnd();
    //pintu atas2
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(-9.5, 16, 15.002);
    glVertex3f(-5, 16, 15.002);
    glVertex3f(-5, 23, 15.002);
    glVertex3f(-9.5, 23, 15.002);
    glEnd();
    //pintu atas3
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(0.5, 16, 15.002);
    glVertex3f(-4, 16, 15.002);
    glVertex3f(-4, 23, 15.002);
    glVertex3f(0.5, 23, 15.002);
    glEnd();
     //pintu atas5
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(-9.5, 24, 15.002);
    glVertex3f(-5, 24, 15.002);
    glVertex3f(-5, 34, 15.002);
    glVertex3f(-9.5, 32, 15.002);
    glEnd();
    //pintu atas4
    glBegin(GL_QUADS);
    glColor3ub(143, 85, 81);
    glVertex3f(0.5, 24, 15.002);
    glVertex3f(-4, 24, 15.002);
    glVertex3f(-4, 34, 15.002);
    glVertex3f(0.5, 32, 15.002);
    glEnd();
//..............................................................//
    //pagar balkon depan 1
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 80);
    glVertex3f(-22, 17, 23);
    glVertex3f(8.5, 17, 23);
    glVertex3f(8.5, 18.5, 23);
    glVertex3f(-22, 18.5, 23);
    glEnd();
    //pagar balkon depan 2
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 80);
    glVertex3f(-22, 19.5,23);
    glVertex3f(8.5, 19.5, 23);
    glVertex3f(8.5, 21, 23);
    glVertex3f(-22, 21, 23);
    glEnd();
    //pagar balkon kiri 2
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 80);
    glVertex3f(-22,19.5,23);
    glVertex3f(-22, 21, 23);
    glVertex3f(-22, 21, -13);
    glVertex3f(-22, 19.5, -13);
    glEnd();
    //pagar balkon kiri 1
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 80);
    glVertex3f(-22,17,23);
    glVertex3f(-22, 18.5, 23);
    glVertex3f(-22, 18.5, -13);
    glVertex3f(-22, 17, -13);
    glEnd();

      //pagar balkon kanan
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 80);
    glVertex3f(8.5, 15, 23);
    glVertex3f(8.5, 22, 23);
    glVertex3f(8.5, 22, 19);
    glVertex3f(8.5, 15, 19);
    glEnd();
     //pagar balkon kiri
    glBegin(GL_QUADS);
    glColor3ub(69, 51, 80);
    glVertex3f(-22, 15, -13);
    glVertex3f(-22, 22, -13);
    glVertex3f(-20, 22, -13);
    glVertex3f(-20, 15, -13);
    glEnd();

	glPushMatrix();
	glPopMatrix();

    glutSwapBuffers();

}
void idle(){
	if(!mouseDown){
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}

void mouse (int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	} else {
		mouseDown = false;
	}
}

void mouseMotion(int x, int y){
	if(mouseDown){
		yrot = x - xdiff;
		xrot = y + xdiff;
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();
        gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        glRotatef(xrot, 1.0f, 0.0f, 0.0f);
        glRotatef(yrot, 0.0f, 1.0f, 0.0f);
		glutPostRedisplay();
	}
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
	case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
	case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
	case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
	case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
