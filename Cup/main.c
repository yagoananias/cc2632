void operation(int *x, int y, int z){

    y = y + (*x) * z;

    *x = z + y;

    z = (*x) + z;

    return;

}

int main(int argc, char *argv[]){

    int x, y, z;

    x = 15;

    y = 60;

    z = 25;

    operation(&x, y, &z);

    operation(&z, x, &y);
    printf("Valor de x = %d ", x);
    printf("Valor de y = %d ", y);
    printf("Valor de z = %d ", z);

    return 0;

}