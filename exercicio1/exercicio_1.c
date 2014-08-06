//guilmour

main(){
    float h, m, s;

    printf("Digite o tempo em segundos:");
    scanf("%f", &s);

    s = s;
    m = s/60;
    h = m/60;

    printf("\nSegundos: \t%.1f", s);
    printf("\nMinutos: \t%.1f", m);
    printf("\nHoras: \t\t%.2f\n", h);
}
