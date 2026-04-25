#include<stdio.h>                               

void get_set_clear_n_bits(int num, int n, int pos)                              // function to perform set, clear and get operations
{
    int mask = (1<<n)-1;                                                        // create mask with n number of 1 bits

    int shift_bits = (mask) << (pos-n+1);                                       // shift mask to the required position

    int set_bits = num | shift_bits;                                            // set the selected bits using OR operation

    //int shift_set_bit_to_lsb = set_bits >> (pos-n+1);                         // not required, so commented

    int clear_bits = num & ~(shift_bits);                                       // clear selected bits using AND with inverted mask

    int shift_clear_bit_to_lsb = clear_bits >> (pos-n+1);                       // shift cleared result to LSB (not used later)

    int get_bits = num & shift_bits;                                            // extract the selected bits using AND operation

    int shift_get_bit_to_lsb = get_bits >> (pos-n+1);                           // move extracted bits to LSB position

    printf("\nAfter setting %d bits from %d pos : %x", n, pos,set_bits);        // print result after setting bits

    printf("\nAfter clearing %d bits from %d pos : %x", n,pos, clear_bits);     // print result after clearing bits

    printf("\nAfter getting %d bits from %d pos : %x", n,pos, shift_get_bit_to_lsb);   // print extracted bits
}

int main()
{
    unsigned int num;                                                            // variable to store hexadecimal number

    int n, pos;                                                                 // n = number of bits, pos = position

    printf("Enter the number in hexadecimal: ");                                // prompt user for hexadecimal number

    scanf("%x", &num);                                                          // read hexadecimal number

    printf("\nEnter the number of bits in decimal: ");                          // prompt for number of bits

    scanf("%d", &n);                                                            // read number of bits

    printf("\nEnter the position: ");                                           // prompt for position

    scanf("%d", &pos);                                                          // read position value

    get_set_clear_n_bits(num, n, pos);                                          // call function to perform operations

    return 0;                                                                   // terminate program
}