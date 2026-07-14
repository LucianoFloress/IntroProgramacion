#include "raylib.h"

class Pelota
{
protected:
    int x;
    int y;
    int radio;
    int velocidad;
    Color color;
    int contador;

public:
    void dibujar()
    {
        DrawCircle(x, y, radio, color);
    }
    Pelota() {};
    Pelota(int x0, int y0)
    {
        x = x0;
        y = y0;
        radio = 30;
        velocidad = 4;
    }
};

class Pelota1 : public Pelota
{
public:
    Pelota1() {}
    Pelota1(int x0, int y0) : Pelota(x0, y0)
    {
        color = RED;
    }

    void update()
    {
        if (IsKeyDown(KEY_RIGHT))
            x += velocidad;
        if (IsKeyDown(KEY_LEFT))
            x -= velocidad;
        if (IsKeyDown(KEY_UP))
            y -= velocidad;
        if (IsKeyDown(KEY_DOWN))
            y += velocidad;

        if (x < radio)
            x = radio;
        if (x > 800 - radio)
            x = 800 - radio;
        if (y < radio)
            y = radio;
        if (y > 600 - radio)
            y = 600 - radio;
    }
};

class Pelota2 : public Pelota
{
public:
    Pelota2() {}
    Pelota2(int x0, int y0) : Pelota(x0, y0)
    {
        color = BLUE;
    }

    void update()
    {
        contador++;

        if (contador == 60)
        {
            color = ORANGE;
        }

        if (contador == 120)
        {
            color = BLUE;
            contador = 0;
        }
    }
};

class Pelota3 : public Pelota
{
    bool creciendo;

public:
    Pelota3() {}
    Pelota3(int x0, int y0) : Pelota(x0, y0)
    {
        color = GREEN;
    }

    void update()
    {

        contador++;

        if (contador >= 2)
        {

            if (creciendo)
                radio++;
            else
                radio--;

            if (radio >= 50)
                creciendo = false;

            if (radio <= 20)
                creciendo = true;

            contador = 0;
        }
    }
};

class Juego
{

private:
    Pelota1 pelota1;
    Pelota2 pelota2;
    Pelota3 pelota3;

public:
    Juego()
    {

        pelota1 = Pelota1(150, 300);
        pelota2 = Pelota2(400, 300);
        pelota3 = Pelota3(650, 300);
    }

    void play()
    {

        InitWindow(800, 600, "Unidad Herencia");
        SetTargetFPS(60);

        while (!WindowShouldClose())
        {

            pelota1.update();
            pelota2.update();
            pelota3.update();

            BeginDrawing();

            ClearBackground(RAYWHITE);

            pelota1.dibujar();
            pelota2.dibujar();
            pelota3.dibujar();

            DrawText("Pelota 1: mover con flechas", 20, 20, 20, BLACK);
            DrawText("Pelota 2: cambia de color", 20, 45, 20, BLACK);
            DrawText("Pelota 3: cambia de tamano", 20, 70, 20, BLACK);

            EndDrawing();
        }

        CloseWindow();
    }
};

int main()
{

    Juego juego;
    juego.play();

    return 0;
}