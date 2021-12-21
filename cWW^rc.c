#include<stdio.h>
#include<string.h>

int i, j;

int main(){

    /** Bikin Mesin PDA dengan menerima bahasa cwwc **/
    printf("\n>>>>>>>>> Mesin Push Down Automata <<<<<<<<<\n\n");
    printf("Kelompok 13 :\n");
    printf("- Muhammad Azka Atqiya      2100812\n");
    printf("- Fachri Najm Noer Kartiman 2106515\n");
    printf("- Elsa Nabiilah             2108805\n");
    printf("\nBahasa Yang Menerima c(W)(W^r)c\n");
    printf("Inputan = {a, b, c}\n");
    printf("W = (a + b)*\n");
    printf("\nJika ingin DITERIMA maka :\n");
    printf("- jumlah input harus genap\n");
    printf("- c harus ada di awal dan di akhir\n");
    printf("- harus reflect string\n");
    printf("\nJika tidak memenuhi syarat diatas maka TIDAK DITERIMA\n");
    printf("\nMasukkan string : ");

    char name[55];
    char temp[55];
    scanf("%s", &name);

    char hasil[55];
    strcpy(hasil, name);
    int point = 0;
    int len = strlen(name);
    if(name[0] == 'c' && name[len - 1] == 'c' && len % 2 == 0){
        point += 1;
    }

    for(i = 1; i < len - 1; i++){
        if(name[i] == 'a' || name[i] == 'b'){
            point += 1;
        }
    }

    j = 0;
    for(i = len - 1; i >= (len) /2; i--){
        temp[j] = name[i];
        j++;
    }
    temp[j] = '\0';
    name[len / 2] = '\0';
    // printf("%s\n", name);
    // printf("%s\n", temp);

    if(strcmp(name, temp) == 0){
        point += 1;
    }

    printf("String %s : ", hasil);
    if(point == len){
        printf("DITERIMA");
    }else{
        printf("TIDAK DITERIMA");
    }printf("\n");

    return 0;
}
