#include <stdio.h>
#include <string.h>

int main() {
    int lx, ly;
    int mx, my;
    int numCases;
    int size;
    char *lydiaPath;
    
    scanf("%d", &numCases);
    
    for (size_t i = 0; i < numCases; i++) {
        scanf("%s", lydiaPath);
        
        for (size_t j = 0; j < strlen(lydiaPath) j++) {
            if(lydiaPath[j] == 'E')
                lydiaPath[j] == 'S';
            else
                lydiaPath[j] == 'E';
        }
        
        printf("Case #%d: %s\n", i + 1, lydiaPath);
    }
}