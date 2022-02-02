// Inventory using file
#include <stdio.h>

int main(){
    FILE *fp;
    int i, id, quantity;
    float price, value;
    char item[10], filename[10];

    printf("Input file name: ");
    scanf("%s", filename);

    fp=fopen(filename, "w");

    printf("Input inventory data for three items:\n");
    printf("Item Id, Item name, Price per kg, Quantity in kg:\n");
    for(i=1; i<=3; i++){
        scanf("%d %s %f %d", &id, item,  &price, &quantity);
        fprintf(fp,"%5d %s %.2f %5d\n",id, item, price, quantity);  // Write to file identical to printf()
    }
    fclose(fp);

    fprintf(stdout,"\n");

    fp = fopen(filename,"r");

    printf("Item-id Item-name  Price/kg  Quantity   Amount\n");
    for(i=1;i<=3;i++){
        fscanf(fp,"%3d %s %f %5d", &id, item, &price, &quantity); // // Read from file identical to scanf()
        value = price*quantity;
        fprintf(stdout,"%7d %-8s %8.2f %8d %11.2f\n", id, item, price, quantity, value);
    }

    fclose(fp);

    return 0;
}
