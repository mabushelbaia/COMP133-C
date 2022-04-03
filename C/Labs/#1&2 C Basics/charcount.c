/*ask the user to enter the number
read the number and save it as n
set counter = 0
while n doesn't equal 0;
    mod n by 10
    save it as rem
    if rem % 2 == 0:
        evencount = evencount + rem
    else 
        oddcount = oddcount + rem
    n = n/10
end while
if oddcound is greater than evencount
    print oddcount
else 
    print evencount


end if */
#include <stdio.h>
int main() {
    int n;
    int Evencount = 0;
    int Oddcount = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        int rem = n % 10;
            if (rem%2==0){
            Evencount = Evencount + rem;
        }
        else{
            Oddcount = Oddcount +rem;    
        }
        n = n/10;
        
    }
    if (Evencount > Oddcount){
        printf("Evencount is bigger and equalls: %d\n",Evencount);
    }
    else{
        printf("Oddcount is bigger and equalls: %d\n",Oddcount);
    }
    return 0;
}