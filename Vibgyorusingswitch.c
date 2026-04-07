#include <stdio.h>
int main(){
        char a;
        printf("Enter a letter in VIBGYOR : "); 
        scanf("%c",&a);

        switch(a)
        {
                case 'v':
                case 'V': 
                        printf("Violet💜️\n");
                        break;
                case 'i' : 
                case 'I' :
                        printf("Indigo🫐️\n");
                        break;
                case 'b' : 
                case 'B' : 
                        printf("Blue💙️\n");
                        break;
                case 'g' : 
                case 'G' : 
                        printf("Green💚️\n");
                        break;
                case 'y' : 
                case 'Y' : 
                        printf("Yellow💛️\n");
                        break;
                case 'o' : 
                case 'O' : 
                        printf("Orange🧡️\n");
                        break;
                case 'r' : 
                case 'R' : 
                        printf("Red❤️\n");
                        break;
                default : 
                        printf("This is NOT in rainbow 🥀️\n");
        }
        return 0;
}
