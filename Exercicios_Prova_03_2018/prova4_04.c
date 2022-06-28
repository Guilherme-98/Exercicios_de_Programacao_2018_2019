#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    float x, y;
}Ponto;

typedef struct {
    Ponto verticeSuperior, verticeInferior;
}Retangulo;

float distancia(Ponto p1, Ponto p2) {
    return sqrtf(powf(p1.x - p2.x, 2) + powf(p1.y - p2.y, 2));
}

float calcularArea(Retangulo r1) {
    int l = r1.verticeSuperior.x - r1.verticeInferior.x;
    if (l < 0) {
        l = l * -1;
    }
    int b = r1.verticeSuperior.y - r1.verticeInferior.y;
    if (b < 0) {
        b = b * -1;
    }
    return b * l;

}

bool verificarPonto(Retangulo r1, Ponto p1) {
    int maiorY, maiorX, menorX, menorY;
    if (r1.verticeInferior.x >= r1.verticeSuperior.x) {
        maiorX = r1.verticeInferior.x;
        menorX = r1.verticeSuperior.x;
    }
    else {
        maiorX = r1.verticeSuperior.x;
        maiorX = r1.verticeInferior.x;
    }

    if (r1.verticeInferior.y >= r1.verticeSuperior.y) {
        maiorY = r1.verticeInferior.y;
        menorY = r1.verticeSuperior.y;
    }
    else {
        maiorY = r1.verticeSuperior.y;
        menorY = r1.verticeInferior.y;
    }

    if (p1.x >= menorX && p1.x <= maiorX && p1.y >= menorY && p1.y <= maiorY) {
        return true;
    }
    else {
        return false;
    }

}

int main() {
    Ponto p1, p2,p3;
    float x = 10;
    p1.x = 0; p1.y = 0;
    p2.x = 2; p2.y = 10;
    p3.x = 2.1; p3.y = 0;
    Retangulo r1;
    r1.verticeSuperior = p1;
    r1.verticeInferior = p2;
    printf("%d", verificarPonto(r1,p3));
    printf("%d", calcularArea(r1));
    printf("%d\n", distancia(p1, p2));


    return 0;
}
