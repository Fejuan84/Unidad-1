#include "Circulo.cpp"
#include "Cuadrado.cpp"

int main() {

    Figura *figuras[] = { new Circulo(), new Cuadrado() };

    for (Figura *fig : figuras) {
        fig->dibujar();
    }

    return 0;
}