#include <stdio.h>
#include "map.h"
#include "pocmon.h"

int main() {
    generateMapEmpty(30,25);
    Pocmon pocmon = createPocmon("Bulbizarre",90,49,24,45,"Plante");
    return 0;
}