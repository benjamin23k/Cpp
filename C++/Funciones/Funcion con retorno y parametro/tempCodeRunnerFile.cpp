string mostrarAbecedario(char inicio) {
    string resultado;
    for (char letra = inicio; letra <= 'Z'; letra++) {
        resultado += letra;
        resultado += " ";
    }
    return resultado;
}

int main () {
    char desde;
    cout << "Introduce la letra inicial (A-Z): ";
    cin >> desde;

    string abecedario = mostrarAbecedario(desde);
    cout << abecedario << endl;

    return 0;
}